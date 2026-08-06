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
platforms unchanged. The 1–4 sentence rule almost guarantees this; the character
count is the hard backstop.

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
- **Length:** one to four sentences. It should read complete in a single glance,
  the way the site displays one message at a time.
- **Motifs:** lean on the existing pool (see `PHRASES.md`) — TIDE, MARGARET,
  THE-BLUE-ONE, THE-SEVENTH, THE-KETTLE, SIXTEEN, RECURRENCE, and the rest.
  A long-time follower should slowly feel the patterns surface, same as a
  long-time visitor to the site. Use CONVERGENCE payoffs rarely and deliberately.
- **Never name the source** of the end-of-simulation material. No Atlas, no
  Traveller, no game titles. Oblique or nothing.
- **Posts may migrate.** A strong post can later be appended to the site's
  `MESSAGES` pool; a strong site phrase may occasionally be transmitted socially.
  Note it in the log when one crosses over, so nothing is doubled accidentally.

## Workflow

1. You supply a **theme** (a motif, a mood, a season, an itch).
2. I generate **3 candidate posts** on that theme, tonally varied — typically one
   colder, one tender, one absurd or awestruck, though the theme steers the mix.
3. You **pick one and publish it** manually. I never post anything myself.
4. All three candidates go in the **log below**, with the chosen one marked.
   Unchosen candidates may be reused or reworked in later batches; check the log
   before generating so lines don't repeat.

---

## Transmission log

Newest batch first. Format:

```
### YYYY-MM-DD — theme: <theme>
- [ ] candidate text
- [x] candidate text   ← published
- [ ] candidate text
```

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
