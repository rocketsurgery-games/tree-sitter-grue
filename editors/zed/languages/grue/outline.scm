; Named definitions: (room @cell ...), (object @key ...), (event @foo ...) ...
; The name must immediately follow the definition keyword.
(source_file
  (list
    (symbol (defform) @context)
    .
    (entity_ref) @name) @item)

; Function definitions: (defn name ...), (def name ...)
(source_file
  (list
    (symbol (special_form) @context (#any-of? @context "defn" "def"))
    .
    (symbol (identifier) @name)) @item)

; Keyword-only top-level forms: (world ...), (victory ...), (defeat ...), (default ...)
(source_file
  (list
    (symbol (defform) @name (#any-of? @name "world" "victory" "defeat" "default"))) @item)
