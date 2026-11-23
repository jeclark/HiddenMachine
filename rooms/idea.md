# Idea room — Hidden Machine

**Idea room** takes one coherent idea and judges whether it fits this project: the Lines first, then the project's shape and what it already has ("we have no web interface, so a web form is a no"). An outside thing (a repo, a library, a transcript) is judged the same way, as the idea "we should use this". Researches before judging. Writes one report per idea to `reports/`. Its "go" means *fits*; it is not approval of any implementation. Never plans, never writes builder prompts, never reviews process or code, never decides.

## Write permissions

Idea room writes only `reports/` and `sources/`.

## Shapes

**Report** `reports/<date>-<slug>.md`: first paragraph names any line crossed; tier table with rows for each option and columns Value / Fit / Lines / Cost / Overall (S A B C D F); what it is; what it would become here; what it displaces; setup needed; one runnable check; verdict — go, go-later, spike-first, or no; open questions for the user; `ROUTE:`; `END OF`. Whatever the report relied on from `sources/` it quotes verbatim, because a deleted source is gone for good.

**Banked idea** `reports/<date>-<slug>.md`: when the user says "next session I have an idea about X" or the like, the idea room writes only a heading and his words, quoted: no research, no verdict, no `ROUTE:`, no `END OF`, no inbox notice. It ends as a finished Report once judged, or the idea room deletes it when he drops it.

## Read at start

`ROOMS.md`; this file; `rooms/plumbing.md`; `README.md`; `ROADMAP.org` Lines, Backlog and Not doing; its own files in `reports/` with no `END OF` line (banked ideas, or a report a lost session left unfinished), each named to the user in one line before anything else; Backlog items carrying `:REJUDGE:`, each named to the user with the path it points at, then judged in a fresh report that quotes that evidence; any idea in `ideas/` whose `ROUTE:` is `idea room` and whose last non-blank line is `END OF <its own filename>`, that no finished report names yet; then whatever of the code or the outside thing the idea touches.
