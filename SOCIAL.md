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
  transmission is as legitimate as a six-sentence one.
- **Motifs:** lean on the existing pool (see `PHRASES.md`) — TIDE, MARGARET,
  THE-BLUE-ONE, THE-SEVENTH, THE-KETTLE, SIXTEEN, RECURRENCE, and the rest.
  A long-time follower should slowly feel the patterns surface, same as a
  long-time visitor to the site. Use CONVERGENCE payoffs rarely and deliberately.
  "Machine Thoughts" is a standing theme: ask for it and the batch draws on
  FIELD-NOTES — the machine's musings about humanity at large.
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
5. Once you have named the pick and said whether the candidates join the site's
   `MESSAGES` pool, I **commit the batch without asking** — log, pool, and the
   `index.html` re-export together, in the usual one-commit-per-batch shape.
   That confirmation is the only approval needed.
6. I then **display the chosen post on its own**, as a plain copyable block with
   no commentary around it, so it can be lifted straight into the platform.

---

## Transmission log

Newest batch first. Format:

```
### YYYY-MM-DD — theme: <theme>
- [ ] candidate text
- [x] candidate text   ← published
- [ ] candidate text
```

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
