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
  local ok, parsers = pcall(require, "nvim-treesitter.parsers")
  if not ok then
    vim.notify("tree-sitter-grue: nvim-treesitter not found", vim.log.levels.WARN)
    return
  end

  local parser_config = parsers.get_parser_configs()
  parser_config.grue = {
    install_info = {
      url = "https://github.com/rocketsurgery-games/tree-sitter-grue",
      files = { "src/parser.c" },
      branch = "main",
    },
    filetype = "grue",
  }

  vim.filetype.add({ extension = { grue = "grue" } })

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
