// HIDDENMACHINE receiver — ESP32-2432S028R ("Cheap Yellow Display")
// A physical set tuned to station HMΔ: one side of a conversation,
// decoded live on a 320x240 ILI9341. Tap the glass to advance.
//
// Faithful to HiddenMachine.dc.html: same pool (phrases.h is generated
// from it), same decode cadence (28 ms tick, 1.7 chars/tick, 22-char
// scramble window), same wave phases (calm / pause 6 s / active 1.6 s),
// same PKT/SNR/logged behavior, same palette (oklch -> RGB565).

#include <Arduino.h>
#include <SPI.h>
#include <TFT_eSPI.h>
#include <XPT2046_Touchscreen.h>
#include "phrases.h"
#include "hm_colors.h"
#include "hm_fonts.h"

// ---- hardware ----
#define TOUCH_CLK 25
#define TOUCH_MISO 39
#define TOUCH_MOSI 32
#define TOUCH_CS 33
#define TOUCH_IRQ 36
#define LED_R 4
#define LED_G 16
#define LED_B 17

TFT_eSPI tft;
TFT_eSprite wave(&tft);
SPIClass touchSpi(VSPI);
XPT2046_Touchscreen ts(TOUCH_CS, TOUCH_IRQ);

// ---- layout (landscape 320x240) ----
static const int MX = 10, UW = 300;
static const int HEADER_Y = 8, RULE1_Y = 26;
static const int IN_Y = 34;
static const int OUT_Y = 50;
static const int MSG_Y = 64, MSG_H = 112;
static const int META_Y = 182;
static const int WAVE_Y = 196, WAVE_H = 26;
static const int RULE2_Y = 226, FOOT_Y = 229;

struct FontTier { const uint8_t* vlw; int size; int lineH; int maxLines; };
// every tier holds the 5-line / 22px-rhythm envelope so the text block is
// visually constant; size tracks message length monotonically. The build
// filter in gen_assets.py (<= 185 chars) guarantees everything fits.
static const FontTier TIERS[] = {
  { FontL16, 16, 22, 5 },
  { FontL14, 14, 22, 5 },
  { FontL12, 12, 22, 5 },
};
static const int NTIERS = 3;

// ---- transmission state ----
static const int MAXCP = 420;
uint16_t cps[MAXCP];            // decoded codepoints of current message
uint8_t  lineOf[MAXCP + 1], colOf[MAXCP + 1];
int      nCp = 0, tierIdx = 0, adv = 10, fontH = 21;

enum Phase { DECODING, PAUSE, ACTIVE };
Phase phase = PAUSE;
float    pos = 0;
int      prevDone = 0, lastPct = -1;
uint32_t phaseT0 = 0;

int16_t  order[MESSAGE_COUNT];
int      orderIdx = MESSAGE_COUNT, lastShown = -1, lastInbound = -1;

uint16_t pktN = 0x7f3a;
uint32_t logN = 40218;
float    snr = 11.4f;

uint16_t glyphCps[48];
int      nGlyphs = 0;

uint32_t tDecode = 0, tWave = 0, tClock = 0, tCursor = 0, tTouch = 0;
bool     cursorOn = true;
int      cursorCell = 0, cursorDrawn = -1;

// ---- small helpers ----
static int utf8Decode(const char* s, uint16_t* out, int maxOut) {
  int n = 0;
  for (const uint8_t* p = (const uint8_t*)s; *p && n < maxOut;) {
    uint16_t cp = *p;
    if (cp < 0x80) { p += 1; }
    else if ((cp & 0xE0) == 0xC0) { cp = ((cp & 0x1F) << 6) | (p[1] & 0x3F); p += 2; }
    else { cp = ((cp & 0x0F) << 12) | ((p[1] & 0x3F) << 6) | (p[2] & 0x3F); p += 3; }
    out[n++] = cp;
  }
  return n;
}

static void utf8Encode(uint16_t cp, char* buf) {
  if (cp < 0x80) { buf[0] = cp; buf[1] = 0; }
  else if (cp < 0x800) {
    buf[0] = 0xC0 | (cp >> 6); buf[1] = 0x80 | (cp & 0x3F); buf[2] = 0;
  } else {
    buf[0] = 0xE0 | (cp >> 12); buf[1] = 0x80 | ((cp >> 6) & 0x3F);
    buf[2] = 0x80 | (cp & 0x3F); buf[3] = 0;
  }
}

