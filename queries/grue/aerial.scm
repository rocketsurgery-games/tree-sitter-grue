; Aerial queries for GRUE
; Captures top-level definitions for outline view

; (room NAME ...) - Room definitions
(list
  (symbol (defform) @_type)
  (#eq? @_type "room")
  (entity_ref) @name
  (#set! "kind" "Class")) @symbol

; (object NAME ...) - Object definitions
(list
  (symbol (defform) @_type)
  (#eq? @_type "object")
  (entity_ref) @name
  (#set! "kind" "Struct")) @symbol

; (world ...) - World definition
(list
  (symbol (defform) @_type)
  (#eq? @_type "world")
  (#set! "kind" "Module")
  (#set! "name" "world")) @symbol

; (event NAME ...) - Event definitions
(list
  (symbol (defform) @_type)
  (#eq? @_type "event")
  (symbol (identifier) @name)
  (#set! "kind" "Event")) @symbol

; (victory ...) - Victory condition
(list
  (symbol (defform) @_type)
  (#eq? @_type "victory")
  (#set! "kind" "Constant")
  (#set! "name" "victory")) @symbol

; (defeat NAME ...) - Defeat conditions
(list
  (symbol (defform) @_type)
  (#eq? @_type "defeat")
  (symbol (identifier) @name)
  (#set! "kind" "Constant")) @symbol

; (default VERB ...) - Default behaviors
(list
  (symbol (defform) @_type)
  (#eq? @_type "default")
  (symbol) @name
  (#set! "kind" "Method")) @symbol

; (globals ...) - Global definitions
(list
  (symbol (defform) @_type)
  (#eq? @_type "globals")
  (#set! "kind" "Variable")
  (#set! "name" "globals")) @symbol

; (defn NAME ...) - Named function definitions
(list
  (symbol (special_form) @_type)
  (#eq? @_type "defn")
  (symbol (identifier) @name)
  (#set! "kind" "Function")) @symbol

; (test NAME ...) - Test definitions
(list
  (symbol (test_form) @_type)
  (#eq? @_type "test")
  (string) @name
  (#set! "kind" "Function")) @symbol

; (test-sequence NAME ...) - Test sequence definitions
(list
  (symbol (test_form) @_type)
  (#eq? @_type "test-sequence")
  (string) @name
  (#set! "kind" "Function")) @symbol

; (defsyntax NAME ...) - Syntax definitions
(list
  (symbol (defform) @_type)
  (#eq? @_type "defsyntax")
  (symbol (identifier) @name)
  (#set! "kind" "Interface")) @symbol

; (defglobal NAME ...) - Global definitions
(list
  (symbol (defform) @_type)
  (#eq? @_type "defglobal")
  (symbol (identifier) @name)
  (#set! "kind" "Variable")) @symbol

; (defroutine NAME ...) - Routine definitions
(list
  (symbol (defform) @_type)
  (#eq? @_type "defroutine")
  (symbol (identifier) @name)
  (#set! "kind" "Function")) @symbol
