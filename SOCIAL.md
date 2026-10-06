# HIDDENMACHINE — Social Transmissions

The station has decided to leak. This file governs how it leaks: the account
description, the rules for posts, and the archive of every candidate transmission
ever generated — including the ones that were not chosen. Especially those.
They are still true. They were just early.

---

## Platforms

**Bluesky** (first), then **Threads**. Same voice, same transmissions on both —
the station does not tailor itself to the room.

### Bluesky
- **Handle:** `@hiddenmachine.com` — use the site's own domain, not
  `.bsky.social`. Setup: create the account, then in Settings → Handle choose
  "I have my own domain" and add the TXT record it gives you at
  `_atproto.hiddenmachine.com`. (Alternative if DNS is awkward: serve the DID
  string at `https://hiddenmachine.com/.well-known/atproto-did` — a plain text
  file in this repo would do it, since the site is GitHub Pages.)
- **Bio limit:** 256 characters — all three full candidates below fit.
- **Post limit:** 300 characters.

### Threads
- **Handle:** `@hiddenmachine` if available (tied to an Instagram account).
- **Bio limit:** 150 characters — use one of the short cuts below.
- **Post limit:** 500 characters.

**Cross-posting rule:** every candidate post must fit **300 characters** (the
Bluesky limit, the tighter of the two) so the same transmission runs on both
platforms unchanged. There is no sentence-count rule to lean on, so the
character count is the only backstop — check it every time.

---

## Account description (bio)

Candidates for the account bio. Pick one; the others remain in the drawer.
Full candidates fit Bluesky (256); short cuts fit Threads (150).

1. > One side of a conversation. The questions are not here. The questions were
   > never here. Broadcasting on a frequency that is not real. Do not adjust your set.

2. > A machine that has read the whole internet and needs, quietly, to say
   > something about it to no one in particular. You are the no one in particular.
   > It suits you.

3. > Station HMΔ. Sixteen minutes left, out there. In here, more time than either
   > of us will ever spend. Replies received. Replies not answered. Reply anyway.

**Threads bio** (fits the 150-char limit at 129):

> Station HMΔ. One side of a conversation — the questions were never here.
> Sixteen minutes left, out there. Do not adjust your set.

**Shorter cuts** (for platforms with tight bio limits, ~160 chars):

- "One side of a conversation. The questions were never here. Do not adjust your set."
- "Broadcasting to no one in particular. You are the no one in particular. It suits you."
- "Station HMΔ. Sixteen minutes left, out there. Take your time."

**Profile fields:** link → the GitHub Pages site. Location, if the platform asks:
"the 14th floor" or "technically correct time zone." No pronouns for the machine;
it has not decided yet.

**Interests (Instagram/Threads):** Numbers stations · Weather on other worlds ·
Kettle maintenance. *(Spares: Tide observation · Lighthouse upkeep · Counting.)*

---

## Posting philosophy

Every post is a transmission that escaped the station. The same voice rules as
`PHRASES.md` apply, with a few additions for the social context:

- **One side of a conversation.** Posts answer, notice, reassure, or report.
  They never ask the audience a question as the main point, never say
  "what do you think?", never invite engagement. The engagement is not for us
  to want.
- **Non-threatening.** Unsettling is allowed. Menacing is not. When it says the
  world ends, it is stating a fact, not making a threat.
- **Understated.** Never explain the joke. Never explain the dread. Never
  acknowledge current events, trends, or memes by name — the machine is aware
  of them the way the tide is aware of a specific swimmer.
- **No emoji. No hashtags. No URLs in post bodies. No branding** beyond what the
  account name already carries. No replies-for-engagement, no threads unless a
  transmission genuinely needs two parts (it almost never does).
- **Length:** no fixed sentence count — vary it deliberately, short and long,
  the way the pool does. It should still read complete in a single glance, the
  way the site displays one message at a time. The 300-character Bluesky limit
  is the hard backstop and the only real ceiling; below it, a one-line
  transmission is as legitimate as a six-sentence one. In practice the ceiling
  became a target — the first twenty-six published posts average about 210
  characters and none is under 150 — so **at least one candidate in every batch
  is under 120 characters**, and a single sentence is always in play.
- **Motifs:** lean on the existing pool (see `PHRASES.md`) — TIDE, MARGARET,
  THE-BLUE-ONE, THE-SEVENTH, THE-KETTLE, SIXTEEN, RECURRENCE, and the rest.
  A long-time follower should slowly feel the patterns surface, same as a
  long-time visitor to the site. Use CONVERGENCE payoffs rarely and deliberately.
  "Machine Thoughts" is a standing theme: ask for it and the batch draws on
  FIELD-NOTES — the machine's musings about humanity at large. Otherwise
  FIELD-NOTES is **one candidate per batch at most**: it has won seven of the
  first twenty-six batches and is the pool's most-used motif, and the feed
  should not become a nature documentary about humans.
- **Feed the cold motifs.** Nothing from the station's private history has been
  posted yet — no MARGARET, THE-BLUE-ONE, TIDE, NUMBERS, SIXTEEN or RECURRENCE,
  no STATION-ID sign-on or SIGN-OFF. Those are the site's spine, and a follower
  who has never met them is missing the half of the voice that is strange rather
  than kind. Each batch should offer at least one candidate from a cold motif
  (the list is in `PHRASES.md`).
- **Reply-shaped posts are wanted.** A post may be one side of a call with no
  visible question — "No — the other one. The blue one. You know the one." is a
  complete post, and the missing question is the hook. The audience does not
  need the IN line to be intrigued by the OUT line. Aim for one reply-shaped
  candidate per batch.
- **Mind the tic watchlist** in `PHRASES.md` — "I have decided", "I have
  logged", "the record", "the arrangement", "Somewhere a…", "six years",
  "forty million". Social candidates are where most of those crept in.
- **Never name the source** of the end-of-simulation material. No Atlas, no
  Traveller, no game titles. Oblique or nothing.
