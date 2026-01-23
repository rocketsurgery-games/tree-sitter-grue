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

  -- Extend Aerial's filter_kind to include GRUE kinds for grue filetype
  -- This uses Aerial's per-filetype configuration
  local current_config = aerial.get_config()
  if current_config then
    -- If user has filter_kind = false, all kinds already shown
    if current_config.filter_kind == false then
      return
    end

    -- Add GRUE kinds to filter if it's a table
    if type(current_config.filter_kind) == "table" then
      local kinds_set = {}
      for _, k in ipairs(current_config.filter_kind) do
        kinds_set[k] = true
      end
      for _, k in ipairs(M.aerial_kinds) do
        kinds_set[k] = true
      end
      -- Convert back to list
      local new_kinds = {}
      for k in pairs(kinds_set) do
        table.insert(new_kinds, k)
      end
      -- Re-setup aerial with expanded kinds
      aerial.setup({ filter_kind = new_kinds })
    end
  end
end

-- Auto-setup when required
M.setup()

return M