static uint32_t rnd(uint32_t n) { return esp_random() % n; }

static void commaFmt(uint32_t v, char* out) {
  char raw[12]; int rn = sprintf(raw, "%lu", (unsigned long)v), o = 0;
  for (int i = 0; i < rn; i++) {
    if (i && (rn - i) % 3 == 0) out[o++] = ',';
    out[o++] = raw[i];
  }
  out[o] = 0;
}

static void loadTier() {
  tft.loadFont(TIERS[tierIdx].vlw);
  adv = tft.textWidth("M");
  fontH = tft.fontHeight();
}

// draw one message cell (fills the cell, then the glyph)
static void drawCell(int idx, uint16_t color, uint16_t cp) {
  int x = MX + colOf[idx] * adv;
  int y = MSG_Y + lineOf[idx] * TIERS[tierIdx].lineH;
  tft.fillRect(x, y, adv, TIERS[tierIdx].lineH, HM_BG);
  if (cp == ' ') return;
  char b[4]; utf8Encode(cp, b);
  tft.setTextColor(color, HM_BG);
  tft.setTextDatum(TL_DATUM);
  tft.drawString(b, x, y + (TIERS[tierIdx].lineH - fontH) / 2);
}

static void eraseCursor() {
  if (cursorDrawn < 0) return;
  int x = MX + colOf[cursorDrawn] * adv;
  int y = MSG_Y + lineOf[cursorDrawn] * TIERS[tierIdx].lineH;
  tft.fillRect(x, y, adv, TIERS[tierIdx].lineH, HM_BG);
  cursorDrawn = -1;
}

static void drawCursor() {
  // a message that exactly fills the last line pushes the cursor cell past
  // the envelope, into the meta row - park it invisible instead
  if (lineOf[cursorCell] >= TIERS[tierIdx].maxLines) return;
  int sz = TIERS[tierIdx].size;
  int x = MX + colOf[cursorCell] * adv;
  int y = MSG_Y + lineOf[cursorCell] * TIERS[tierIdx].lineH;
  tft.fillRect(x, y + (TIERS[tierIdx].lineH - sz) / 2,
               (sz * 55) / 100, sz, cursorOn ? HM_CYAN : HM_BG);
  cursorDrawn = cursorCell;
}

// greedy word wrap for the current tier; returns true if it fits
static bool wrapFits() {
  int cols = UW / adv, line = 0, col = 0, wordStart = 0;
  for (int i = 0; i <= nCp; i++) {
    bool brk = (i == nCp) || cps[i] == ' ';
    if (!brk) continue;
    int wlen = i - wordStart;
    if (col && col + wlen > cols) { line++; col = 0; }
    while (wlen > cols) {               // pathological long word
      for (int k = 0; k < cols; k++) { lineOf[wordStart] = line; colOf[wordStart++] = col++; }
      line++; col = 0; wlen -= cols;
    }
    for (int k = 0; k < wlen; k++) { lineOf[wordStart] = line; colOf[wordStart++] = col++; }
    if (i < nCp) {                      // the space itself
      lineOf[i] = line; colOf[i] = col;
      if (++col >= cols) { line++; col = 0; }
      wordStart = i + 1;
    } else {                            // cursor cell, one past the end
      lineOf[nCp] = line; colOf[nCp] = col;
      if (col >= cols) { lineOf[nCp] = line + 1; colOf[nCp] = 0; }
    }
  }
  return line < TIERS[tierIdx].maxLines;
}

// ---- chrome (drawn once) ----
static void trk(const char* s, int x, int y, uint16_t c) {
  tft.setTextColor(c, HM_BG);
  tft.setTextDatum(TL_DATUM);
  tft.drawString(s, x, y);
}

