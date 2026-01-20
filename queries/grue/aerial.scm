; Aerial queries for GRUE
; Captures top-level definitions for outline view

; (room NAME ...) - Room definitions
(list
  (symbol (defform) @_type)
  (#eq? @_type "room")
  .
  (entity_ref) @name
  (#set! "kind" "Class")) @symbol

; (object NAME ...) - Object definitions
(list
  (symbol (defform) @_type)
  (#eq? @_type "object")
  .
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

; (def NAME ...) - Value bindings
(list
  (symbol (special_form) @_type)
  (#eq? @_type "def")
  (symbol (identifier) @name)
  (#set! "kind" "Variable")) @symbol

; (test NAME ...) - Test definitions
(list
  (symbol (test_form) @_type)
  (#eq? @_type "test")
  (string) @name
  (#set! "kind" "Function")) @symbol

; (test-group NAME ...) - Test group definitions
(list
  (symbol (test_form) @_type)
  (#eq? @_type "test-group")
  (string) @name
  (#set! "kind" "Class")) @symbol

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

; Behavior handlers - keyword followed by cond list
; Matches pattern: :verb (cond ...) inside :behaviors blocks
; Each cond list is captured as a symbol with the preceding keyword as name
(list
  (keyword) @name
  .
  (list
    (symbol (special_form) @_cond)
    (#eq? @_cond "cond")) @symbol
  (#set! "kind" "Method"))

; Behavior handlers - keyword followed by fn/lambda (for hooks like :on-enter)
; Matches pattern: :verb (fn (...) ...) inside :behaviors blocks
(list
  (keyword) @name
  .
  (list
    (symbol (special_form) @_fn)
    (#any-of? @_fn "fn" "lambda")) @symbol
  (#set! "kind" "Method"))
