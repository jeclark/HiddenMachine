import json, re, sys, collections

SRC = 'HiddenMachine.dc.html'
OUT = 'PHRASE-POOL.md'

src = open(SRC, encoding='utf-8').read()
body = src.split('const MESSAGES = [', 1)[1].split('\n];', 1)[0]

pat = re.compile(r'\{ motif:("(?:[^"\\]|\\.)*"), text:("(?:[^"\\]|\\.)*") \}')
entries = [(json.loads(m.group(1)), json.loads(m.group(2))) for m in pat.finditer(body)]

counts = collections.Counter(m for m, _ in entries)
order = sorted(counts.items(), key=lambda kv: (-kv[1], kv[0]))

lines = []
lines.append('# HIDDENMACHINE — Phrase Pool')
lines.append('')
lines.append('Every transmission currently in the `MESSAGES` array of `HiddenMachine.dc.html` (mirrored in `index.html`), in pool order.')
lines.append('')
lines.append('Generated reference — untracked, like `PHRASES.md`. Regenerate after each batch rather than editing by hand; the array is the source of truth.')
lines.append('')
lines.append(f'**{len(entries)} phrases · {len(counts)} motifs**')
lines.append('')
lines.append('---')
lines.append('')
lines.append('## Motif index')
lines.append('')
for motif, n in order:
    lines.append(f'- `{motif}` — {n}')
lines.append('')
lines.append('---')
lines.append('')
lines.append('## Phrases')
lines.append('')
for i, (motif, text) in enumerate(entries, 1):
    lines.append(f'{i}. **`{motif}`** — {text}')
    lines.append(f'   *({len(text)} chars)*')
    lines.append('')

out = '\n'.join(lines[:-1]) + '\n'
open(OUT, 'w', encoding='utf-8').write(out)
print(f'wrote {OUT}: {len(entries)} phrases, {len(counts)} motifs')
