# Grue language support for Zed

A Zed extension providing syntax highlighting, bracket matching, outline,
indentation, and text objects for `.grue` files.

## Install (dev extension)

1. In Zed, open the command palette and run **`zed: install dev extension`**.
2. Select this directory: `tree-sitter-grue/editors/zed`.

Zed clones the grammar from the `file://` URL pinned in `extension.toml`,
compiles it to WASM, and loads it. Open any `.grue` file to verify highlighting.

## Updating the grammar

The grammar is pinned to a specific commit via `repository` + `rev` in
`extension.toml`. Whenever you change `grammar.js`:

1. Regenerate and commit the parser:
   ```
   tree-sitter generate && git commit -am "update grammar"
   ```
2. Update `rev` in `extension.toml` to the new commit SHA.
3. In Zed, run **`zed: reload extensions`** (or rebuild the dev extension).

Because Zed loads the grammar from a git `rev`, uncommitted changes to
`grammar.js`/`src/parser.c` are *not* picked up until you commit and bump `rev`.

## Files

- `extension.toml` — extension metadata + grammar source (file:// repo @ rev).
- `languages/grue/config.toml` — language config (suffixes, comments, brackets).
- `languages/grue/highlights.scm` — syntax highlighting.
- `languages/grue/brackets.scm` — bracket matching (parens only; strings are atomic).
- `languages/grue/indents.scm` — auto-indentation.
- `languages/grue/outline.scm` — code outline (definitions).
- `languages/grue/textobjects.scm` — Vim-mode text objects.
