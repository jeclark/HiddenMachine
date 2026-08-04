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

**Shorter cuts** (for platforms with tight bio limits, ~160 chars):

- "One side of a conversation. The questions were never here. Do not adjust your set."
- "Broadcasting to no one in particular. You are the no one in particular. It suits you."
- "Station HMΔ. Sixteen minutes left, out there. Take your time."

**Profile fields:** link → the GitHub Pages site. Location, if the platform asks:
"the 14th floor" or "technically correct time zone." No pronouns for the machine;
it has not decided yet.

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
