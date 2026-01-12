# tree-sitter-grue

Tree-sitter grammar for GRUE (Game Rules and Universe Expressions), a declarative language for defining interactive fiction game worlds.

GRUE is designed to be:
- **Statically analyzable** - State space can be explored for winnability, soft-locks, invariants
- **LLM-friendly** - Provides constraints and affordances for LLM-driven gameplay
- **Expressive** - Can represent the complexity of Infocom-style games

## Installation

### As a Neovim plugin (recommended)

Add to your plugin manager (e.g., lazy.nvim):

```lua
{ "joelgwebber/tree-sitter-grue" }
```

Then run `:TSInstall grue`.

The plugin auto-registers the parser and filetype on load.

### Manual config

If you prefer explicit configuration:

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.grue = {
  install_info = {
    url = "https://github.com/joelgwebber/tree-sitter-grue",
    files = { "src/parser.c" },
  },
  filetype = "grue",
}

vim.filetype.add({ extension = { grue = "grue" } })
```

Then run `:TSInstall grue`.

### Quick Install (no plugin manager)

```bash
# Compile the parser
cc -shared -o grue.so -I src src/parser.c -O2

# Copy to nvim-treesitter directories
cp grue.so ~/.local/share/nvim/lazy/nvim-treesitter/parser/
cp -r queries/grue ~/.local/share/nvim/lazy/nvim-treesitter/queries/
```

Add to your init.lua:
```lua
vim.filetype.add({ extension = { grue = "grue" } })
```

### Build from source

```bash
npm install
npx tree-sitter generate
```

## Syntax Highlighting

The grammar provides semantic highlighting for:

- **Entity references**: `@player`, `@door`, `@terminal-room` (objects, rooms)
- **Binding references**: `?self`, `?actor`, `?with` (action context bindings)
- **Keywords**: `:name`, `:description`, `:flags`, `:exits`, `:behaviors`, etc.
- **Definition forms**: `world`, `room`, `object`, `event`, `globals`, `victory`, `defeat`, `default`, `defn`
- **Special forms**: `fn`, `lambda`, `cond`, `if`, `let`, `and`, `or`, `not`, `any`, `all`, `seq`, `when`
- **Outcome forms**: `success`, `blocked`, `redirect`, `default`
- **Predicates**: `has-flag`, `held?`, `here?`, `in?`, `visible?`, `queued?`, etc.
- **Effects**: `move!`, `set-flag!`, `clear-flag!`, `set!`, `inc!`, `queue!`, `dequeue!`
- **Directions**: `north`, `south`, `east`, `west`, `up`, `down`, `in`, `out`, etc.
- **Flags**: `LOCKED`, `TAKEBIT`, `PERSON`, `LIT`, `OUTSIDE`, etc. (uppercase constants)
- **Behaviors**: `open`, `unlock`, `take`, `drop`, `examine`, `through`, `on-enter`, `before-action`, etc.
- **Booleans**: `true`, `false`, `nil`
- **Comments**: Lines starting with `;`
- **Strings**: Double-quoted strings with escape sequences
- **Numbers**: Integer literals

## Example GRUE Code

```grue
; Room definition with exits
(room @lobby
  :description "The building's main lobby"
  :flags (INSIDE LIT)
  :exits ((out :to @mass-ave :via @outside-door)
          (north :to @hallway)))

; Object with behaviors
(object @outside-door
  :description "A heavy exterior door with an electronic lock"
  :location @mass-ave
  :flags (DOOR LOCKED OPENABLE FIXED)
  :properties (:lock-type electronic :key-required @master-key)
  :behaviors (
    :open (cond
      ((room-has-flag? OUTSIDE)
        (blocked :reason locked-from-outside))
      (true
        (success :context ((note auto-closing)))))

    :unlock (cond
      ((and (has-flag ?self LOCKED) (= ?with @master-key))
        (success :effects ((clear-flag! ?self LOCKED))))
      ((has-flag ?self LOCKED)
        (blocked :reason need-key))
      (true
        (blocked :reason not-locked)))))

; Global state
(globals
  :score 0
  :moves 0
  :game-phase beginning)

; Turn-based event
(event hacker-helps
  :location @terminal-room
  :on-turn (cond
    ((= hacker-help 0)
      (success :effects ((inc! hacker-help))
               :context ((stage 1))))
    (true
      (success :effects ((dequeue! hacker-helps))))))

; Victory condition
(victory
  :when (>= (prop @player score) 100)
  :context ((ending good)))
```

## License

MIT