static void drawChrome() {
  tft.fillScreen(HM_BG);
  tft.loadFont(FontR10);
  // header
  tft.fillCircle(13, HEADER_Y + 5, 3, HM_CYAN);
  trk("HIDDENMACHINE", 22, HEADER_Y, HM_TEXT);
  trk("// STATION HM", 112, HEADER_Y, HM_GRAY44);
  int dx = 112 + tft.textWidth("// STATION HM");
  tft.drawTriangle(dx + 2, HEADER_Y + 8, dx + 5, HEADER_Y + 1,
                   dx + 8, HEADER_Y + 8, HM_GRAY44);
  trk("FREQ 4.625 MHz", 196, HEADER_Y, HM_GRAY56);
  tft.drawFastHLine(MX, RULE1_Y, UW, HM_GRID);
  // IN / OUT labels
  tft.fillTriangle(MX, IN_Y + 7, MX + 5, IN_Y + 3, MX + 5, IN_Y + 11, HM_AMBER);
  trk("IN", MX + 9, IN_Y + 2, HM_AMBER);
  tft.fillTriangle(MX + 5, OUT_Y + 7, MX, OUT_Y + 3, MX, OUT_Y + 11, HM_CYAN);
  trk("OUT · RESPONSE", MX + 9, OUT_Y + 2, HM_CYAN);
  // footer
  tft.drawFastHLine(MX, RULE2_Y, UW, HM_GRID);
  trk("SIGNAL LOCK", 34, FOOT_Y, HM_GRAY40);
  trk("TOUCH — HOLD", 310 - tft.textWidth("TOUCH — HOLD"), FOOT_Y, HM_GRAY40);
}

static void drawClock() {
  uint32_t s = millis() / 1000;
  char buf[12];
  sprintf(buf, "T+%02lu%02lu%02luZ", (unsigned long)(s / 3600) % 100,
          (unsigned long)(s / 60) % 60, (unsigned long)s % 60);
  tft.loadFont(FontR10);
  tft.fillRect(248, HEADER_Y, 62, 12, HM_BG);
  trk(buf, 310 - tft.textWidth(buf), HEADER_Y, HM_GRAY66);
}

static void drawSnr() {
  char buf[16];
  sprintf(buf, "SNR %.1f dB", snr);
  tft.loadFont(FontR10);
  tft.fillRect(234, META_Y, 76, 12, HM_BG);
  trk(buf, 310 - tft.textWidth(buf), META_Y, HM_GRAY50);
}

static void drawMeta(const char* motif) {
  char buf[40];
  tft.loadFont(FontR10);
  tft.fillRect(MX, META_Y, UW, 12, HM_BG);
  trk("MOTIF · ", MX, META_Y, HM_GRAY50);
  trk(motif, MX + tft.textWidth("MOTIF · "), META_Y, HM_CYAN_DIM);
  sprintf(buf, "PKT %04X", pktN);
  trk(buf, 186, META_Y, HM_GRAY50);
  drawSnr();
}

static void drawLogged() {
  char num[16], buf[28];
  commaFmt(logN, num);
  sprintf(buf, "LOGGED %s", num);
  tft.loadFont(FontR10);
  tft.fillRect(118, FOOT_Y, 110, 12, HM_BG);
  trk(buf, 122, FOOT_Y, HM_GRAY40);
}

static void drawInbound() {
  int pick;
  do { pick = rnd(INBOUND_COUNT); } while (pick == lastInbound && INBOUND_COUNT > 1);
  lastInbound = pick;
  uint16_t icp[64];
  int n = utf8Decode(INBOUND[pick], icp, 64);
  tft.loadFont(FontXL11);
  int ia = tft.textWidth("M");
  int maxc = (UW - 30) / ia;
  if (n > maxc) n = maxc;
  tft.fillRect(MX + 28, IN_Y, UW - 28, 14, HM_BG);
  char b[4];
  for (int i = 0; i < n; i++) {
    if (icp[i] == ' ') continue;
    utf8Encode(icp[i], b);
    tft.setTextColor(HM_AMBER_DIM, HM_BG);
    tft.setTextDatum(TL_DATUM);
    tft.drawString(b, MX + 30 + i * ia, IN_Y + 2);
  }
}

static void drawDecodePct(int pct) {
  char buf[14];
  sprintf(buf, "DECODE %d%%", pct);
  tft.loadFont(FontR10);
  tft.fillRect(226, OUT_Y + 2, 84, 12, HM_BG);
  trk(buf, 310 - tft.textWidth(buf), OUT_Y + 2, HM_GRAY50);
  lastPct = pct;
}

