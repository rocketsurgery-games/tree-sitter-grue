/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "grue",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source_file: ($) => repeat($._form),

    _form: ($) =>
      choice(
        $.list,
        $.quoted,
        $.entity_ref,
        $.binding_ref,
        $.symbol,
        $.keyword,
        $.string,
        $.number
      ),

    // Comments start with ; and go to end of line
    comment: ($) => /;[^\n]*/,

    // Lists: ( ... )
    list: ($) => seq("(", repeat($._form), ")"),

    // Quoted forms: 'expr (shorthand for (quote expr))
    quoted: ($) => seq("'", $._form),

    // Entity references: @name (objects, rooms, player)
    entity_ref: ($) => /@[a-zA-Z_][a-zA-Z0-9_-]*/,

    // Binding references: ?name (action context bindings)
    binding_ref: ($) => /\?[a-zA-Z_][a-zA-Z0-9_-]*/,

    // Keywords start with :
    keyword: ($) => /:[a-zA-Z_][a-zA-Z0-9_-]*/,

    // Symbols (identifiers)
    symbol: ($) =>
      choice(
        $.defform,
        $.special_form,
        $.builtin,
        $.operator,
        $.predicate,
        $.effect,
        $.test_form,
        $.direction,
        $.flag,
        $.behavior_name,
        $.boolean,
        $.identifier
      ),

    // Top-level definition forms
    defform: ($) =>
      choice(
        "world",
        "room",
        "object",
        "event",
        "victory",
        "defeat",
        "default",
        // Note: "globals" removed - use object properties instead
        "defsyntax",
        "defglobal",
        "defroutine"
      ),

    // Special forms (control flow, function definition)
    special_form: ($) =>
      choice(
        "fn",
        "lambda",
        "defn",
        "def",
        "cond",
        "if",
        "let",
        "match",
        "condp",
        // Threading macros
        "->",
        "->>",
        "cond->",
        "cond->>",
        "and",
        "or",
        "not",
        "any",
        "all",
        "seq",
        "when",
        "quote",
        "list",
        "range",
        "some",
        "every?",
        "for",
        "doseq"
      ),

    // Outcome forms (behavior results) and core functions
    builtin: ($) =>
      choice(
        "success",
        "blocked",
        "redirect",
        // Note: "default" is in defform for (default VERB ...) top-level form
        // The outcome (default :action ...) will be parsed as identifier
        "outcome",
        "result",
        "go",
        "do",
        "tell",
        "player",
        "random",
        "first-child",
        "next-sibling",
        "first-in"
      ),

    // Operators
    operator: ($) => choice("+", "-", "*", "/", "%", "mod", "=", ">", "<", ">=", "<="),

    // Predicate functions (queries that return boolean or value)
    predicate: ($) =>
      choice(
        // Object queries
        "has-flag",
        "has-flag?",
        "loc",
        "prop",
        "desc",
        "flags",
        "visible?",
        "held?",
        "here?",
        "in?",
        "contained-in?",
        "inside?",
        "held-by?",
        "at?",
        "room?",
        "in-room?",
        "room-has-flag?",
        "inventory",
        "contents",
        "exit?",
        "exit-to",
        "exit-via",
        "queued?",
        "eq?",
        // Nested property access
        "get-in",
        "get-player-room",
        // Comparison and logic
        "nil?",
        "empty?",
        // String and list functions
        "str",
        "join",
        "nth",
        "list-set",
        "first",
        "rest",
        "count",
        "cons",
        "concat",
        // Higher-order functions
        "map",
        "filter",
        "remove",
        "keep",
        "reduce",
        // Test predicates
        "outcome?",
        "reason?",
        "context?",
        "player-at?",
        "loc?",
        "prop?",
        "global?",
        "not-queued?",
        "death?",
        "victory?"
      ),

    // Effect functions (state mutations)
    // Both ! forms (imperative) and non-! forms (for quoted effect lists)
    effect: ($) =>
      choice(
        // Imperative forms (direct use)
        "move!",
        "take!",
        "set-flag!",
        "clear-flag!",
        "set-prop!",
        "set!",
        "inc!",
        "queue!",
        "dequeue!",
        // Declarative forms (for quoted effect lists)
        "move",
        "set",
        "set-in",
        "inc",
        "dec",
        "queue",
        "dequeue",
        // Legacy
        "get-prop",
        "put-prop"
      ),

    // Test DSL forms
    test_form: ($) => choice(
      "test",
      "test-group",
      // Test body forms
      "assert",
      "until",
      "wait",
      "run"
    ),

    // Directions
    direction: ($) =>
      choice(
        "north",
        "south",
        "east",
        "west",
        "up",
        "down",
        "northeast",
        "northwest",
        "southeast",
        "southwest",
        "in",
        "out",
        "land"
      ),

    // Common flags (uppercase constants)
    flag: ($) =>
      token(
        choice(
          // Standard object flags
          "ONBIT",
          "INVISIBLE",
          "TAKEBIT",
          "DOORBIT",
          "OPENBIT",
          "OPENABLE",
          "LOCKED",
          "CONTBIT",
          "SURFACEBIT",
          "SEARCHBIT",
          "PERSON",
          "NDESCBIT",
          "LIGHTBIT",
          "FLAMEBIT",
          "FOODBIT",
          "DRINKBIT",
          "READBIT",
          "DEVICEBIT",
          "SWITCHBIT",
          "WEARBIT",
          "WORNBIT",
          "VEHBIT",
          "CLIMBBIT",
          "TRANSBIT",
          "TRYTAKEBIT",
          "ACTORBIT",
          "TOUCHBIT",
          "RMUNGBIT",
          "NOABIT",
          "AN",
          // Additional flags from current spec
          "DOOR",
          "CONTAINER",
          "LIGHT",
          "ON",
          "OPEN",
          "SMALL",
          "MOVEDBIT",
          "FIRSTTIME",
          "POWER",
          "FIXED",
          "LIT",
          "DARK",
          "OUTSIDE",
          "INSIDE"
        )
      ),

    // Behavior names (verbs used in :behaviors blocks)
    behavior_name: ($) =>
      choice(
        // Movement
        "enter",
        "leave",
        "through",
        // Object manipulation
        "take",
        "drop",
        "examine",
        "open",
        "close",
        "lock",
        "unlock",
        "read",
        "turn-on",
        "turn-off",
        "plug",
        "unplug",
        // Combat/interaction
        "attack",
        "push",
        "pull",
        "touch",
        "rub",
        "click",
        "point",
        // Consumables
        "eat",
        "drink",
        // Wearables
        "wear",
        // Note: "remove" (for clothing) is accessed via :remove keyword
        // The bare "remove" symbol is the higher-order list function
        // Movement verbs
        "climb",
        "sit",
        "stand",
        // Senses
        "smell",
        "listen",
        // Conversation
        "ask-about",
        "tell-about",
        "give",
        "trade",
        "ask-for",
        "help",
        // Surface/container
        "put-on",
        "put-in",
        // Room hooks
        "on-enter",
        "before-action",
        // Process events action
        "process-events"
      ),

    // Boolean literals
    boolean: ($) => choice("true", "false", "nil"),

    // General identifier (catch-all for other symbols)
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_?!-]*/,

    // Strings with escape sequences (must be atomic token to avoid comment parsing inside)
    string: ($) => /"([^"\\]|\\.)*"/,

    // Numbers (integers, optionally negative)
    number: ($) => /-?[0-9]+/,
  },
});