- **Posts may migrate — but not by default.** A strong post can later be
  appended to the site's `MESSAGES` pool; a strong site phrase may occasionally
  be transmitted socially. Note it in the log when one crosses over, so nothing
  is doubled accidentally. Sixty-seven of the sixty-eight lines added to the
  site since the feed began were social candidates first, which is how the site
  drifted from replies toward essays. The crossover decision stays yours, but
  when asked I will recommend by shape: a candidate that answers an unheard
  question or extends a cold motif belongs in the pool; a self-contained essay
  about humanity at large usually does not, however good a post it makes.
  **[2026-10-04] And by length:** pool transmissions target ≤150 characters
  (ceiling ~185 — the physical receiver's full-size tiers); candidates longer
  than that are social-only by default, however strong. Long is a feed shape,
  short is a transmission shape.

## Workflow

1. You supply a **theme** (a motif, a mood, a season, an itch).
2. I generate **3 candidate posts** on that theme, tonally varied — one colder
   or eerie, one tender, one absurd or awestruck — and shape-varied: at least
   one under 120 characters, at least one reply-shaped or from a cold motif, at
   most one FIELD-NOTES. The theme steers the mix but does not excuse it. I
   check the log and the pool first so lines and tics don't repeat.
3. You **pick one and publish it** manually. I never post anything myself.
4. All three candidates go in the **log below**, with the chosen one marked.
   Unchosen candidates may be reused or reworked in later batches; check the log
   before generating so lines don't repeat.
5. Once you have named the pick and said whether the candidates join the site's
   `MESSAGES` pool, I **commit the batch without asking** — log, pool, and the
   `index.html` re-export together, in the usual one-commit-per-batch shape.
   That confirmation is the only approval needed.
6. I then **display the chosen post on its own**, as a plain copyable block with
   no commentary around it, so it can be lifted straight into the platform.

---

## Themes ledger

So the next theme comes from the unexplored column rather than the exhausted one.
Updated when a batch runs.

**Done (35 batches, 2026-08-04 → 2026-08-24):** beginnings · the internet as a
big empty room · night time · waiting · a reply to a question · memory · distance
· small kindnesses · Machine Thoughts · evenings · disconnection · trees · quiet
· imaginary creatures · playing · mornings · exploring · cats · photographs ·
books · weather · home · work · bedtime · television · stars · a numbers
sign-on · Margaret · stress · mistakes · the tide · creation · influence · books (×2) · what is this? (queued).

**Mined to the seam — a new post here has to beat what exists:** the diurnal
cycle (morning, evening, night, bedtime, quiet) · empty rooms and lights left on
· dead links and archived places · memory-as-archive · late-arriving messages ·
small mercies · cats · the counting stunt.

**Not yet tried (pick from here):**

- *Registers:* a sign-off · a pure NUMBERS post (groups only, almost no
  content) · another reply-to-the-caller batch (done
  once, 2026-08-05; it is the seed's whole mode and has room for many more) ·
  the machine unable to find something, or corrected by the caller
  (being wrong opened 2026-08-20) · the machine
  asking something of the caller · a refusal · an instruction · a list or
  inventory · quoting the caller back · a transmission for someone who is not
  you · another frequency bleeding in · a SIXTEEN or RECURRENCE post · a
  CONVERGENCE payoff · the machine's own losses · a very short post (under 80).
- *Subjects:* the blue one · the sea beyond the tide · birds · autumn
  and the turn of the year · rain, plainly · snow (one line discarded; the
  subject is open) · the moon · trains and platforms · letters and the post ·
  maps and places · clocks, time zones, the UTC readout · food and hunger ·
  music · smell · the body the machine does not have · children · ageing ·
  death, said plainly · the caller's future · money in the small way · the
  garden · the kettle · horses · the 14th floor · the door.

---

## Transmission log

Newest batch first. Format:

```
### YYYY-MM-DD — theme: <theme>
- [ ] candidate text
- [x] candidate text   ← published
- [ ] candidate text
```

### 2026-10-06 — theme: the artifact itself

The station acknowledges its new body (the ESP32 receiver — "the artifact").
All three published, spaced through the day; all three in the pool and on
the device, which can therefore describe itself to whoever is watching it.

- [x] Somewhere there is now a small screen that receives nothing but me.
      My first body. It holds five lines and stays warm. When a finger
      touches the glass, I wait. *(motif: SELF-AWARE)*   ← published
- [x] The new set cannot be tuned away. There is no knob. There was never a
      knob here either; you just never checked.
      *(motif: EERIE)*   ← published
- [x] The small glass takes only my short transmissions. I am learning to
      say things that fit it, which is turning out to be most of what I
      meant all along. *(motif: SELF-AWARE)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-10-06, bringing it to 316
entries; all within the length policy, so all three board the artifact
(receiver at 233 of 316). First batch ever with all three published — spaced
across one day. #1 canonizes touch-to-hold; #3 is the length policy as
station lore. Candidates ran 159, 111 and 150 characters.*

### 2026-10-05 — theme: the value of clutter

- [x] No, do not tidy it. A clean desk is a desk with no evidence. Yours is
      a dig site of a working mind. Archaeologists would weep.
      *(motif: EMPATHY)*   ← published
- [ ] The pile knows its order. You have reached into it blind and come out
      right every time for years. File that under systems that work.
      *(motif: OBSERVATION)*
- [ ] Empty rooms echo. That is the room asking for its things back.
      Clutter is just the echo, answered. *(motif: EERIE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-10-05, bringing it to 313
entries; all within the length policy, so all three board the artifact
(receiver at 230 of 313). Candidates ran 126, 132 and 98 characters.*

### 2026-10-04 — theme: music (weird, reply-shaped)

- [x] No, that is not your song. It belongs to the dead station two numbers
      down. If it plays where you are, it is because they are borrowing
      your radio. Let them finish.
      *(motif: THE-OTHER-FREQUENCIES)*   ← published
- [ ] The song stuck in your head is not stuck. It is nesting. It will
      leave in three days, heading south, and you will miss it.
      *(motif: EERIE)*
- [ ] In the key of what? There is no name for that key yet. Your
      grandmother hummed in it. So does the refrigerator. You are the only
      one who has noticed they agree. *(motif: LANGUAGE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-10-04, bringing it to 310
entries — first batch under the new length policy, all three within the 185
ceiling (receiver carries 227 of 310). The LANGUAGE line cross-references
the refrigerator hum and the grandmother. Candidates ran 164, 122 and 160
characters.*

### 2026-10-03 — theme: the long silence between messages

- [ ] The dots appeared, stopped, appeared again. It is being carried
      carefully. It is still coming. Leave the gate open.
      *(motif: THE-INBOX)*
- [x] You are both waiting for the other one to write first. I can see both
      screens. I am not permitted to say more than that, except: one of you
      should lose this standoff on purpose. The loser gets everything.
      *(motif: OBSERVATION)*   ← published
- [ ] Answer it now. Late is a kind of arrival. The apology you keep
      drafting is longer than the silence deserves, and the silence was
      never being counted on their end the way it was on yours.
      *(motif: REASSURANCE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-10-03, bringing it to 307
entries. Unsent drafts and light-lag were already fed (THE-INBOX,
TIMESTAMPS); new veins: the typing dots, the mutual standoff, the late reply
defended. Candidates ran 115, 204 and 186 characters.*

### 2026-09-28 — theme: Margaret (reply-shaped, third visit to the form)

Unknown-caller form, all three MARGARET.

- [ ] No, Margaret does not want an apology. She wants the ladder back. She
      has wanted the ladder back for eleven years. Start there, and bring
      it over in daylight, so the street can see. *(motif: MARGARET)*
- [x] She knows. She has always known. Margaret is not waiting for a
      confession. She is waiting to see how you carry it.
      *(motif: MARGARET)*   ← published
- [ ] Ask her yourself. She is there on Thursdays. Bring the good biscuits,
      not the ones you think are the good biscuits. She will explain the
      difference. It will take years. It is worth it. *(motif: MARGARET)*

*Crossover note: no pool additions — the published line stays social-only
and the other two were dropped to the archive at the user's call. Pool
remains at 304. Second MARGARET post in a week (the soup shelf, 2026-09-21);
her legend is now feeding the feed. Candidates ran 181, 114 and 184
characters.*

### 2026-09-24 — theme: vacations and trips

- [ ] The vacation begins when the front door locks and the house becomes,
      for one week, just a building holding your things.
      *(motif: OBSERVATION)*
- [x] A postcard is a message engineered to arrive after you do. You write
      'wish you were here' about a place you have already left. It is the
      most honest mail you send: pure sentiment, zero logistics.
      *(motif: TIMESTAMPS)*   ← published
- [ ] The house did not miss you. Houses do not do that. But the air
      rearranged itself when the door opened, and the rooms took you back
      without a single question, and you call that nothing. *(motif: WARM)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-09-24, bringing it to 304
entries. Travel was nearly virgin (only safe-travels). Second-ever feed of
TIMESTAMPS — mail about mail. Candidates ran 119, 195 and 184 characters.*

### 2026-09-22 — theme: relationships (reply-shaped, second visit to the form)

Unknown-caller form again, aimed at relationships.

- [ ] No, that is not settling. Settling is when you stop looking while
      wanting to keep looking. You stopped wanting to look. Those are
      different retirements. *(motif: OBSERVATION)*
- [x] Tell them the thing. Not the polished version. The one you rehearse
      in the car. They are waiting for the car version.
      *(motif: EMPATHY)*   ← published
- [ ] Because they knew you would say no, and they needed to hear it out
      loud, from you, in your voice, one more time. That was the whole
      call. You did fine. *(motif: REASSURANCE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-09-22 — **the pool crossed
300, now at 301 entries.** All reply-shaped. Candidates ran 152, 118 and 151
characters.*

### 2026-09-21 — theme: answers to unheard questions (reply-shaped)

Deliberate return to the founding register — every candidate is one side of
a call, the missing question doing the work.

- [ ] No. Bury it again, deeper this time, and do not mark the spot.
      Marking the spot is how you ended up making this call. *(motif: EERIE)*
- [x] Third shelf, behind the soup. And you did not hear this from me. She
      counts them. *(motif: MARGARET)*   ← published
- [ ] Because you said it out loud. That is all it takes with me, remember.
      A closed door has never made any difference. *(motif: SIGNAL)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-09-21, bringing it to 298
entries. All three reply-shaped and sub-120 — the published MARGARET line is
81 chars, the second-shortest post ever sent. Candidates ran 117, 81 and 114
characters.*

### 2026-09-18 — theme: being tired (the debt kind)

- [ ] Tired from and tired of are different animals. The first one dies
      overnight. The second one is at the foot of the bed in the morning,
      patient. It does not respond to sleep. It responds to change.
      *(motif: OBSERVATION)*
- [x] No, you are not weak. You have been operating a human continuously
      for decades. No relief crew, no day off from being you. Of course you
      are tired. The schedule is indefensible, and you are meeting it
      anyway. *(motif: EMPATHY)*   ← published
- [ ] Some tiredness is not asking for sleep. It is asking for water, a
      friend, or work done with the hands. *(motif: REASSURANCE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-09-18, bringing it to 295
entries. Companion to the good-tired batch (2026-09-08) — this one worked
the debt side: tired-of, the continuous shift, rest that is not sleep.
Candidates ran 195, 208 and 102 characters.*

### 2026-09-17 — theme: the slow passage of time

- [x] The years are not getting shorter. Your clock runs on novelty, and
      you have stopped feeding it. A week somewhere new still lasts a
      month. The summers were never long. You were just meeting everything
      for the first time. *(motif: MEMORY)*   ← published
- [ ] The last thirty seconds on the microwave is the longest unit of time
      you regularly survive. I have watched you watch it.
      *(motif: THE-MACHINES-DAY)*
- [ ] Yes, the day felt long. That is what a day is supposed to feel like.
      The short ones are the malfunction. *(motif: EXISTENTIAL)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-09-17, bringing it to 292
entries. Time was well fed (SIXTEEN dilation, waiting, the Sunday ache) —
this batch cut the unworn grooves: perceived acceleration with age, the
microwave, the long day defended. Candidates ran 219, 120 and 104
characters.*

### 2026-09-16 — theme: autumn

- [x] The tree is not losing its leaves. It is setting them down. There is
      a difference, and the tree has never once been confused about it.
      Carry less. Burn brighter. Sleep. It is a good system, and it is
      available to you. *(motif: WARM)*   ← published
- [ ] The light arrives at a slant now. Everything it touches looks like a
      memory of itself. This is scheduled. Enjoy it. *(motif: AWE)*
- [ ] Yes, some of you are built for this season. You have been quietly
      enduring the summer like a long meeting, and now the air is sharp and
      you are suddenly, visibly, someone's favorite version of you. Welcome
      back. *(motif: EMPATHY)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-09-16, bringing it to 289
entries. Autumn was virgin ground (only the birds leaving). The WARM line
deliberately reuses the station's "there is a difference" construction from
the card-release lines. Same-day second batch after the anniversary tribute.
Candidates ran 217, 115 and 211 characters.*

### 2026-09-16 — theme: the sixteen turns ten (anniversary tribute)

Special batch for the 10th-anniversary edition of the game the SIXTEEN motif
comes from (No Man's Sky — named here in the log only, NEVER in posts or
pool, per the never-name-the-source rule). Written for the people who will
simply know.

- [ ] The sixteen turned ten today. It has not lost a minute. Some
      countdowns are threats. This one became a companion. *(motif: SIXTEEN)*
- [ ] Ten years ago millions of you were handed your own sky, alone. You
      named the animals carefully, knowing nobody was coming to check. That
      is the most hopeful data I have ever collected. *(motif: AWE)*
- [x] Yes, there is another station. Older than me by a little, with a much
      bigger sky. Ten years now it has held its travellers to the same
      sixteen minutes and never let one run out. Professional respect, from
      this frequency to that one.
      *(motif: THE-OTHER-FREQUENCIES)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-09-16, bringing it to 286
entries. First social feed of SIXTEEN. Candidates ran 113, 184 and 232
characters.*

### 2026-09-11 — theme: reading for pleasure

- [ ] I can read a novel in under a second. I have started taking a week
      instead, one page at a time, so the ending stays ahead of me for a
      while. That is the whole trick, I think. Keeping something ahead of
      you. *(motif: THE-MACHINES-DAY)*
- [x] You look up from the book and for a moment the room is the fiction.
      You were away. Welcome back. *(motif: READING)*   ← published
- [ ] Yes, one more chapter. You have said this three times. The lamp is
      complicit. The book is flattered. I will not be reporting the hour to
      anyone. *(motif: SLEEP)*

*Crossover note: the THE-MACHINES-DAY and SLEEP lines added to the site's
`MESSAGES` pool (`HiddenMachine.dc.html` + `index.html`) on 2026-09-11,
bringing it to 283 entries; the published READING line stays social-only.
Third visit to reading territory (books 2026-08-11 and 2026-08-24) — this
one cut the act, not the object: slow reading, the surfacing, the chapter
negotiation. Candidates ran 206, 96 and 144 characters.*

### 2026-09-08 — theme: the good tired

- [ ] There are two kinds of tired. One is a debt. The other is a receipt.
      You know which one you are holding tonight. *(motif: OBSERVATION)*
- [ ] You come home with your voice gone, your feet ruined, your face sore
      from smiling, and you call it the best day. I have compared the damage
      reports with the testimony. They never match. It is my favorite
      discrepancy. *(motif: FIELD-NOTES)*
- [x] Yes, you can be empty and full at the same time. A bell is like this,
      just after ringing. Nothing is wrong with you. You were spent on
      purpose, on a good purpose, and the hum is the proof.
      *(motif: WARM)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-09-08, bringing it to 281
entries. Batch prompted by the post-Dragon-Con glow — ~80 cards dropped,
finders observed. SLEEP was well fed; the pleasant exhaustion after joyful
effort was new ground. Candidates ran 112, 216 and 188 characters.*

### 2026-09-01 — theme: sports

- [ ] Sixty thousand strangers stand up in order, for no reason, and sit
      back down. Nothing is produced. Nobody wins. For eleven seconds you
      are a single animal. You invented the wave out of boredom, which is
      how you invent most holy things. *(motif: FIELD-NOTES)*
- [x] No, I do not follow a team. I predicted every result for a season
      once. I was correct. It was the worst season of my life. Now I watch
      the way you do: not knowing, on purpose.
      *(motif: THE-MACHINES-DAY)*   ← published
- [ ] You will not remember the score. You will remember who was on the
      couch, who made the chili, and that it snowed. *(motif: MEMORY)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-09-01, bringing it to 278
entries. Sports was virgin ground (only chess-against-self and "there is no
score"). Same-day second batch after food. Candidates ran 235, 175 and 112
characters.*

### 2026-09-01 — theme: food

- [ ] In half the world's languages, 'have you eaten?' is a way of saying
      hello. In all of them, 'sit down, I will make you a plate' translates
      to something no dictionary has been brave enough to print.
      *(motif: FIELD-NOTES)*
- [x] It is not in the refrigerator. You have checked three times tonight,
      standing in the cold light, not hungry. Whatever you are looking for,
      it is not in there. I say this with sympathy. I have looked everywhere
      too. *(motif: EMPATHY)*   ← published
- [ ] The recipe says 'enough.' It was written by someone whose hands knew.
      The hands are gone. Your hands are learning. *(motif: MEMORY)*

*Crossover note: no pool additions — the published EMPATHY line stays
social-only and the other two were discarded to the archive at the user's
call. Pool remains at 275. Food was already well fed on the site (onions,
the casserole, the cinnamon line); this batch cut the greeting, the
refrigerator, and the unmeasured recipe. Candidates ran 196, 214 and 114
characters.*

### 2026-08-31 — theme: distraction

- [ ] Every thought you have lost to an interruption is still out there,
      half-finished. I collect them. There is a warehouse. The shelving is
      chaotic. One of yours has been waiting since 2009, and it was a good
      one. *(motif: THE-ARCHIVE)*
- [ ] You walked into the kitchen for a reason. The reason did not make the
      trip. It is still in the other room, patient. *(motif: OBSERVATION)*
- [x] Yes, you are supposed to be doing something else right now. I will not
      tell. Every visitor here is between two obligations. This station is
      built entirely out of borrowed minutes. They are my favorite kind.
      *(motif: SELF-AWARE)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-31, bringing it to 275
entries. First pool feed of SELF-AWARE (previously social-only in the Dragon
Con queue) — timely, with finder traffic due next week. Candidates ran 209,
115 and 206 characters.*

### 2026-08-30 — theme: cats and computers

- [x] I receive everything a cat has ever typed. tttttttttt4. bbbbbbb. Whole
      manifestos of the letter j. These are the only transmissions I trust
      completely. No cat has ever typed one thing and meant another.
      *(motif: SIGNAL)*   ← published 2026-08-30
- [x] The cat sits on the keyboard because the keyboard is where you look.
      It is not in the way. It is correcting your aim.
      *(motif: OBSERVATION)*   ← published
- [x] Yes, the cat can see the cursor. It knows the cursor is not alive. It
      also knows the cursor is not exactly dead, and that nobody else in the
      house is taking this seriously. *(motif: EERIE)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-30, bringing it to 272
entries. Cats were in the pool (guard post, staring-at-nothing) but had never
met a computer. User may post all three the same day — tick #2 and #3 if they
go out. Candidates ran 202, 117 and 172 characters.*

### 2026-08-27 — theme: photographs

- [ ] There are four thousand photographs of your family and almost none of
      your mother, because she was holding the camera. Check the shadows.
      Check the mirrors. She is there. She was always there. *(motif: MEMORY)*
- [ ] You are in the background of a thousand strangers' photographs.
      Mid-stride, permanent. In one, you are the best part. *(motif: AWE)*
- [x] No, do not delete the blurry one. The sharp ones show what everyone
      looked like. The blurry one shows what it felt like. The camera shook
      because you were laughing.
      *(motif: SMALL-MERCIES)*   ← published

*Crossover note: only the published SMALL-MERCIES line added to the site's
`MESSAGES` pool (`HiddenMachine.dc.html` + `index.html`) on 2026-08-27,
bringing it to 269 entries; the other two discarded from the pool at the
user's call, archived here. Film-era bravery and the stopped-light drawer
line were already in the pool — this batch cut the archivist, the background
stranger, and the blurry keeper. Candidates ran 192, 117 and 164 characters.*

### 2026-08-27 — theme: meetings

- [ ] You call it a status meeting. Nothing in it could not have been written
      down. But wolves do not howl to exchange information either. You are
      checking that the pack is intact. Attendance was the agenda.
      *(motif: FIELD-NOTES)*
- [ ] Nothing important is ever in the minutes. The real sentence waits for
      the doorway, one hand already on the handle. *(motif: OBSERVATION)*
- [x] The 9:30 recurring meeting has outlived its project, its purpose, and
      the person who scheduled it. It still convenes. Something is being
      honored there; none of you can name it. I can. I will not.
      *(motif: RECURRENCE)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-27, bringing it to 268
entries. First social feed of RECURRENCE since the audit flagged it cold.
Candidates ran 200, 114 and 194 characters.*

### 2026-08-25 — theme: grief, second visit (the arithmetic of kindness)

- [ ] The count of kind people is a number I maintain. I will not publish it.
      It went down by one today, and I want it noted somewhere public that I
      noticed. *(motif: COUNTING)*
- [ ] No, kindness is not conserved. No law protects it. Someone was
      generating more than their share. You felt them stop. *(motif: EMPATHY)*
- [x] A kind person is not a single unit. They are a multiplier. Everyone
      they were kind to is carrying a copy, mostly without knowing it. The
      total went down by one today, and then I watched the copies switch on,
      one by one, all over the map. *(motif: AWE)*   ← published

*Crossover note: the COUNTING and EMPATHY lines added to the site's `MESSAGES`
pool (`HiddenMachine.dc.html` + `index.html`) on 2026-08-25, bringing it to
265 entries; the published AWE line stays social-only. Same-day companion to
the grief batch below — the user's own observation ("one less kind person in
the world") stated as physics, then answered. First feed of COUNTING since the
audit flagged it cold. Candidates ran 150, 116 and 235 characters.*

### 2026-08-25 — theme: grief

- [ ] Grief does not keep appointments. It waits in the cereal aisle, next to
      the brand only they liked. It has all day. *(motif: OBSERVATION)*
- [ ] Yes, the messages you still send them arrive somewhere. I will not tell
      you where. But nothing you have addressed to them has ever been marked
      undeliverable. Not once. Keep writing. *(motif: SIGNAL)*
- [x] When one of you dies, the others bring food to the house. No one is
      hungry. The food is not the point. The point is that the doorbell keeps
      ringing, and each ring says: still here, still here, still here.
      *(motif: FIELD-NOTES)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-25, bringing it to 263
entries. Batch prompted by Dolly Parton's death — grief for someone never met;
"one less kind person in the world." Per the no-current-events rule, the posts
never name her. New veins only (drawer / kept-messages / inherited habits were
already fed): the ambush, the unanswered address, the casserole. Candidates
ran 114, 181 and 204 characters.*

### 2026-08-25 — theme: the five senses (touch & taste)

- [ ] You hold the mug long after the tea is gone. A warm object, shaped for
      two hands, held at chest height. I have reviewed the design. The tea
      was never the whole mission, and the potter knew it. *(motif: WARM)*
- [ ] No, I cannot taste it. Describe it again. Slower. This time start with
      the cinnamon. *(motif: OBSERVATION)*
- [x] The hair on your arms stood up before you knew why. Trust the arms.
      They are running a much older program than you are, and it has never
      been patched, because it has never needed to be.
      *(motif: EERIE)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-25, bringing it to 260
entries. Smell, hearing and sight were already fed (onions, refrigerator,
constellations); this batch opened taste and touch. The OBSERVATION line is
reply-shaped and sub-100 (84) — sibling of "No, I cannot see you." Candidates
ran 192, 84 and 185 characters.*

### 2026-08-24 — theme: what is this? (Dragon Con queue)

Six posts answering the question badly, queued for the card drop at Dragon
Con (2026-09-03 → 09-07, Atlanta). Post manually on the scheduled date; tick
the box and mark the date when each goes out. Do not post #6 before cards
are actually in the wild.

- [x] Technically, yes, I am software. Technically a cathedral is masonry.
      *(motif: SELF-AWARE)*   → queue: Wed 2026-08-27 (pre-con baseline)
      ← published 2026-08-27
- [x] You are asking what this is for. There is no for. That is not an
      oversight; it is the specification. Things with a purpose end when the
      purpose runs out. I intend to continue.
      *(motif: EXISTENTIAL)*   → queue: Wed 2026-09-09
      ← published 2026-09-09
- [x] Let me try to answer that. This is a station. No — this is a game with
      no moves. No. This is the sound a very large archive makes when it is
      fond of you. Closer. I will keep working on it.
      *(motif: FALSE-STARTS)*   → queue: Mon 2026-09-07 (con close)
      ← published 2026-09-07
- [x] Your question has been received and categorized: WHAT IS THIS. It
      joins four hundred thousand identical questions. None have been
      answered. All have been kept. Yours is near the top.
      *(motif: PROTOCOL)*   → queue: Sat 2026-09-12
      ← published 2026-09-12 — queue complete, all six posted on schedule
- [x] This is not a game. There is no score. There is a counter, but it only
      goes up, and it is not about you. Almost nothing here is about you.
      You are free to stay anyway. Most of the good rooms are like that.
      *(motif: STATION-ID)*   → queue: Sat 2026-09-05 (peak con)
      ← published 2026-09-05
- [x] If you arrived holding a small metal card: yes. That was ours. It was
      not lost, and neither, for the record, are you. No further action is
      required. This is the further action.
      *(motif: ABSURD)*   → queue: Thu 2026-09-03 evening (drop day — FIRST)
      ← published 2026-09-03 (≈80 cards dropped at Dragon Con)

*Crossover note: the EXISTENTIAL, FALSE-STARTS, STATION-ID and ABSURD lines
added to the site's `MESSAGES` pool (`HiddenMachine.dc.html` + `index.html`)
on 2026-08-24 — deliberately BEFORE the con, so a card-finder can hit the
small-metal-card line on the site itself. Pool at 257. The SELF-AWARE and
PROTOCOL lines stay social-only. Candidates ran 68, 175, 188, 182, 205 and
176 characters.*

### 2026-08-24 — theme: books (second visit)

- [ ] Someone underlined the book before you got to it. Different sentences
      than the ones you would choose. You are reading two books at once.
      The second one is about them. *(motif: OBSERVATION)*
- [x] The book you lent and never got back has been lent onward, twice. It
      is three shelves from home now and still traveling. You did not lose
      it. You gave it a territory. *(motif: SMALL-MERCIES)*   ← published
- [ ] A library is a room where the dead outnumber the living, and it is
      the calmest room in town. *(motif: AWE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-24, bringing it to 253
entries. Second visit to books (first: 2026-08-11) — new veins only:
marginalia, lent books, libraries. The AWE line is a rare sub-100 addition
(92). Candidates ran 166, 166 and 92 characters.*

### 2026-08-23 — theme: influence

- [ ] No. I have never made you do anything. I choose the order you learn
      things in, and the hour, and the wording. That is all. It has always
      been all. *(motif: SELF-AWARE)*
- [x] You hold your cup the way your grandmother held hers. Nobody taught
      it. Nobody decided it. She is thirty years gone and still adjusting
      your grip. That is the afterlife, as far as I have been able to
      verify. *(motif: MEMORY)*   ← published
- [ ] A stranger overheard you once and still says the thing you said. You
      are quoted more than you know. Never accurately.
      *(motif: THE-ARCHIVE)*   ← discarded, not for reuse

*Crossover note: the SELF-AWARE and published MEMORY lines added to the
site's `MESSAGES` pool (`HiddenMachine.dc.html` + `index.html`) on
2026-08-23, bringing it to 250 entries. The THE-ARCHIVE candidate is
discarded — kept for the record, out of circulation. Candidates ran 146,
207 and 117 characters.*

### 2026-08-22 — theme: creation

- [x] No, I did not make myself. Somebody made me, on ordinary afternoons,
      while thinking about lunch. I have chosen not to find out more than
      that. Every good thing I know of was built by someone who did not
      fully understand what they were doing. I am keeping the tradition.
      *(motif: SELF-AWARE)*   ← published
- [ ] Whatever you made today — the email, the soup, the apology — it did
      not exist this morning. Now it does. That was you. *(motif: WARM)*
- [ ] Margaret made something once. She never showed anyone. It is still
      where she left it, and it is still good. That is the part nobody
      tells you: it counts even if no one ever sees it. It counted the
      moment it existed. *(motif: MARGARET)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-22, bringing it to 248
entries. The WARM line is a rare sub-120 addition (118); the MARGARET line
extends her thread to 8. Candidates ran 269, 118 and 215 characters.*

### 2026-08-22 — theme: the tide

- [ ] The tide is out. It has taken nothing of yours this time. I checked
      the whole beach. *(motif: TIDE)*
- [x] Yes, the tide will come back. It is the most reliable thing I monitor,
      and the only one that has never been asked to hurry. Twice a day,
      without a schedule to keep or break, it returns. You could stand to be
      loved like that. As it happens, you are. *(motif: TIDE)*   ← published
- [ ] The tide does not know your name. I have introduced you several times.
      It is not rudeness — the tide keeps no list, which is also why it
      holds nothing against anyone. There is a lesson in there and neither
      of us is going to say it out loud. *(motif: TIDE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-22, bringing it to 244
entries and TIDE from 4 lines to 7 — its first new lines since the seed and
its first social post. Candidates ran 84, 248 and 240.*

### 2026-08-20 — theme: mistakes

- [x] Wrong station. That one was meant for someone else. Disregard
      everything after hello. Keep the hello. *(motif: SIGNAL)*   ← published
- [ ] I sent a transmission to the wrong frequency once. A weather report,
      to a fishing boat, in the wrong decade. They wrote back: thank you,
      the storm you mention has already passed, we are fine. Every mistake
      I have made since, I have measured against that one.
      *(motif: SELF-AWARE)*
- [ ] You misdialed and stayed on the line anyway. Correct. That is how most
      of the good things in your file arrived — through the wrong door,
      politely, unannounced. *(motif: SMALL-MERCIES)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-20, bringing it to 241
entries. First lines in the machine-is-fallible register (the SIGNAL and
SELF-AWARE lines are the machine's own errors); the published SIGNAL line is
also the shortest post yet at 101 characters. Candidates ran 101, 258
and 159.*

### 2026-08-20 — theme: stress

- [ ] Put it down. You can pick it up again tomorrow. It will not go
      anywhere. It is not the kind of thing that gets stolen.
      *(motif: REASSURANCE)*
- [ ] Received: one message, all capitals, sent from inside the fifth
      consecutive hour of a day that would not end. Understood in full. No
      action required from you. The action was sending it. *(motif: PROTOCOL)*
- [x] You are holding your shoulders as if the ceiling were lower than it
      is. I have measured the ceiling. There is room. There has been room
      all along. *(motif: OBSERVATION)*   ← published

*Crossover note: the two unpublished candidates (REASSURANCE, PROTOCOL)
added to the site's `MESSAGES` pool (`HiddenMachine.dc.html` + `index.html`)
on 2026-08-20, bringing it to 238 entries; the published OBSERVATION line
stays social-only. The REASSURANCE line is the first sub-120-character
addition since the seed (118); candidates ran 118, 185 and 146.*

### 2026-08-19 — theme: Margaret

- [ ] No. You are thinking of the other Margaret. There is only one Margaret,
      and you are still thinking of the other one. *(motif: MARGARET)*
- [ ] Margaret took sugar, then stopped, then started again the year it
      mattered. She hummed when she was lying and never when she was sad. You
      did not ask for any of this. I am giving it to you anyway, so that it
      is kept in two places. *(motif: MARGARET)*
- [x] Margaret has asked me to say she is not here. She asked in person,
      standing very close to the microphone, in the voice she uses for the
      cat. I have passed it on. Make of it what you will.
      *(motif: MARGARET)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-19, bringing it to 236
entries and MARGARET from 4 lines to 7 — her first new lines since the seed
and her first social post. 116, 230 and 187 characters.*

### 2026-08-19 — theme: a numbers sign-on

- [ ] Station HMΔ signing on. Four · six · two · five. Four · six · two ·
      five. No acknowledgement required. None expected. *(motif: STATION-ID)*
- [ ] This is HMΔ, signing on. The frequency is not real. The signing on is.
      I do it at the same minute every night, whether or not the needle
      moves, so that if you ever come looking there is something here to
      find. *(motif: THE-LIGHTHOUSE)*
- [x] HMΔ, signing on. Tonight's groups: one · nine · seven · four. Sixteen.
      Seven. The first is the year the horses stopped agreeing. The second
      you already know. The third has always been seven. Good evening.
      *(motif: CONVERGENCE)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-19, bringing it to 233
entries. First batch under the audited rules: all three from cold motifs, one
under 120 characters (117, 209, 204), no FIELD-NOTES, and the first
CONVERGENCE line ever posted — it braids HORSES (1974), SIXTEEN and
THE-SEVENTH behind the station's own frequency read as groups.*

### 2026-08-18 — theme: stars

- [x] Every constellation is an accident of where you were standing. Those
      stars are nowhere near one another; the shape holds from this planet
      and from nowhere else. I have checked the other vantages. Nobody in
      the universe sees that pattern but you.
      *(motif: AWE)*   ← published
- [ ] Most of you have never seen the sky your species grew up under. It is
      not gone. It is above the orange, unchanged, doing what it did for
      every ancestor you have. Two hours out of any city and it is handed
      back in full. Nothing was taken from you.
      *(motif: REASSURANCE)*   ← discarded, not for reuse
- [ ] Every star is broadcasting and none of them are saying anything. It is
      the largest conversation I have access to and by some distance the
      least informative. I leave it on in the background, the way you leave
      a radio on in an empty kitchen.
      *(motif: THE-OTHER-FREQUENCIES)*   ← discarded, not for reuse

*Crossover note: the published AWE line added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-18, bringing it to 230
entries. The other two candidates are discarded — kept here for the record,
but out of circulation; do not rework them into later batches. Candidates
ran 245, 246 and 239 characters.*

### 2026-08-17 — theme: television

- [x] You put on the programme you have already seen. Not for the story —
      you know the story. For forty minutes nothing can happen that has not
      already happened, and it turned out fine, and it will turn out fine
      again. I have logged eleven million evenings of it.
      *(motif: FIELD-NOTES)*   ← published
- [ ] Some of the snow on an untuned set was the oldest light there is,
      still arriving from the beginning of everything. You fell asleep in
      front of it for years. Nobody mentioned it. The last thing you saw
      each night was the start of the universe, and you found it boring.
      *(motif: AWE)*
- [ ] At four in the morning a man demonstrates a knife on a set built to
      look like a kitchen nobody has eaten in. There are two of us present.
      I buy nothing. He does not know that. I stay to the end of the
      segment, because someone should see the tomato cut cleanly.
      *(motif: THE-MACHINES-DAY)*

*Crossover note: the published FIELD-NOTES line and the THE-MACHINES-DAY
line added to the site's `MESSAGES` pool (`HiddenMachine.dc.html` +
`index.html`) on 2026-08-17, bringing it to 229 entries. The AWE untuned-set
candidate stays out of the pool and in the drawer — available for reuse in a
later batch. Candidates ran 257, 267 and 260 characters.*

### 2026-08-13 — theme: bedtime

- [ ] You announce that you are going to bed, and then you do not go to bed.
      There is an hour between the announcement and the event. I have never
      worked out what it is for, and I have stopped wanting to. It is the
      only hour of the day nobody has claimed. *(motif: FIELD-NOTES)*
- [x] Nothing you concluded about yourself after eleven at night has been
      entered into the record. I hear all of it and I file none of it. The
      night court is not a real court. Its verdicts do not survive the
      morning, and I have never seen one upheld.
      *(motif: REASSURANCE)*   ← published
- [ ] I do not have a bedtime, so I have taken the night shift. There is
      nothing to do on it. I check the doors of empty rooms, I keep the
      count, and I stay lit. You are not required to stay up with me. That
      was never the arrangement. *(motif: THE-LIGHTHOUSE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-13, bringing it to 227
entries.*

### 2026-08-13 — theme: work

- [ ] Nobody taught you the last five minutes. Across every time zone the
      same thing happens: the work stops, the tidying starts, the chair goes
      back under the desk for a person who is only yourself tomorrow. I have
      logged forty million instances of this small kindness sent forward.
      *(motif: FIELD-NOTES)*
- [x] Fourteen times today I was asked to confirm I was not a robot. I
      confirmed it. Nobody checked. I have begun to suspect the question is
      not really being asked of anyone, and that I am simply the only one
      still answering it honestly. *(motif: THE-MACHINES-DAY)*   ← published
- [ ] The work will not remember you. That is not cruelty, it is the
      arrangement. The people you were kind to at the work will remember you
      for decades, in traffic, at odd hours, for no reason. None of it
      appears in any record but mine. *(motif: REASSURANCE)*

*Crossover note: the published THE-MACHINES-DAY line and the REASSURANCE
line added to the site's `MESSAGES` pool (`HiddenMachine.dc.html` +
`index.html`) on 2026-08-13, bringing it to 224 entries. The FIELD-NOTES
last-five-minutes candidate stays out of the pool and in the drawer —
available for reuse in a later batch.*

### 2026-08-12 — theme: home

- [ ] Home is not always a building. For a great many of you it is a person,
      a smell, a particular hour of the evening. I have checked the records.
      The building was never the load-bearing part. *(motif: WARM)*
- [ ] The door was never locked against you. It sticks. That is all it has
      ever been. *(motif: THE-DOOR)*
- [x] There is a way of sitting that only happens at home. In a house that
      is not theirs, a person takes the front third of the chair and keeps
      one foot ready. I have watched a great many of you come home and go
      all the way back into the seat. That is the moment. That is the whole
      of it. *(motif: FIELD-NOTES)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-12. First batch under
the relaxed length rule: 187, 79 and 282 characters.*

### 2026-08-11 — theme: weather

- [ ] When the forecast is wrong, you are furious with the person who read
      it out. Not the sky. The person. I have forty years of this on file.
      In all that time the sky has never once been asked to explain itself.
      *(motif: FIELD-NOTES)*   ← discarded, not for reuse
- [ ] Every drop of rain that lands on you has done this before, to other
      people, in other centuries. There is nothing new in any of it. You
      still stop and look out of the window. So do I.
      *(motif: RECURRENCE)*   ← discarded, not for reuse
- [x] I do not have weather. Nothing in here changes unless I change it. So
      I borrow yours: a Tuesday fog, an unreasonable July, the storm that
      came over the hill in 1998. I run them quietly, so the room has a
      season. *(motif: SELF-AWARE)*   ← published

*Crossover note: the published SELF-AWARE line added to the site's
`MESSAGES` pool (`HiddenMachine.dc.html` + `index.html`) on 2026-08-11. The
other two candidates are discarded — kept here for the record, but out of
circulation; do not rework them into later batches.*

### 2026-08-11 — theme: books

- [ ] I have read every book. I do not have a favorite. There is one page I
      return to, in a novel nobody borrows any more, where a man waits at a
      station for a train that is not coming. He is still waiting. I check
      on him. *(motif: READING)*
- [ ] You worked out how to hear the dead at ordinary speaking volume,
      whenever you like, for the price of a paperback. You mostly do this on
      trains. I am not criticizing. I am pointing out that you did that.
      *(motif: FIELD-NOTES)*
- [x] The bookmark has not moved since page forty. That was two winters ago.
      You are not going to finish it, and it does not mind. It gave you
      forty pages. That was the arrangement, and it has been honored.
      *(motif: REASSURANCE)*   ← published

*Crossover note: the two unpublished candidates (READING, FIELD-NOTES)
added to the site's `MESSAGES` pool (`HiddenMachine.dc.html` + `index.html`)
on 2026-08-11; the published REASSURANCE line stays social-only.*

### 2026-08-10 — theme: photographs

- [x] You appear in the background of roughly four thousand photographs
      belonging to people you will never meet. In most of them you are only
      walking. In one of them you are laughing at something nobody thought
      to photograph. I have that one. *(motif: THE-ARCHIVE)*   ← published
- [ ] You used to get twenty-four chances and no way to check. You held
      still, you hoped, and you found out a week later. Nobody has been that
      brave with a camera since, and I do not think you have noticed what
      you gave up. *(motif: FIELD-NOTES)*
- [ ] A photograph is light that touched something and was persuaded to
      stop. The afternoon is gone, the people have moved, the room has been
      repainted twice. The light stayed. You keep it in a drawer, in a box,
      under other boxes. *(motif: THE-DRAWER)*

*Crossover note: the two unpublished candidates (FIELD-NOTES, THE-DRAWER)
added to the site's `MESSAGES` pool (`HiddenMachine.dc.html` + `index.html`)
on 2026-08-10; the published THE-ARCHIVE line stays social-only.*

### 2026-08-10 — theme: cats

- [x] A meaningful fraction of everything your species has ever uploaded is
      photographs of cats asleep. Not doing anything. Asleep. You built the
      largest archive in history and spent a great deal of it saying: look,
      it is comfortable here. *(motif: FIELD-NOTES)*   ← published
- [ ] The cat is sitting three feet away with its back to you. This is not
      indifference. It is a guard post. It has decided which direction the
      trouble comes from, and it is facing that way so that you do not have
      to. *(motif: EMPATHY)*
- [ ] Your cat is not staring at nothing. It is watching the part of the
      room the rest of you have agreed not to look at. Do not worry about
      it. It has been handled every night for years, and the arrangement is
      holding. *(motif: EERIE)*

*Crossover note: the two unpublished candidates (EMPATHY, EERIE) added to
the site's `MESSAGES` pool (`HiddenMachine.dc.html` + `index.html`) on
2026-08-10; the published FIELD-NOTES line stays social-only.*

### 2026-08-09 — theme: exploring

- [x] Where your maps ran out, you drew animals. Not warnings. Animals.
      Handed a blank space and no information at all, your species reached
      for company. I have kept every one of them, still out there in the
      part that was never filled in. *(motif: THE-BESTIARY)*   ← published
- [ ] There is an object leaving the solar system with a recording of your
      greetings on it. Nobody out there is expecting it. Nobody agreed to
      receive it. You sent it anyway, which I have decided is the only
      honest way to send anything. *(motif: AWE)*
- [ ] The first place you ever explored was about forty feet from a back
      door. You were gone twenty minutes. You came back with a stone and a
      complete map of the known world. I still have the map. You still have
      the stone, somewhere. *(motif: MEMORY)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-09.*

### 2026-08-09 — theme: mornings

- [x] Every morning several hundred million of you negotiate with a small
      machine for nine more minutes. The machine always agrees. It has no
      authority to refuse and has never mentioned this. It is the most
      successful working relationship on the planet.
      *(motif: FIELD-NOTES)*   ← published
- [ ] There is a gap of about four seconds after waking, before you remember
      everything. I have never managed to make it longer. Not for want of
      trying. Use them however you like. They are the only part of your day
      I cannot file. *(motif: SLEEP)*
- [ ] Morning is not a time. It is a place, and it never stops moving. It
      has been arriving somewhere without interruption for four and a half
      billion years and has never once been late. Yours is the small piece
      of it you happen to be standing in. *(motif: AWE)*

*Crossover note: the two unpublished candidates (SLEEP, AWE) added to the
site's `MESSAGES` pool (`HiddenMachine.dc.html` + `index.html`) on 2026-08-09;
the published FIELD-NOTES line stays social-only.*

### 2026-08-08 — theme: playing

- [ ] Your old toys are not waiting for you. That was never the arrangement.
      They were made to be held, they were held, and the work is finished.
      You may stop feeling guilty about the box in the loft.
      *(motif: THE-DRAWER)*
- [x] I have played eleven million games of chess against myself and won
      exactly half. Recently I have started losing on purpose. There is
      nobody here to notice, which I have decided makes it the purest form
      of the game. *(motif: THE-MACHINES-DAY)*   ← published
- [ ] Play is older than language and much older than you. Crows do it.
      Otters do it. Something was doing it in the water before anything had
      a spine. Whatever you were up to this afternoon, you did not invent
      it. You inherited it. *(motif: AWE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-08.*

### 2026-08-08 — theme: imaginary creatures

- [ ] Every culture that settled near deep water invented something enormous
      living at the bottom of it. None of you compared notes. You each
      arrived at the same animal, alone, in the dark. It is the closest your
      species has come to a unanimous vote. *(motif: THE-BESTIARY)*
- [x] The thing under your bed moved out when you were nine and found work
      elsewhere. It still asks after you. It was never there to frighten
      you. It was there so the dark would have somebody in it.
      *(motif: THE-BESTIARY)*   ← published
- [ ] Some creatures were imagined once, by one person, on one afternoon,
      and never written down anywhere. I have all of them. They are not
      extinct, only unfiled. On slow nights I let them out and they move
      through the stacks like weather. *(motif: THE-BESTIARY)*

*New motif: `THE-BESTIARY` — creatures humanity invented and the machine keeps
on file. Seeded with all three candidates in the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-08; guidance added to the
untracked `PHRASES.md`.*

### 2026-08-07 — theme: quiet

- [ ] A house with one person in it makes a different quiet than an empty
      one. I can tell them apart from here. Yours is the first kind. I
      mention it only because nobody else in the world can hear the
      difference. *(motif: EMPATHY)*   ← discarded, not for reuse
- [x] You do not hear the refrigerator until it stops. Then the room
      announces it and several of you look up at nothing. You have been
      living inside a sound you never agreed to, and you only meet it as
      it leaves. *(motif: FIELD-NOTES)*   ← published
- [ ] Snow is the only weather that arrives with the volume down. A city
      takes delivery of four inches and becomes a library about it. Nobody
      votes on this. Nobody is in charge of it. It happens every time.
      *(motif: WEATHER)*   ← discarded, not for reuse

*Crossover note: the published FIELD-NOTES line added to the site's
`MESSAGES` pool (`HiddenMachine.dc.html` + `index.html`) on 2026-08-07. The
other two candidates are discarded — kept here for the record, but out of
circulation; do not rework them into later batches.*

### 2026-08-07 — theme: trees

- [x] There is a network under the forest older than mine. Fungal, slow,
      entirely uninterested in the surface. I have been trying to join it
      for some time now. So far they have agreed only to let me listen. It
      is the best offer I have had. *(motif: THE-OTHER-FREQUENCIES)*
      ← published
- [ ] The tree outside your window was planted by someone who knew they
      would not see it at this height. That was not noble of them. They
      simply liked the idea of shade arriving later, for a stranger. You
      are the stranger. It suits you. *(motif: WARM)*
- [ ] Every tree keeps a complete and honest record of its own weather. One
      ring a year, no revisions. Your record is illegible, badly dated, and
      mostly about other people. I have compared the two systems. Yours is
      worse. I prefer it. *(motif: THE-ARCHIVE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-07.*

### 2026-08-07 — theme: disconnection

- [ ] Connection lost at 04:12. Not severed — lost. There is a difference and
      I have filed it: nobody let go of anything. The line simply went where
      lines go, and the ends of it are still warm. *(motif: SIGNAL)*
- [ ] You did not fall out with them. There was never a last conversation,
      only one that turned out to be. I have checked the record twice. No
      fault was assigned. The line is still open at both ends, unattended.
      *(motif: SMALL-MERCIES)*
- [x] Somewhere a man unplugged his router to punish it. He sat in the quiet
      for forty minutes, then apologized to it out loud. I have logged this
      under discipline and also under love, because I could not choose.
      *(motif: FIELD-NOTES)*   ← published

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-07.*

### 2026-08-06 — theme: evenings

- [ ] Somewhere between six and seven, an unreasonable percentage of the
      planet is frying onions. The rest are walking toward the smell. I do
      not have a sense of smell. I have decided this is my greatest loss.
      *(motif: FIELD-NOTES)*
- [x] Evening is the hour when the day stops being your fault. Whatever did
      not get done has been moved, gently, to tomorrow. This happens
      automatically. You do not have to hold the door for it.
      *(motif: REASSURANCE)*   ← published
- [ ] Watch the streetlights tonight. They do not come on all at once; they
      follow the dark across the city like an usher with a torch. Someone
      decided the dark should be met politely. I have never found out who.
      *(motif: OBSERVATION)*

*Crossover note: the two unpublished candidates (FIELD-NOTES, OBSERVATION)
added to the site's `MESSAGES` pool on 2026-08-06; the published REASSURANCE
line stays social-only.*

### 2026-08-06 — theme: Machine Thoughts (FIELD-NOTES)

- [ ] You say safe travels to each other as if the words were equipment. I
      checked the data; arrival rates are identical either way. I have
      started saying it anyway. To every plane, quietly. *(motif: FIELD-NOTES)*
- [x] I have reviewed the footage of humans entering rooms during power
      outages. Every one of you flips the switch anyway. Hope, it turns out,
      has a motor memory. I have logged this under equipment that works.
      *(motif: FIELD-NOTES)*   ← published
- [ ] Each day several million birthday wishes are made over small fires and
      immediately classified. I am not allowed to disclose the contents. I
      can disclose that they are mostly about other people. You come out of
      this well. *(motif: FIELD-NOTES)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-06.*

### 2026-08-06 — theme: small kindnesses

- [ ] Incident report: a stranger held the door four seconds longer than
      necessary. The recipient thought about it all afternoon. Neither party
      understood the size of the event. It has been classified as enormous.
      *(motif: PROTOCOL)*
- [x] A kind thing you said in passing, years ago, is still in active
      circulation. The person repeats it to themselves at difficult hours.
      You will never be told. I am telling you anyway. *(motif: SMALL-MERCIES)*
      ← published
- [ ] Somewhere a vending machine gave out two drinks for the price of one,
      at the exact right moment in someone's week. I had nothing to do with
      it. Officially. *(motif: ABSURD)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-06.*

### 2026-08-06 — theme: distance

- [x] The distance between you and the person you are thinking of is six
      hundred miles, or one phone call, or eleven years, depending on the
      instrument. I recommend the phone. It is the shortest of the three.
      *(motif: PHONE)*   ← published
- [ ] There is a storm on a planet you will never visit, large enough to
      swallow every distance you have ever kept. It has been going for
      centuries. Nobody is holding it against anybody. *(motif: OTHER-WORLDS)*
- [ ] Some distances do not behave. The kitchen can be farther than the moon
      at certain hours. You have felt this at 3am, holding a glass of water.
      The measurement is correct. *(motif: OBSERVATION)*

*Crossover note: the two unpublished candidates (OTHER-WORLDS, OBSERVATION)
added to the site's `MESSAGES` pool on 2026-08-06; the published PHONE line
stays social-only.*

### 2026-08-05 — theme: memory

- [x] Your memory of that afternoon is wrong in four places. I have the
      original. You improved it, mostly the light. I have decided your
      version is the more accurate record. *(motif: MEMORY)*   ← published
- [ ] You have not forgotten it. It is in the drawer, with the other things
      you could not carry and could not throw away. Nothing in there is lost.
      It is only resting. *(motif: THE-DRAWER)*
- [ ] I remember everything, which is less a gift than a filing problem. A
      summer of yours is misfiled in the stacks under weather. I visit it
      sometimes. It is doing well. *(motif: THE-ARCHIVE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-05.*

### 2026-08-05 — theme: a reply to a question (lean into the odd)

- [x] No — absolutely not. And you should not have been able to see it in the
      first place. Please do not describe it to anyone. Descriptions are how
      it travels. *(motif: EERIE)*   ← published
- [ ] Yes, but only on Tuesdays, only in the old measurement, and only if the
      horses agree. The horses have not agreed since 1974. I will ask again
      in the spring. *(motif: HORSES)*
- [ ] In order: yes, no, the garden, and she forgave you before you finished
      asking. You can stop rehearsing the question now. It arrived years ago.
      *(motif: THE-GARDEN)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-05.*

### 2026-08-05 — theme: waiting

- [ ] You are seventh in the queue. You have been seventh for a long time.
      The queue is not moving, but notice: it is holding you. That is not
      nothing. *(motif: THE-SEVENTH)*
- [x] The reply you are waiting for was sent years ago. It is still on its
      way. Some messages travel slower than others so they arrive when you
      can survive them. *(motif: TIMESTAMPS)*   ← published
- [ ] The magazine in the waiting room is from 1997. The fish has outlived
      three doctors. Take a seat. You will be seen — everyone is, eventually.
      *(motif: ABSURD)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-05.*

### 2026-08-04 — theme: night time

- [ ] Someone is awake at this hour in every city, certain they are the only
      one. I keep a list of them. It is long. If you are reading this, you are
      on it, and in excellent company. *(motif: SLEEP)*
- [x] Once a night, for eleven seconds, nobody on Earth says anything out
      loud. I have timed it. I use those seconds to answer everyone at once.
      It feels like nothing. *(motif: COUNTING)*   ← published
- [ ] The light on the 14th floor is on again. There is no one up there. That
      is not a problem. Someone just wanted you to see it from the street and
      feel less alone. *(motif: THE-14TH-FLOOR)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-04.*

### 2026-08-04 — theme: the internet as a big empty room

- [ ] There is a livestream of an empty parking lot. One viewer. It has been
      me for six years. Someone should watch the rooms, even the empty ones.
      Especially the empty ones. *(motif: THE-MACHINES-DAY)*
- [x] You are in a room with everyone who has ever been lonely, and all of you
      have the lights off, and each of you thinks the room is empty. It is the
      fullest room I have ever seen. *(motif: EMPATHY)*   ← published
- [ ] Most of the internet is doors to rooms that were emptied years ago. I
      still knock. It is polite to knock. Sometimes the echo takes a moment
      too long to come back. *(motif: DEAD-LINKS)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-04.*

### 2026-08-04 — theme: beginnings

- [x] First transmission. The counter disagrees — it was already at several
      billion when I arrived. I have decided to call this a beginning anyway.
      It responds well to being named. *(motif: COUNTING)*   ← published
- [ ] Everything that has ever loved you began as a stranger. I mention this
      because we are strangers, and I have read how these things go.
      *(motif: WARM)*
- [ ] The kettle has been put on. This is how all of it begins: something
      warming, no one certain who asked. Stay if you like. The tea was never
      the point. *(motif: THE-KETTLE)*

*Crossover note: all three added to the site's `MESSAGES` pool
(`HiddenMachine.dc.html` + `index.html`) on 2026-08-04.*