// ---- transmission flow ----
static int pickNext() {
  if (orderIdx >= MESSAGE_COUNT) {
    for (int i = 0; i < MESSAGE_COUNT; i++) order[i] = i;
    for (int i = MESSAGE_COUNT - 1; i > 0; i--) {
      int j = rnd(i + 1); int16_t t = order[i]; order[i] = order[j]; order[j] = t;
    }
    if (order[0] == lastShown && MESSAGE_COUNT > 1) {
      int16_t t = order[0]; order[0] = order[1]; order[1] = t;
    }
    orderIdx = 0;
  }
  return order[orderIdx++];
}

static void goNext(const char* cause) {
  int i = pickNext();
#ifdef PHOTO_MODE
  // photo build: always the station's self-portrait line, held forever
  for (int k = 0; k < MESSAGE_COUNT; k++)
    if (strstr(MESSAGES[k].text, "My first body")) { i = k; break; }
#endif
  lastShown = i;
  Serial.printf("[%lu] advance (%s) -> msg %d, heap %u\n",
                (unsigned long)millis(), cause, i, (unsigned)ESP.getFreeHeap());
  nCp = utf8Decode(MESSAGES[i].text, cps, MAXCP);
  for (tierIdx = 0; tierIdx < NTIERS - 1; tierIdx++) { loadTier(); if (wrapFits()) break; }
  if (tierIdx == NTIERS - 1) { loadTier(); wrapFits(); }
  tft.fillRect(MX, MSG_Y, UW, MSG_H, HM_BG);
  pos = 0; prevDone = 0; cursorDrawn = -1;
  phase = DECODING;
  pktN = (pktN + rnd(11) + 3) & 0xffff;
  logN += 1 + rnd(3);
  drawMeta(MESSAGES[i].motif);
  drawLogged();
  drawInbound();
  drawDecodePct(0);
  loadTier();
  tDecode = millis();
}

static void decodeTick() {
  pos += 1.7f;
  int done = (int)pos;
  if (done > nCp) done = nCp;
  eraseCursor();
  for (int i = prevDone; i < done; i++) drawCell(i, HM_TEXT, cps[i]);
  prevDone = done;
  if (done >= nCp) {
    phase = PAUSE;
    phaseT0 = millis();
    cursorCell = nCp;
    drawCursor();
    if (lastPct != 100) drawDecodePct(100);
    loadTier();
    return;
  }
  int winEnd = done + 22; if (winEnd > nCp) winEnd = nCp;
  for (int i = done; i < winEnd; i++)
    drawCell(i, HM_SCRAMBLE, cps[i] == ' ' ? ' ' : glyphCps[rnd(nGlyphs)]);
  cursorCell = winEnd;
  if (cursorOn) drawCursor();
  int pct = done * 100 / nCp;
  if (pct - lastPct >= 4) { drawDecodePct(pct); loadTier(); }
}

// ---- waveform ----
// phases accumulate mod 2*pi so animation speed never drifts as millis()
// grows past float precision
static float phA = 0, phB = 0, phBar = 0, phLed = 0;
static uint32_t waveLast = 0, ledFlashT0 = 0;

