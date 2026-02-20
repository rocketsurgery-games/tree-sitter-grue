-- tree-sitter-grue
-- Tree-sitter grammar for GRUE (Game Runtime for Universal Experiences)

local M = {}

-- Symbol kinds used by GRUE's aerial.scm queries
-- All these are in Aerial's default filter_kind list
M.aerial_kinds = {
  "Class",      -- objects, test-group
  "Enum",       -- def, victory, defeat
  "Function",   -- defn, test, defroutine, event
  "Interface",  -- defsyntax
  "Method",     -- default, behaviors
  "Module",     -- world, room
  "Struct",     -- (reserved)
}

function M.setup()
  -- Register the grue filetype
  vim.filetype.add({ extension = { grue = "grue" } })

  -- Register the grue language with neovim's tree-sitter.
  -- The parser .so lives in parser/grue.so within this plugin's runtimepath,
  -- so neovim finds it automatically.
  vim.treesitter.language.register("grue", "grue")

  -- Configure Aerial to show GRUE symbol kinds (if Aerial is loaded)
  M.setup_aerial()
end

function M.setup_aerial()
  local ok, aerial = pcall(require, "aerial")
  if not ok then
    return
  end

  -- Configure Aerial for grue filetype
  -- aerial.setup() merges configs, so this won't clobber user settings
  aerial.setup({
    filter_kind = {
      grue = false,  -- show all symbol kinds for grue files
    },
  })
end

-- Auto-setup when required
M.setup()

return M
