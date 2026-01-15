; Tree-sitter highlights for GRUE
; GRUE - Game Runtime for Universal Experiences

; Comments
(comment) @comment

; Strings
(string) @string

; Numbers
(number) @number

; Keywords (:name, :description, etc.)
(keyword) @property

; Entity references (@player, @door, @terminal-room)
(entity_ref) @variable.parameter

; Binding references (?self, ?actor, ?with)
(binding_ref) @variable.builtin

; Definition forms (world, room, object, event, etc.)
(defform) @keyword

; Special forms (fn, cond, if, let, and, or, etc.)
(special_form) @keyword.control

; Built-in functions and outcome forms
(builtin) @function.builtin

; Operators (+, -, *, /, =, etc.)
(operator) @operator

; Predicate functions (has-flag?, held?, etc.)
(predicate) @function

; Effect functions (move!, set!, etc.)
(effect) @function.macro

; Test forms (test, test-sequence, step)
(test_form) @keyword.directive

; Directions (north, south, etc.)
(direction) @constant

; Flags (ONBIT, TAKEBIT, etc.)
(flag) @constant.builtin

; Behavior names (enter, leave, take, etc.)
(behavior_name) @function.method

; Boolean literals
(boolean) @constant.builtin

; General identifiers
(identifier) @variable

; Quote prefix
(quoted "'" @punctuation.special)

; Punctuation
"(" @punctuation.bracket
")" @punctuation.bracket
