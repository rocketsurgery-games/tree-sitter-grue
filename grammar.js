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
        "globals",
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
        "cond",
        "if",
        "let",
        "and",
        "or",
        "not",
        "any",
        "all",
        "seq",
        "when"
      ),

    // Outcome forms (behavior results)
    builtin: ($) =>
      choice(
        "success",
        "blocked",
        "redirect",
        "outcome",
        "go",
        "do",
        "tell",
        "random",
        "first-child",
        "next-sibling",
        "first-in"
      ),

    // Operators
    operator: ($) => choice("+", "-", "*", "/", "%", "=", ">", "<", ">=", "<="),

    // Predicate functions (queries that return boolean or value)
    predicate: ($) =>
      choice(
        "has-flag",
        "has-flag?",
        "loc",
        "prop",
        "flags",
        "visible?",
        "held?",
        "here?",
        "in?",
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
        // Test predicates
        "outcome?",
        "reason?",
        "context?",
        "player-at?",
        "global?",
        "not-queued?"
      ),

    // Effect functions (state mutations)
    effect: ($) =>
      choice(
        "move!",
        "set-flag!",
        "clear-flag!",
        "set-prop!",
        "set!",
        "inc!",
        "queue!",
        "dequeue!",
        "get-prop",
        "put-prop"
      ),

    // Test DSL forms
    test_form: ($) => choice("test", "test-sequence", "step"),

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
          // Additional flags
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
        "remove",
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

    // Strings with escape sequences
    string: ($) =>
      seq(
        '"',
        repeat(choice(/[^"\\]+/, seq("\\", /./))),
        '"'
      ),

    // Numbers (integers, optionally negative)
    number: ($) => /-?[0-9]+/,
  },
});
