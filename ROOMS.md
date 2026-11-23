<!-- three-rooms template: 27 -->
# Rooms — Hidden Machine

Hidden Machine is the hiddenmachine.com station: a single page that decodes one side of a conversation out of static, with the things around it (the phrase pool, social posts, laser-cut cards, the receiver firmware in `receiver/`). It lives in `~/Projects/HiddenMachine`, a git repo on `main`.

Remote: `https://github.com/jeclark/HiddenMachine.git`.

The rooms below share this folder and never talk to each other; they talk to files. If you cannot read this file, stop and ask for the project folder to be connected. Do not work from memory.

## Rooms

Each room's job, what it writes and what it reads are in its own file in `rooms/`. A room reads this file and its own, and `rooms/plumbing.md` only when its own file names it.

- **Coordinator**: `rooms/coordinator.md`
- **Idea room**: `rooms/idea.md`

**Builder** is Claude Code, dispatched by Klutz; its standing rules and the Handoff are in `rooms/coordinator.md`. Any room may commit room-owned files, its own or another room's (`reports/`, `ideas/`, `ROADMAP.org`, `prompts/`, `answers/`, this file, the files in `rooms/`, a bug room's record), in the repo's commit format and by pathspec only, never a bare commit, so nobody else's staged work rides along: `git add -- <paths>`, then `git commit -m "<message>" -- <paths>`. A report or idea is committed only once its last line is its `END OF`. This grants no code commits: who commits code is unchanged. After its commit a room pushes only as this project's push rule allows, and where nobody pushes unless asked, it doesn't. A room mentions commits and pushes only when one failed or was held back.

## Lines

Never cross these. Any report or idea that would cross one says so in its first paragraph, naming the line, before anything else.

1. Nothing is pushed unless the user asks.
2. Rooms never post to social accounts or publish anything outside the repo. Social posts, card drops and engraving files are only queued or prepared, and the user publishes them.
3. Every new transmission follows `PHRASES.md`: the voice is never threatening, the joke or the dread is never explained, and the caller's history stays consistent.
4. Every change to the phrase list lands everywhere it lives: `HiddenMachine.dc.html` and `index.html` together, `PHRASE-POOL.md` regenerated, and the receiver assets regenerated from `dc.html`.
5. The station stays one self-contained static page: no build step, no analytics or trackers, and no calls to outside servers.

## Done means

A change is done when it is committed on `main`; for phrase-list changes, the counts in `HiddenMachine.dc.html`, `index.html`, `PHRASE-POOL.md` and the receiver assets all match; and the user has seen it live, either on hiddenmachine.com or, for receiver work, on the device.

## Flow

An idea may enter at any room. It leaves only through the coordinator, as a row in `ROADMAP.org`. Every report and idea ends with `ROUTE: coordinator` or `ROUTE: idea room` and then `END OF <filename>`, so a reader knows the file is complete. Refusals are recorded under `Not doing` and are not final; re-pitch one only by saying what changed.

## Write permissions

Each room's own write rule is in its file. Nobody else edits another room's file; answer it with a new file.

`sources/` is gitignored source material: a transcript, a video, a screenshot. The idea room or the coordinator deletes a source once it has served its purpose, usually when the idea room has written the report it fed; an example kept for reference (a UI screenshot, say) stays while it is still used. Anything worth keeping, the coordinator moves out of `sources/` into a committed folder that suits the project.

## Read at start

Every room, before anything else: compare the template number on this file's first line with the current three-rooms template (the `Current template:` line in the three-rooms skill's `references/rooms-template.md`). If this file is behind, the coordinator upgrades this project's `ROOMS.md` with the three-rooms skill before it does anything else, and any other room tells the user once that the coordinator owes an upgrade, then works under this file as written. A room upgrades only its own project; nothing sweeps other projects after a release.

Then each room reads its own file in `rooms/`, whose Read at start lists the rest.

## House rules

A journal command (`/j:start`, `/j:log`, `/j:end`) may write this project's own journal folder and its TOC file, whoever runs it, rooms included. It is the command's exception, not a licence to hand-edit those files, and it reaches nothing else under the org root; where a Line keeps rooms out of the org root, this is that Line's standing exception.

One question at a time, in chat, never the widget. The one exception: a room with 4 or more questions for the user at once writes them as a question set per `spec/question-set.org` in `bpjohnson/mabel`, in `<room root>/questions/<room>/`, and stops; on "Answers are in" it reads the answers file and carries on. Fewer than 4 stay one at a time in chat. Judgment calls are the user's; the rooms recommend. Every claim about state names its evidence: a commit, a harness line, a file path. Recommendations use S/A/B/C/D/F tier tables with an Overall column. Markdown, one paragraph per line, no hard wraps. No due or scheduled dates. Prefer the boring version. No marketing language. Nothing is done until the harness says so and the user has seen it.

Tracker: https://claude.ai/artifact/FaR8rUCjdiAE8nFyjLFhCg. The coordinator updates it; it is a view of ROADMAP.org, never the record.