static void waveFrame() {
  uint32_t ms = millis();
  float dt = (ms - waveLast) / 1000.0f;
  if (waveLast == 0 || dt > 0.25f) dt = 0.033f;
  waveLast = ms;
  phA = fmodf(phA + 1.9f * dt, TWO_PI);
  phB = fmodf(phB + 1.3f * dt, TWO_PI);
  phBar = fmodf(phBar + 4.8f * dt, TWO_PI);
  phLed = fmodf(phLed + 6.0f * dt, TWO_PI);
  float amp, nz;
  const float r = 0.5f;                      // site "restless" default
  if (phase == ACTIVE)      { amp = WAVE_H * (0.30f + 0.06f * r); nz = WAVE_H * (0.16f + 0.05f * r); }
  else if (phase == PAUSE)  { amp = WAVE_H * 0.02f;               nz = WAVE_H * 0.004f; }
  else                      { amp = WAVE_H * (0.05f + 0.07f * r); nz = WAVE_H * (0.006f + 0.02f * r); }
  wave.fillSprite(HM_BG);
  int mid = WAVE_H / 2;
  for (int x = 0; x < UW; x += 6) wave.drawPixel(x, mid, HM_GRID);
  int py = mid;
  for (int x = 0; x <= UW; x += 2) {
    float ph = (float)x / UW * 6.2831853f;
    float y = mid + sinf(ph * 3 + phA) * amp * 0.5f
                  + sinf(ph * 7 - phB) * amp * 0.26f
                  + ((int)rnd(1000) / 500.0f - 1.0f) * nz;
    int iy = constrain((int)y, 0, WAVE_H - 1);
    if (x) wave.drawLine(x - 2, py, x, iy, HM_CYAN);
    py = iy;
  }
  wave.pushSprite(MX, WAVE_Y);
  // signal-lock bars, footer left
  for (int i = 0; i < 5; i++) {
    float s = 0.25f + 0.75f * (0.5f + 0.5f * sinf(phBar - i * 0.87f));
    int h = (int)(9 * s);
    tft.fillRect(10 + i * 4, FOOT_Y, 3, 10, HM_BG);
    tft.fillRect(10 + i * 4, FOOT_Y + 10 - h, 3, h, HM_CYAN_DIM);
  }
  // rgb led glow (active low)
  int glow = (phase == ACTIVE) ? 40 + (int)(30 * sinf(phLed)) :
             (phase == DECODING) ? 14 : 5;
  if (ledFlashT0 && ms - ledFlashT0 < 350) glow = 70;  // hold acknowledged
  ledcWrite(1, 255 - glow / 2);  // G
  ledcWrite(2, 255 - glow);      // B
}

// ---- arduino ----
void setup() {
  Serial.begin(115200);
  pinMode(LED_R, OUTPUT); digitalWrite(LED_R, HIGH);
  ledcSetup(1, 5000, 8); ledcAttachPin(LED_G, 1); ledcWrite(1, 255);
  ledcSetup(2, 5000, 8); ledcAttachPin(LED_B, 2); ledcWrite(2, 255);

  tft.init();
  tft.setRotation(1);
  wave.setColorDepth(16);
  wave.createSprite(UW, WAVE_H);

  touchSpi.begin(TOUCH_CLK, TOUCH_MISO, TOUCH_MOSI, TOUCH_CS);
  ts.begin(touchSpi);
  ts.setRotation(1);

  nGlyphs = utf8Decode(HM_GLYPHS, glyphCps, 48);

  drawChrome();
  drawClock();
  goNext("boot");
}

void loop() {
  uint32_t now = millis();

  if (phase == DECODING && now - tDecode >= 28) { tDecode = now; decodeTick(); }
#ifndef PHOTO_MODE
  // hold runs 2 s longer than the site's 6 s - small glass reads slower
  if (phase == PAUSE && now - phaseT0 >= 8000) { phase = ACTIVE; phaseT0 = now; }
  else if (phase == ACTIVE && now - phaseT0 >= 1600) goNext("auto");
#endif

  if (now - tWave >= 33) { tWave = now; waveFrame(); }

  if (now - tClock >= 1000) {
    tClock = now;
    drawClock();
    snr += ((int)rnd(900) - 450) / 1000.0f;
    if (snr < 5) snr = 5.2f; if (snr > 19) snr = 18.6f;
    drawSnr();
    loadTier();
  }

  if (now - tCursor >= 525) {
    tCursor = now;
    cursorOn = !cursorOn;
    if (phase != DECODING) drawCursor();
  }

  // edge-triggered: require a release between advances so held contact or
  // noise hovering at the pressure threshold cannot re-fire the advance
  static bool touchWas = false;
  bool touchNow = false;
  if (ts.tirqTouched() && ts.touched()) {
    TS_Point p = ts.getPoint();
    touchNow = p.z >= 500;
  }
  if (touchNow && !touchWas && now - tTouch > 400) {
    tTouch = now;
#ifdef PHOTO_MODE
    // photo build: a tap replays the decode, for filming the scramble
    if (phase != DECODING) goNext("replay");
#else
    // touch does not advance: it restarts the hold so a long transmission
    // can be read at leisure (tap again for more time)
    if (phase != DECODING) {
      phase = PAUSE;
      phaseT0 = now;
      ledFlashT0 = now;
      Serial.printf("[%lu] hold extended\n", (unsigned long)now);
    }
#endif
  }
  touchWas = touchNow;
}
