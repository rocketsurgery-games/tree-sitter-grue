#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 211
#define ALIAS_COUNT 0
#define TOKEN_COUNT 193
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_SQUOTE = 4,
  sym_entity_ref = 5,
  sym_binding_ref = 6,
  sym_keyword = 7,
  anon_sym_world = 8,
  anon_sym_room = 9,
  anon_sym_object = 10,
  anon_sym_event = 11,
  anon_sym_victory = 12,
  anon_sym_defeat = 13,
  anon_sym_default = 14,
  anon_sym_globals = 15,
  anon_sym_defsyntax = 16,
  anon_sym_defglobal = 17,
  anon_sym_defroutine = 18,
  anon_sym_fn = 19,
  anon_sym_lambda = 20,
  anon_sym_defn = 21,
  anon_sym_def = 22,
  anon_sym_cond = 23,
  anon_sym_if = 24,
  anon_sym_let = 25,
  anon_sym_match = 26,
  anon_sym_condp = 27,
  anon_sym_cond_DASH_GT = 28,
  anon_sym_cond_DASH_GT_GT = 29,
  anon_sym_and = 30,
  anon_sym_or = 31,
  anon_sym_not = 32,
  anon_sym_any = 33,
  anon_sym_all = 34,
  anon_sym_seq = 35,
  anon_sym_when = 36,
  anon_sym_quote = 37,
  anon_sym_list = 38,
  anon_sym_range = 39,
  anon_sym_some = 40,
  anon_sym_every_QMARK = 41,
  anon_sym_for = 42,
  anon_sym_doseq = 43,
  anon_sym_success = 44,
  anon_sym_blocked = 45,
  anon_sym_redirect = 46,
  anon_sym_outcome = 47,
  anon_sym_go = 48,
  anon_sym_do = 49,
  anon_sym_tell = 50,
  anon_sym_random = 51,
  anon_sym_first_DASHchild = 52,
  anon_sym_next_DASHsibling = 53,
  anon_sym_first_DASHin = 54,
  anon_sym_PLUS = 55,
  anon_sym_DASH = 56,
  anon_sym_STAR = 57,
  anon_sym_SLASH = 58,
  anon_sym_PERCENT = 59,
  anon_sym_mod = 60,
  anon_sym_EQ = 61,
  anon_sym_GT = 62,
  anon_sym_LT = 63,
  anon_sym_GT_EQ = 64,
  anon_sym_LT_EQ = 65,
  anon_sym_has_DASHflag = 66,
  anon_sym_has_DASHflag_QMARK = 67,
  anon_sym_loc = 68,
  anon_sym_prop = 69,
  anon_sym_desc = 70,
  anon_sym_flags = 71,
  anon_sym_visible_QMARK = 72,
  anon_sym_held_QMARK = 73,
  anon_sym_here_QMARK = 74,
  anon_sym_in_QMARK = 75,
  anon_sym_contained_DASHin_QMARK = 76,
  anon_sym_inside_QMARK = 77,
  anon_sym_held_DASHby_QMARK = 78,
  anon_sym_at_QMARK = 79,
  anon_sym_room_QMARK = 80,
  anon_sym_in_DASHroom_QMARK = 81,
  anon_sym_room_DASHhas_DASHflag_QMARK = 82,
  anon_sym_inventory = 83,
  anon_sym_contents = 84,
  anon_sym_exit_QMARK = 85,
  anon_sym_exit_DASHto = 86,
  anon_sym_exit_DASHvia = 87,
  anon_sym_queued_QMARK = 88,
  anon_sym_eq_QMARK = 89,
  anon_sym_nil_QMARK = 90,
  anon_sym_empty_QMARK = 91,
  anon_sym_str = 92,
  anon_sym_join = 93,
  anon_sym_nth = 94,
  anon_sym_list_DASHset = 95,
  anon_sym_first = 96,
  anon_sym_rest = 97,
  anon_sym_count = 98,
  anon_sym_cons = 99,
  anon_sym_concat = 100,
  anon_sym_map = 101,
  anon_sym_filter = 102,
  anon_sym_remove = 103,
  anon_sym_keep = 104,
  anon_sym_reduce = 105,
  anon_sym_outcome_QMARK = 106,
  anon_sym_reason_QMARK = 107,
  anon_sym_context_QMARK = 108,
  anon_sym_player_DASHat_QMARK = 109,
  anon_sym_loc_QMARK = 110,
  anon_sym_prop_QMARK = 111,
  anon_sym_global_QMARK = 112,
  anon_sym_not_DASHqueued_QMARK = 113,
  anon_sym_move_BANG = 114,
  anon_sym_take_BANG = 115,
  anon_sym_set_DASHflag_BANG = 116,
  anon_sym_clear_DASHflag_BANG = 117,
  anon_sym_set_DASHprop_BANG = 118,
  anon_sym_set_BANG = 119,
  anon_sym_inc_BANG = 120,
  anon_sym_queue_BANG = 121,
  anon_sym_dequeue_BANG = 122,
  anon_sym_get_DASHprop = 123,
  anon_sym_put_DASHprop = 124,
  anon_sym_test = 125,
  anon_sym_test_DASHsequence = 126,
  anon_sym_test_DASHgroup = 127,
  anon_sym_step = 128,
  anon_sym_north = 129,
  anon_sym_south = 130,
  anon_sym_east = 131,
  anon_sym_west = 132,
  anon_sym_up = 133,
  anon_sym_down = 134,
  anon_sym_northeast = 135,
  anon_sym_northwest = 136,
  anon_sym_southeast = 137,
  anon_sym_southwest = 138,
  anon_sym_in = 139,
  anon_sym_out = 140,
  anon_sym_land = 141,
  sym_flag = 142,
  anon_sym_enter = 143,
  anon_sym_leave = 144,
  anon_sym_through = 145,
  anon_sym_take = 146,
  anon_sym_drop = 147,
  anon_sym_examine = 148,
  anon_sym_open = 149,
  anon_sym_close = 150,
  anon_sym_lock = 151,
  anon_sym_unlock = 152,
  anon_sym_read = 153,
  anon_sym_turn_DASHon = 154,
  anon_sym_turn_DASHoff = 155,
  anon_sym_plug = 156,
  anon_sym_unplug = 157,
  anon_sym_attack = 158,
  anon_sym_push = 159,
  anon_sym_pull = 160,
  anon_sym_touch = 161,
  anon_sym_rub = 162,
  anon_sym_click = 163,
  anon_sym_point = 164,
  anon_sym_eat = 165,
  anon_sym_drink = 166,
  anon_sym_wear = 167,
  anon_sym_climb = 168,
  anon_sym_sit = 169,
  anon_sym_stand = 170,
  anon_sym_smell = 171,
  anon_sym_listen = 172,
  anon_sym_ask_DASHabout = 173,
  anon_sym_tell_DASHabout = 174,
  anon_sym_give = 175,
  anon_sym_trade = 176,
  anon_sym_ask_DASHfor = 177,
  anon_sym_help = 178,
  anon_sym_put_DASHon = 179,
  anon_sym_put_DASHin = 180,
  anon_sym_on_DASHenter = 181,
  anon_sym_before_DASHaction = 182,
  anon_sym_process_DASHevents = 183,
  anon_sym_true = 184,
  anon_sym_false = 185,
  anon_sym_nil = 186,
  sym_identifier = 187,
  anon_sym_DQUOTE = 188,
  aux_sym_string_token1 = 189,
  anon_sym_BSLASH = 190,
  aux_sym_string_token2 = 191,
  sym_number = 192,
  sym_source_file = 193,
  sym__form = 194,
  sym_list = 195,
  sym_quoted = 196,
  sym_symbol = 197,
  sym_defform = 198,
  sym_special_form = 199,
  sym_builtin = 200,
  sym_operator = 201,
  sym_predicate = 202,
  sym_effect = 203,
  sym_test_form = 204,
  sym_direction = 205,
  sym_behavior_name = 206,
  sym_boolean = 207,
  sym_string = 208,
  aux_sym_source_file_repeat1 = 209,
  aux_sym_string_repeat1 = 210,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [sym_entity_ref] = "entity_ref",
  [sym_binding_ref] = "binding_ref",
  [sym_keyword] = "keyword",
  [anon_sym_world] = "world",
  [anon_sym_room] = "room",
  [anon_sym_object] = "object",
  [anon_sym_event] = "event",
  [anon_sym_victory] = "victory",
  [anon_sym_defeat] = "defeat",
  [anon_sym_default] = "default",
  [anon_sym_globals] = "globals",
  [anon_sym_defsyntax] = "defsyntax",
  [anon_sym_defglobal] = "defglobal",
  [anon_sym_defroutine] = "defroutine",
  [anon_sym_fn] = "fn",
  [anon_sym_lambda] = "lambda",
  [anon_sym_defn] = "defn",
  [anon_sym_def] = "def",
  [anon_sym_cond] = "cond",
  [anon_sym_if] = "if",
  [anon_sym_let] = "let",
  [anon_sym_match] = "match",
  [anon_sym_condp] = "condp",
  [anon_sym_cond_DASH_GT] = "cond->",
  [anon_sym_cond_DASH_GT_GT] = "cond->>",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_any] = "any",
  [anon_sym_all] = "all",
  [anon_sym_seq] = "seq",
  [anon_sym_when] = "when",
  [anon_sym_quote] = "quote",
  [anon_sym_list] = "list",
  [anon_sym_range] = "range",
  [anon_sym_some] = "some",
  [anon_sym_every_QMARK] = "every\?",
  [anon_sym_for] = "for",
  [anon_sym_doseq] = "doseq",
  [anon_sym_success] = "success",
  [anon_sym_blocked] = "blocked",
  [anon_sym_redirect] = "redirect",
  [anon_sym_outcome] = "outcome",
  [anon_sym_go] = "go",
  [anon_sym_do] = "do",
  [anon_sym_tell] = "tell",
  [anon_sym_random] = "random",
  [anon_sym_first_DASHchild] = "first-child",
  [anon_sym_next_DASHsibling] = "next-sibling",
  [anon_sym_first_DASHin] = "first-in",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_mod] = "mod",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_has_DASHflag] = "has-flag",
  [anon_sym_has_DASHflag_QMARK] = "has-flag\?",
  [anon_sym_loc] = "loc",
  [anon_sym_prop] = "prop",
  [anon_sym_desc] = "desc",
  [anon_sym_flags] = "flags",
  [anon_sym_visible_QMARK] = "visible\?",
  [anon_sym_held_QMARK] = "held\?",
  [anon_sym_here_QMARK] = "here\?",
  [anon_sym_in_QMARK] = "in\?",
  [anon_sym_contained_DASHin_QMARK] = "contained-in\?",
  [anon_sym_inside_QMARK] = "inside\?",
  [anon_sym_held_DASHby_QMARK] = "held-by\?",
  [anon_sym_at_QMARK] = "at\?",
  [anon_sym_room_QMARK] = "room\?",
  [anon_sym_in_DASHroom_QMARK] = "in-room\?",
  [anon_sym_room_DASHhas_DASHflag_QMARK] = "room-has-flag\?",
  [anon_sym_inventory] = "inventory",
  [anon_sym_contents] = "contents",
  [anon_sym_exit_QMARK] = "exit\?",
  [anon_sym_exit_DASHto] = "exit-to",
  [anon_sym_exit_DASHvia] = "exit-via",
  [anon_sym_queued_QMARK] = "queued\?",
  [anon_sym_eq_QMARK] = "eq\?",
  [anon_sym_nil_QMARK] = "nil\?",
  [anon_sym_empty_QMARK] = "empty\?",
  [anon_sym_str] = "str",
  [anon_sym_join] = "join",
  [anon_sym_nth] = "nth",
  [anon_sym_list_DASHset] = "list-set",
  [anon_sym_first] = "first",
  [anon_sym_rest] = "rest",
  [anon_sym_count] = "count",
  [anon_sym_cons] = "cons",
  [anon_sym_concat] = "concat",
  [anon_sym_map] = "map",
  [anon_sym_filter] = "filter",
  [anon_sym_remove] = "remove",
  [anon_sym_keep] = "keep",
  [anon_sym_reduce] = "reduce",
  [anon_sym_outcome_QMARK] = "outcome\?",
  [anon_sym_reason_QMARK] = "reason\?",
  [anon_sym_context_QMARK] = "context\?",
  [anon_sym_player_DASHat_QMARK] = "player-at\?",
  [anon_sym_loc_QMARK] = "loc\?",
  [anon_sym_prop_QMARK] = "prop\?",
  [anon_sym_global_QMARK] = "global\?",
  [anon_sym_not_DASHqueued_QMARK] = "not-queued\?",
  [anon_sym_move_BANG] = "move!",
  [anon_sym_take_BANG] = "take!",
  [anon_sym_set_DASHflag_BANG] = "set-flag!",
  [anon_sym_clear_DASHflag_BANG] = "clear-flag!",
  [anon_sym_set_DASHprop_BANG] = "set-prop!",
  [anon_sym_set_BANG] = "set!",
  [anon_sym_inc_BANG] = "inc!",
  [anon_sym_queue_BANG] = "queue!",
  [anon_sym_dequeue_BANG] = "dequeue!",
  [anon_sym_get_DASHprop] = "get-prop",
  [anon_sym_put_DASHprop] = "put-prop",
  [anon_sym_test] = "test",
  [anon_sym_test_DASHsequence] = "test-sequence",
  [anon_sym_test_DASHgroup] = "test-group",
  [anon_sym_step] = "step",
  [anon_sym_north] = "north",
  [anon_sym_south] = "south",
  [anon_sym_east] = "east",
  [anon_sym_west] = "west",
  [anon_sym_up] = "up",
  [anon_sym_down] = "down",
  [anon_sym_northeast] = "northeast",
  [anon_sym_northwest] = "northwest",
  [anon_sym_southeast] = "southeast",
  [anon_sym_southwest] = "southwest",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_land] = "land",
  [sym_flag] = "flag",
  [anon_sym_enter] = "enter",
  [anon_sym_leave] = "leave",
  [anon_sym_through] = "through",
  [anon_sym_take] = "take",
  [anon_sym_drop] = "drop",
  [anon_sym_examine] = "examine",
  [anon_sym_open] = "open",
  [anon_sym_close] = "close",
  [anon_sym_lock] = "lock",
  [anon_sym_unlock] = "unlock",
  [anon_sym_read] = "read",
  [anon_sym_turn_DASHon] = "turn-on",
  [anon_sym_turn_DASHoff] = "turn-off",
  [anon_sym_plug] = "plug",
  [anon_sym_unplug] = "unplug",
  [anon_sym_attack] = "attack",
  [anon_sym_push] = "push",
  [anon_sym_pull] = "pull",
  [anon_sym_touch] = "touch",
  [anon_sym_rub] = "rub",
  [anon_sym_click] = "click",
  [anon_sym_point] = "point",
  [anon_sym_eat] = "eat",
  [anon_sym_drink] = "drink",
  [anon_sym_wear] = "wear",
  [anon_sym_climb] = "climb",
  [anon_sym_sit] = "sit",
  [anon_sym_stand] = "stand",
  [anon_sym_smell] = "smell",
  [anon_sym_listen] = "listen",
  [anon_sym_ask_DASHabout] = "ask-about",
  [anon_sym_tell_DASHabout] = "tell-about",
  [anon_sym_give] = "give",
  [anon_sym_trade] = "trade",
  [anon_sym_ask_DASHfor] = "ask-for",
  [anon_sym_help] = "help",
  [anon_sym_put_DASHon] = "put-on",
  [anon_sym_put_DASHin] = "put-in",
  [anon_sym_on_DASHenter] = "on-enter",
  [anon_sym_before_DASHaction] = "before-action",
  [anon_sym_process_DASHevents] = "process-events",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_nil] = "nil",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__form] = "_form",
  [sym_list] = "list",
  [sym_quoted] = "quoted",
  [sym_symbol] = "symbol",
  [sym_defform] = "defform",
  [sym_special_form] = "special_form",
  [sym_builtin] = "builtin",
  [sym_operator] = "operator",
  [sym_predicate] = "predicate",
  [sym_effect] = "effect",
  [sym_test_form] = "test_form",
  [sym_direction] = "direction",
  [sym_behavior_name] = "behavior_name",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_entity_ref] = sym_entity_ref,
  [sym_binding_ref] = sym_binding_ref,
  [sym_keyword] = sym_keyword,
  [anon_sym_world] = anon_sym_world,
  [anon_sym_room] = anon_sym_room,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_victory] = anon_sym_victory,
  [anon_sym_defeat] = anon_sym_defeat,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_globals] = anon_sym_globals,
  [anon_sym_defsyntax] = anon_sym_defsyntax,
  [anon_sym_defglobal] = anon_sym_defglobal,
  [anon_sym_defroutine] = anon_sym_defroutine,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_lambda] = anon_sym_lambda,
  [anon_sym_defn] = anon_sym_defn,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_cond] = anon_sym_cond,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_condp] = anon_sym_condp,
  [anon_sym_cond_DASH_GT] = anon_sym_cond_DASH_GT,
  [anon_sym_cond_DASH_GT_GT] = anon_sym_cond_DASH_GT_GT,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_every_QMARK] = anon_sym_every_QMARK,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_doseq] = anon_sym_doseq,
  [anon_sym_success] = anon_sym_success,
  [anon_sym_blocked] = anon_sym_blocked,
  [anon_sym_redirect] = anon_sym_redirect,
  [anon_sym_outcome] = anon_sym_outcome,
  [anon_sym_go] = anon_sym_go,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_tell] = anon_sym_tell,
  [anon_sym_random] = anon_sym_random,
  [anon_sym_first_DASHchild] = anon_sym_first_DASHchild,
  [anon_sym_next_DASHsibling] = anon_sym_next_DASHsibling,
  [anon_sym_first_DASHin] = anon_sym_first_DASHin,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_has_DASHflag] = anon_sym_has_DASHflag,
  [anon_sym_has_DASHflag_QMARK] = anon_sym_has_DASHflag_QMARK,
  [anon_sym_loc] = anon_sym_loc,
  [anon_sym_prop] = anon_sym_prop,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_flags] = anon_sym_flags,
  [anon_sym_visible_QMARK] = anon_sym_visible_QMARK,
  [anon_sym_held_QMARK] = anon_sym_held_QMARK,
  [anon_sym_here_QMARK] = anon_sym_here_QMARK,
  [anon_sym_in_QMARK] = anon_sym_in_QMARK,
  [anon_sym_contained_DASHin_QMARK] = anon_sym_contained_DASHin_QMARK,
  [anon_sym_inside_QMARK] = anon_sym_inside_QMARK,
  [anon_sym_held_DASHby_QMARK] = anon_sym_held_DASHby_QMARK,
  [anon_sym_at_QMARK] = anon_sym_at_QMARK,
  [anon_sym_room_QMARK] = anon_sym_room_QMARK,
  [anon_sym_in_DASHroom_QMARK] = anon_sym_in_DASHroom_QMARK,
  [anon_sym_room_DASHhas_DASHflag_QMARK] = anon_sym_room_DASHhas_DASHflag_QMARK,
  [anon_sym_inventory] = anon_sym_inventory,
  [anon_sym_contents] = anon_sym_contents,
  [anon_sym_exit_QMARK] = anon_sym_exit_QMARK,
  [anon_sym_exit_DASHto] = anon_sym_exit_DASHto,
  [anon_sym_exit_DASHvia] = anon_sym_exit_DASHvia,
  [anon_sym_queued_QMARK] = anon_sym_queued_QMARK,
  [anon_sym_eq_QMARK] = anon_sym_eq_QMARK,
  [anon_sym_nil_QMARK] = anon_sym_nil_QMARK,
  [anon_sym_empty_QMARK] = anon_sym_empty_QMARK,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_nth] = anon_sym_nth,
  [anon_sym_list_DASHset] = anon_sym_list_DASHset,
  [anon_sym_first] = anon_sym_first,
  [anon_sym_rest] = anon_sym_rest,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_cons] = anon_sym_cons,
  [anon_sym_concat] = anon_sym_concat,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_remove] = anon_sym_remove,
  [anon_sym_keep] = anon_sym_keep,
  [anon_sym_reduce] = anon_sym_reduce,
  [anon_sym_outcome_QMARK] = anon_sym_outcome_QMARK,
  [anon_sym_reason_QMARK] = anon_sym_reason_QMARK,
  [anon_sym_context_QMARK] = anon_sym_context_QMARK,
  [anon_sym_player_DASHat_QMARK] = anon_sym_player_DASHat_QMARK,
  [anon_sym_loc_QMARK] = anon_sym_loc_QMARK,
  [anon_sym_prop_QMARK] = anon_sym_prop_QMARK,
  [anon_sym_global_QMARK] = anon_sym_global_QMARK,
  [anon_sym_not_DASHqueued_QMARK] = anon_sym_not_DASHqueued_QMARK,
  [anon_sym_move_BANG] = anon_sym_move_BANG,
  [anon_sym_take_BANG] = anon_sym_take_BANG,
  [anon_sym_set_DASHflag_BANG] = anon_sym_set_DASHflag_BANG,
  [anon_sym_clear_DASHflag_BANG] = anon_sym_clear_DASHflag_BANG,
  [anon_sym_set_DASHprop_BANG] = anon_sym_set_DASHprop_BANG,
  [anon_sym_set_BANG] = anon_sym_set_BANG,
  [anon_sym_inc_BANG] = anon_sym_inc_BANG,
  [anon_sym_queue_BANG] = anon_sym_queue_BANG,
  [anon_sym_dequeue_BANG] = anon_sym_dequeue_BANG,
  [anon_sym_get_DASHprop] = anon_sym_get_DASHprop,
  [anon_sym_put_DASHprop] = anon_sym_put_DASHprop,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_test_DASHsequence] = anon_sym_test_DASHsequence,
  [anon_sym_test_DASHgroup] = anon_sym_test_DASHgroup,
  [anon_sym_step] = anon_sym_step,
  [anon_sym_north] = anon_sym_north,
  [anon_sym_south] = anon_sym_south,
  [anon_sym_east] = anon_sym_east,
  [anon_sym_west] = anon_sym_west,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_down] = anon_sym_down,
  [anon_sym_northeast] = anon_sym_northeast,
  [anon_sym_northwest] = anon_sym_northwest,
  [anon_sym_southeast] = anon_sym_southeast,
  [anon_sym_southwest] = anon_sym_southwest,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_land] = anon_sym_land,
  [sym_flag] = sym_flag,
  [anon_sym_enter] = anon_sym_enter,
  [anon_sym_leave] = anon_sym_leave,
  [anon_sym_through] = anon_sym_through,
  [anon_sym_take] = anon_sym_take,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_examine] = anon_sym_examine,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_unlock] = anon_sym_unlock,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_turn_DASHon] = anon_sym_turn_DASHon,
  [anon_sym_turn_DASHoff] = anon_sym_turn_DASHoff,
  [anon_sym_plug] = anon_sym_plug,
  [anon_sym_unplug] = anon_sym_unplug,
  [anon_sym_attack] = anon_sym_attack,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pull] = anon_sym_pull,
  [anon_sym_touch] = anon_sym_touch,
  [anon_sym_rub] = anon_sym_rub,
  [anon_sym_click] = anon_sym_click,
  [anon_sym_point] = anon_sym_point,
  [anon_sym_eat] = anon_sym_eat,
  [anon_sym_drink] = anon_sym_drink,
  [anon_sym_wear] = anon_sym_wear,
  [anon_sym_climb] = anon_sym_climb,
  [anon_sym_sit] = anon_sym_sit,
  [anon_sym_stand] = anon_sym_stand,
  [anon_sym_smell] = anon_sym_smell,
  [anon_sym_listen] = anon_sym_listen,
  [anon_sym_ask_DASHabout] = anon_sym_ask_DASHabout,
  [anon_sym_tell_DASHabout] = anon_sym_tell_DASHabout,
  [anon_sym_give] = anon_sym_give,
  [anon_sym_trade] = anon_sym_trade,
  [anon_sym_ask_DASHfor] = anon_sym_ask_DASHfor,
  [anon_sym_help] = anon_sym_help,
  [anon_sym_put_DASHon] = anon_sym_put_DASHon,
  [anon_sym_put_DASHin] = anon_sym_put_DASHin,
  [anon_sym_on_DASHenter] = anon_sym_on_DASHenter,
  [anon_sym_before_DASHaction] = anon_sym_before_DASHaction,
  [anon_sym_process_DASHevents] = anon_sym_process_DASHevents,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_nil] = anon_sym_nil,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__form] = sym__form,
  [sym_list] = sym_list,
  [sym_quoted] = sym_quoted,
  [sym_symbol] = sym_symbol,
  [sym_defform] = sym_defform,
  [sym_special_form] = sym_special_form,
  [sym_builtin] = sym_builtin,
  [sym_operator] = sym_operator,
  [sym_predicate] = sym_predicate,
  [sym_effect] = sym_effect,
  [sym_test_form] = sym_test_form,
  [sym_direction] = sym_direction,
  [sym_behavior_name] = sym_behavior_name,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_entity_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_world] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_room] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_victory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_globals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defsyntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defglobal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defroutine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond_DASH_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_every_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doseq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_success] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blocked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_redirect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outcome] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_go] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_random] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_first_DASHchild] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next_DASHsibling] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_first_DASHin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has_DASHflag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has_DASHflag_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_desc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_visible_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_held_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_here_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contained_DASHin_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inside_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_held_DASHby_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_room_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in_DASHroom_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_room_DASHhas_DASHflag_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inventory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contents] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit_DASHvia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_queued_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_first] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cons] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reduce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outcome_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reason_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_context_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_player_DASHat_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loc_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prop_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_DASHqueued_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_take_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHflag_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clear_DASHflag_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHprop_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inc_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_queue_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dequeue_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHprop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put_DASHprop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test_DASHsequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test_DASHgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_step] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_north] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_south] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_east] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_west] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_northeast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_northwest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_southeast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_southwest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_land] = {
    .visible = true,
    .named = false,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_enter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leave] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_through] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_take] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_examine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unlock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_turn_DASHon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_turn_DASHoff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unplug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_touch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_click] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_point] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wear] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_climb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_listen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHabout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tell_DASHabout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_give] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trade] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_help] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put_DASHon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put_DASHin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHenter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_before_DASHaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_process_DASHevents] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_defform] = {
    .visible = true,
    .named = true,
  },
  [sym_special_form] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_test_form] = {
    .visible = true,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_behavior_name] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '"', 760,
        '%', 66,
        '\'', 11,
        '(', 9,
        ')', 10,
        '*', 64,
        '+', 62,
        '-', 63,
        '/', 65,
        ':', 3,
        ';', 8,
        '<', 70,
        '=', 68,
        '>', 69,
        '?', 4,
        '@', 5,
        'A', 252,
        'C', 295,
        'D', 237,
        'F', 278,
        'I', 302,
        'L', 279,
        'M', 312,
        'N', 259,
        'O', 303,
        'P', 265,
        'R', 268,
        'S', 270,
        'T', 238,
        'V', 262,
        'W', 272,
        '\\', 763,
        'a', 540,
        'b', 427,
        'c', 541,
        'd', 428,
        'e', 346,
        'f', 357,
        'g', 451,
        'h', 347,
        'i', 487,
        'j', 608,
        'k', 454,
        'l', 348,
        'm', 349,
        'n', 429,
        'o', 382,
        'p', 542,
        'q', 731,
        'r', 350,
        's', 430,
        't', 358,
        'u', 575,
        'v', 515,
        'w', 431,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == ';') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(765);
      if (lookahead != 0) ADVANCE(764);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(760);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(763);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(761);
      if (lookahead != 0) ADVANCE(762);
      END_STATE();
    case 3:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 4:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 5:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_entity_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_binding_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_world);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_room);
      if (lookahead == '-') ADVANCE(514);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_event);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_victory);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_defeat);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_globals);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_defsyntax);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_defglobal);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_defroutine);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'a') ADVANCE(736);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'g') ADVANCE(567);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(618);
      if (lookahead == 's') ADVANCE(758);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_condp);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT);
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-') ADVANCE(646);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_seq);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_some);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_every_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_doseq);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_success);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_blocked);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_redirect);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_outcome);
      if (lookahead == '?') ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_go);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead == 'w') ADVANCE(578);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_tell);
      if (lookahead == '-') ADVANCE(380);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_random);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_first_DASHchild);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_next_DASHsibling);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_first_DASHin);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_has_DASHflag);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_has_DASHflag_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_loc);
      if (lookahead == '?') ADVANCE(117);
      if (lookahead == 'k') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_prop);
      if (lookahead == '?') ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_flags);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_visible_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_held_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_here_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_in_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_contained_DASHin_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_inside_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_held_DASHby_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_at_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_room_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_in_DASHroom_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_room_DASHhas_DASHflag_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_inventory);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_contents);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_exit_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_exit_DASHto);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_exit_DASHvia);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_queued_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_eq_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_nil_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_empty_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_join);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_nth);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_list_DASHset);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_first);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_rest);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_cons);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_concat);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_map);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_filter);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_keep);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_reduce);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_outcome_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_reason_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_context_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_player_DASHat_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_loc_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_prop_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_global_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_not_DASHqueued_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_move_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_take_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_set_DASHflag_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_clear_DASHflag_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_set_DASHprop_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_set_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_inc_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_queue_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_dequeue_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_get_DASHprop);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_put_DASHprop);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == '-') ADVANCE(505);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_test_DASHsequence);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_test_DASHgroup);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_step);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_north);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == 'w') ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_south);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'w') ADVANCE(485);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_east);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_west);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_up);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_down);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_northeast);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_northwest);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_southeast);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_southwest);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(660);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead == 'v') ADVANCE(479);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == 'c') ADVANCE(612);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_land);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == 'A') ADVANCE(250);
      if (lookahead == 'B') ADVANCE(286);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == 'B') ADVANCE(286);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_enter);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_leave);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_through);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_take);
      if (lookahead == '!') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_drop);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_examine);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_close);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_lock);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_unlock);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_turn_DASHon);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_turn_DASHoff);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_plug);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_unplug);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_attack);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_pull);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_touch);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_rub);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_point);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_eat);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_drink);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_wear);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_climb);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_sit);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_stand);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_smell);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_listen);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ask_DASHabout);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_tell_DASHabout);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_give);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_trade);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ask_DASHfor);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_help);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_put_DASHon);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_put_DASHin);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_on_DASHenter);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_before_DASHaction);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_process_DASHevents);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '?') ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '-') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(724);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(642);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(607);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(481);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(495);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(119);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(79);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(322);
      if (lookahead == 'E') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead == 'R') ADVANCE(281);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(293);
      if (lookahead == 'O') ADVANCE(341);
      if (lookahead == 'R') ADVANCE(245);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(293);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(296);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(255);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(309);
      if (lookahead == 'Y') ADVANCE(337);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(321);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(319);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(287);
      if (lookahead == 'B') ADVANCE(286);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(297);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(286);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(340);
      if (lookahead == 'N') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(276);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(292);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(266);
      if (lookahead == 'O') ADVANCE(241);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(261);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(323);
      if (lookahead == 'O') ADVANCE(345);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(327);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(257);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'M') ADVANCE(342);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(305);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'M') ADVANCE(242);
      if (lookahead == 'U') ADVANCE(320);
      if (lookahead == 'W') ADVANCE(285);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(316);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(247);
      if (lookahead == 'O') ADVANCE(324);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(244);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(277);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(333);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(318);
      if (lookahead == 'L') ADVANCE(243);
      if (lookahead == 'O') ADVANCE(311);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == 'O') ADVANCE(256);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(308);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(255);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(250);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(335);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(310);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(300);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(331);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(267);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(264);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(280);
      if (lookahead == 'O') ADVANCE(307);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(294);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(261);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(249);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(264);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(261);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(328);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == 'P') ADVANCE(269);
      if (lookahead == 'U') ADVANCE(336);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(274);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(334);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(291);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(325);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(344);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(317);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(319);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(301);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(330);
      if (lookahead == 'X') ADVANCE(267);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(273);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(253);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(290);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(326);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(315);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(254);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(283);
      if (lookahead == 'V') ADVANCE(289);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(283);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(338);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(284);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(248);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(253);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(329);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(239);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(339);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(314);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(253);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(306);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(282);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(263);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == 'm') ADVANCE(641);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead == 'q') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(432);
      if (lookahead == 'x') ADVANCE(351);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(674);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(610);
      if (lookahead == 'u') ADVANCE(383);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(574);
      if (lookahead == 'i') ADVANCE(691);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(757);
      if (lookahead == 'u') ADVANCE(496);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'd') ADVANCE(528);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == 'h') ADVANCE(655);
      if (lookahead == 'o') ADVANCE(734);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == 'u') ADVANCE(657);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead == 's') ADVANCE(695);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'f') ADVANCE(624);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(549);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(550);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(682);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(461);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(688);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(421);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(370);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(756);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(558);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(565);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(629);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(631);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(508);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(535);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(536);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(513);
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(726);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(702);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(463);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(705);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(718);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(539);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(40);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'v') ADVANCE(453);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 's') ADVANCE(627);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(355);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(613);
      if (lookahead == 'g') ADVANCE(443);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(459);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'l') ADVANCE(611);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(751);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'o') ADVANCE(658);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead == 'i') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == 'u') ADVANCE(400);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'o') ADVANCE(656);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(746);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(649);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(659);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(725);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(741);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'q') ADVANCE(737);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(617);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(559);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(562);
      if (lookahead == 'p') ADVANCE(663);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(60);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(668);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(512);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(664);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(522);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(587);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead == 'o') ADVANCE(584);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(666);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(600);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(469);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(204);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(436);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(462);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(605);
      if (lookahead == 'u') ADVANCE(551);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(417);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(733);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(547);
      if (lookahead == 's') ADVANCE(694);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(419);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(548);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(703);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(622);
      if (lookahead == 'p') ADVANCE(553);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(678);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(727);
      if (lookahead == 'r') ADVANCE(677);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(632);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(435);
      if (lookahead == 'u') ADVANCE(715);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(448);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(520);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(560);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(593);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(697);
      if (lookahead == 'r') ADVANCE(755);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(699);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 'x') ADVANCE(719);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(721);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(447);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(722);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(728);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(729);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(568);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(573);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(569);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(732);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(637);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(665);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(638);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(735);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(640);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(651);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(615);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(589);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(586);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(740);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(742);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(713);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(661);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(42);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(744);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(745);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(752);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(753);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(614);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(714);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(626);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(616);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(619);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(466);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(690);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(692);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(669);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(707);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(709);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(710);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(685);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(212);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(527);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(754);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(670);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(606);
      if (lookahead == 'v') ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(623);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(625);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(477);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(503);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(497);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(639);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(557);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(480);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(441);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(730);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(706);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(457);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(711);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(467);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(483);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(434);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(440);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(446);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(484);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(716);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(19);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(223);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(230);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(471);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(597);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(762);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(762);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(765);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(764);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_entity_ref] = ACTIONS(1),
    [sym_binding_ref] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_world] = ACTIONS(1),
    [anon_sym_room] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_victory] = ACTIONS(1),
    [anon_sym_defeat] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_globals] = ACTIONS(1),
    [anon_sym_defsyntax] = ACTIONS(1),
    [anon_sym_defglobal] = ACTIONS(1),
    [anon_sym_defroutine] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [anon_sym_defn] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_condp] = ACTIONS(1),
    [anon_sym_cond_DASH_GT] = ACTIONS(1),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_every_QMARK] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_doseq] = ACTIONS(1),
    [anon_sym_success] = ACTIONS(1),
    [anon_sym_blocked] = ACTIONS(1),
    [anon_sym_redirect] = ACTIONS(1),
    [anon_sym_outcome] = ACTIONS(1),
    [anon_sym_go] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_tell] = ACTIONS(1),
    [anon_sym_random] = ACTIONS(1),
    [anon_sym_first_DASHchild] = ACTIONS(1),
    [anon_sym_next_DASHsibling] = ACTIONS(1),
    [anon_sym_first_DASHin] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_has_DASHflag] = ACTIONS(1),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(1),
    [anon_sym_loc] = ACTIONS(1),
    [anon_sym_prop] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_flags] = ACTIONS(1),
    [anon_sym_visible_QMARK] = ACTIONS(1),
    [anon_sym_held_QMARK] = ACTIONS(1),
    [anon_sym_here_QMARK] = ACTIONS(1),
    [anon_sym_in_QMARK] = ACTIONS(1),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(1),
    [anon_sym_inside_QMARK] = ACTIONS(1),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(1),
    [anon_sym_at_QMARK] = ACTIONS(1),
    [anon_sym_room_QMARK] = ACTIONS(1),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(1),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(1),
    [anon_sym_inventory] = ACTIONS(1),
    [anon_sym_contents] = ACTIONS(1),
    [anon_sym_exit_QMARK] = ACTIONS(1),
    [anon_sym_exit_DASHto] = ACTIONS(1),
    [anon_sym_exit_DASHvia] = ACTIONS(1),
    [anon_sym_queued_QMARK] = ACTIONS(1),
    [anon_sym_eq_QMARK] = ACTIONS(1),
    [anon_sym_nil_QMARK] = ACTIONS(1),
    [anon_sym_empty_QMARK] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_nth] = ACTIONS(1),
    [anon_sym_list_DASHset] = ACTIONS(1),
    [anon_sym_first] = ACTIONS(1),
    [anon_sym_rest] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_cons] = ACTIONS(1),
    [anon_sym_concat] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_remove] = ACTIONS(1),
    [anon_sym_keep] = ACTIONS(1),
    [anon_sym_reduce] = ACTIONS(1),
    [anon_sym_outcome_QMARK] = ACTIONS(1),
    [anon_sym_reason_QMARK] = ACTIONS(1),
    [anon_sym_context_QMARK] = ACTIONS(1),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(1),
    [anon_sym_loc_QMARK] = ACTIONS(1),
    [anon_sym_prop_QMARK] = ACTIONS(1),
    [anon_sym_global_QMARK] = ACTIONS(1),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(1),
    [anon_sym_move_BANG] = ACTIONS(1),
    [anon_sym_take_BANG] = ACTIONS(1),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(1),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(1),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(1),
    [anon_sym_set_BANG] = ACTIONS(1),
    [anon_sym_inc_BANG] = ACTIONS(1),
    [anon_sym_queue_BANG] = ACTIONS(1),
    [anon_sym_dequeue_BANG] = ACTIONS(1),
    [anon_sym_get_DASHprop] = ACTIONS(1),
    [anon_sym_put_DASHprop] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_test_DASHsequence] = ACTIONS(1),
    [anon_sym_test_DASHgroup] = ACTIONS(1),
    [anon_sym_step] = ACTIONS(1),
    [anon_sym_north] = ACTIONS(1),
    [anon_sym_south] = ACTIONS(1),
    [anon_sym_east] = ACTIONS(1),
    [anon_sym_west] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_northeast] = ACTIONS(1),
    [anon_sym_northwest] = ACTIONS(1),
    [anon_sym_southeast] = ACTIONS(1),
    [anon_sym_southwest] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_land] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [anon_sym_enter] = ACTIONS(1),
    [anon_sym_leave] = ACTIONS(1),
    [anon_sym_through] = ACTIONS(1),
    [anon_sym_take] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_examine] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_unlock] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_turn_DASHon] = ACTIONS(1),
    [anon_sym_turn_DASHoff] = ACTIONS(1),
    [anon_sym_plug] = ACTIONS(1),
    [anon_sym_unplug] = ACTIONS(1),
    [anon_sym_attack] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pull] = ACTIONS(1),
    [anon_sym_touch] = ACTIONS(1),
    [anon_sym_rub] = ACTIONS(1),
    [anon_sym_click] = ACTIONS(1),
    [anon_sym_point] = ACTIONS(1),
    [anon_sym_eat] = ACTIONS(1),
    [anon_sym_drink] = ACTIONS(1),
    [anon_sym_wear] = ACTIONS(1),
    [anon_sym_climb] = ACTIONS(1),
    [anon_sym_sit] = ACTIONS(1),
    [anon_sym_stand] = ACTIONS(1),
    [anon_sym_smell] = ACTIONS(1),
    [anon_sym_listen] = ACTIONS(1),
    [anon_sym_ask_DASHabout] = ACTIONS(1),
    [anon_sym_tell_DASHabout] = ACTIONS(1),
    [anon_sym_give] = ACTIONS(1),
    [anon_sym_trade] = ACTIONS(1),
    [anon_sym_ask_DASHfor] = ACTIONS(1),
    [anon_sym_help] = ACTIONS(1),
    [anon_sym_put_DASHon] = ACTIONS(1),
    [anon_sym_put_DASHin] = ACTIONS(1),
    [anon_sym_on_DASHenter] = ACTIONS(1),
    [anon_sym_before_DASHaction] = ACTIONS(1),
    [anon_sym_process_DASHevents] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym__form] = STATE(5),
    [sym_list] = STATE(5),
    [sym_quoted] = STATE(5),
    [sym_symbol] = STATE(5),
    [sym_defform] = STATE(12),
    [sym_special_form] = STATE(12),
    [sym_builtin] = STATE(12),
    [sym_operator] = STATE(12),
    [sym_predicate] = STATE(12),
    [sym_effect] = STATE(12),
    [sym_test_form] = STATE(12),
    [sym_direction] = STATE(12),
    [sym_behavior_name] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_string] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_entity_ref] = ACTIONS(11),
    [sym_binding_ref] = ACTIONS(11),
    [sym_keyword] = ACTIONS(11),
    [anon_sym_world] = ACTIONS(13),
    [anon_sym_room] = ACTIONS(13),
    [anon_sym_object] = ACTIONS(13),
    [anon_sym_event] = ACTIONS(13),
    [anon_sym_victory] = ACTIONS(13),
    [anon_sym_defeat] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(13),
    [anon_sym_globals] = ACTIONS(13),
    [anon_sym_defsyntax] = ACTIONS(13),
    [anon_sym_defglobal] = ACTIONS(13),
    [anon_sym_defroutine] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_lambda] = ACTIONS(15),
    [anon_sym_defn] = ACTIONS(15),
    [anon_sym_def] = ACTIONS(15),
    [anon_sym_cond] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_match] = ACTIONS(15),
    [anon_sym_condp] = ACTIONS(15),
    [anon_sym_cond_DASH_GT] = ACTIONS(15),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_any] = ACTIONS(15),
    [anon_sym_all] = ACTIONS(15),
    [anon_sym_seq] = ACTIONS(15),
    [anon_sym_when] = ACTIONS(15),
    [anon_sym_quote] = ACTIONS(15),
    [anon_sym_list] = ACTIONS(15),
    [anon_sym_range] = ACTIONS(15),
    [anon_sym_some] = ACTIONS(15),
    [anon_sym_every_QMARK] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_doseq] = ACTIONS(15),
    [anon_sym_success] = ACTIONS(19),
    [anon_sym_blocked] = ACTIONS(19),
    [anon_sym_redirect] = ACTIONS(19),
    [anon_sym_outcome] = ACTIONS(19),
    [anon_sym_go] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_tell] = ACTIONS(19),
    [anon_sym_random] = ACTIONS(19),
    [anon_sym_first_DASHchild] = ACTIONS(19),
    [anon_sym_next_DASHsibling] = ACTIONS(19),
    [anon_sym_first_DASHin] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_has_DASHflag] = ACTIONS(25),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(25),
    [anon_sym_loc] = ACTIONS(25),
    [anon_sym_prop] = ACTIONS(25),
    [anon_sym_desc] = ACTIONS(25),
    [anon_sym_flags] = ACTIONS(25),
    [anon_sym_visible_QMARK] = ACTIONS(25),
    [anon_sym_held_QMARK] = ACTIONS(25),
    [anon_sym_here_QMARK] = ACTIONS(25),
    [anon_sym_in_QMARK] = ACTIONS(25),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(25),
    [anon_sym_inside_QMARK] = ACTIONS(25),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(25),
    [anon_sym_at_QMARK] = ACTIONS(25),
    [anon_sym_room_QMARK] = ACTIONS(25),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(25),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(25),
    [anon_sym_inventory] = ACTIONS(25),
    [anon_sym_contents] = ACTIONS(25),
    [anon_sym_exit_QMARK] = ACTIONS(25),
    [anon_sym_exit_DASHto] = ACTIONS(25),
    [anon_sym_exit_DASHvia] = ACTIONS(25),
    [anon_sym_queued_QMARK] = ACTIONS(25),
    [anon_sym_eq_QMARK] = ACTIONS(25),
    [anon_sym_nil_QMARK] = ACTIONS(25),
    [anon_sym_empty_QMARK] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(25),
    [anon_sym_nth] = ACTIONS(25),
    [anon_sym_list_DASHset] = ACTIONS(25),
    [anon_sym_first] = ACTIONS(25),
    [anon_sym_rest] = ACTIONS(25),
    [anon_sym_count] = ACTIONS(25),
    [anon_sym_cons] = ACTIONS(25),
    [anon_sym_concat] = ACTIONS(25),
    [anon_sym_map] = ACTIONS(25),
    [anon_sym_filter] = ACTIONS(25),
    [anon_sym_remove] = ACTIONS(25),
    [anon_sym_keep] = ACTIONS(25),
    [anon_sym_reduce] = ACTIONS(25),
    [anon_sym_outcome_QMARK] = ACTIONS(25),
    [anon_sym_reason_QMARK] = ACTIONS(25),
    [anon_sym_context_QMARK] = ACTIONS(25),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(25),
    [anon_sym_loc_QMARK] = ACTIONS(25),
    [anon_sym_prop_QMARK] = ACTIONS(25),
    [anon_sym_global_QMARK] = ACTIONS(25),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(25),
    [anon_sym_move_BANG] = ACTIONS(27),
    [anon_sym_take_BANG] = ACTIONS(27),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(27),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(27),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(27),
    [anon_sym_set_BANG] = ACTIONS(27),
    [anon_sym_inc_BANG] = ACTIONS(27),
    [anon_sym_queue_BANG] = ACTIONS(27),
    [anon_sym_dequeue_BANG] = ACTIONS(27),
    [anon_sym_get_DASHprop] = ACTIONS(27),
    [anon_sym_put_DASHprop] = ACTIONS(27),
    [anon_sym_test] = ACTIONS(29),
    [anon_sym_test_DASHsequence] = ACTIONS(29),
    [anon_sym_test_DASHgroup] = ACTIONS(29),
    [anon_sym_step] = ACTIONS(29),
    [anon_sym_north] = ACTIONS(31),
    [anon_sym_south] = ACTIONS(31),
    [anon_sym_east] = ACTIONS(31),
    [anon_sym_west] = ACTIONS(31),
    [anon_sym_up] = ACTIONS(31),
    [anon_sym_down] = ACTIONS(31),
    [anon_sym_northeast] = ACTIONS(31),
    [anon_sym_northwest] = ACTIONS(31),
    [anon_sym_southeast] = ACTIONS(31),
    [anon_sym_southwest] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(31),
    [anon_sym_out] = ACTIONS(31),
    [anon_sym_land] = ACTIONS(31),
    [sym_flag] = ACTIONS(33),
    [anon_sym_enter] = ACTIONS(35),
    [anon_sym_leave] = ACTIONS(35),
    [anon_sym_through] = ACTIONS(35),
    [anon_sym_take] = ACTIONS(35),
    [anon_sym_drop] = ACTIONS(35),
    [anon_sym_examine] = ACTIONS(35),
    [anon_sym_open] = ACTIONS(35),
    [anon_sym_close] = ACTIONS(35),
    [anon_sym_lock] = ACTIONS(35),
    [anon_sym_unlock] = ACTIONS(35),
    [anon_sym_read] = ACTIONS(35),
    [anon_sym_turn_DASHon] = ACTIONS(35),
    [anon_sym_turn_DASHoff] = ACTIONS(35),
    [anon_sym_plug] = ACTIONS(35),
    [anon_sym_unplug] = ACTIONS(35),
    [anon_sym_attack] = ACTIONS(35),
    [anon_sym_push] = ACTIONS(35),
    [anon_sym_pull] = ACTIONS(35),
    [anon_sym_touch] = ACTIONS(35),
    [anon_sym_rub] = ACTIONS(35),
    [anon_sym_click] = ACTIONS(35),
    [anon_sym_point] = ACTIONS(35),
    [anon_sym_eat] = ACTIONS(35),
    [anon_sym_drink] = ACTIONS(35),
    [anon_sym_wear] = ACTIONS(35),
    [anon_sym_climb] = ACTIONS(35),
    [anon_sym_sit] = ACTIONS(35),
    [anon_sym_stand] = ACTIONS(35),
    [anon_sym_smell] = ACTIONS(35),
    [anon_sym_listen] = ACTIONS(35),
    [anon_sym_ask_DASHabout] = ACTIONS(35),
    [anon_sym_tell_DASHabout] = ACTIONS(35),
    [anon_sym_give] = ACTIONS(35),
    [anon_sym_trade] = ACTIONS(35),
    [anon_sym_ask_DASHfor] = ACTIONS(35),
    [anon_sym_help] = ACTIONS(35),
    [anon_sym_put_DASHon] = ACTIONS(35),
    [anon_sym_put_DASHin] = ACTIONS(35),
    [anon_sym_on_DASHenter] = ACTIONS(35),
    [anon_sym_before_DASHaction] = ACTIONS(35),
    [anon_sym_process_DASHevents] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_nil] = ACTIONS(37),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_number] = ACTIONS(11),
  },
  [2] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_defform] = STATE(12),
    [sym_special_form] = STATE(12),
    [sym_builtin] = STATE(12),
    [sym_operator] = STATE(12),
    [sym_predicate] = STATE(12),
    [sym_effect] = STATE(12),
    [sym_test_form] = STATE(12),
    [sym_direction] = STATE(12),
    [sym_behavior_name] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [sym_entity_ref] = ACTIONS(49),
    [sym_binding_ref] = ACTIONS(49),
    [sym_keyword] = ACTIONS(49),
    [anon_sym_world] = ACTIONS(52),
    [anon_sym_room] = ACTIONS(52),
    [anon_sym_object] = ACTIONS(52),
    [anon_sym_event] = ACTIONS(52),
    [anon_sym_victory] = ACTIONS(52),
    [anon_sym_defeat] = ACTIONS(52),
    [anon_sym_default] = ACTIONS(52),
    [anon_sym_globals] = ACTIONS(52),
    [anon_sym_defsyntax] = ACTIONS(52),
    [anon_sym_defglobal] = ACTIONS(52),
    [anon_sym_defroutine] = ACTIONS(52),
    [anon_sym_fn] = ACTIONS(55),
    [anon_sym_lambda] = ACTIONS(55),
    [anon_sym_defn] = ACTIONS(55),
    [anon_sym_def] = ACTIONS(55),
    [anon_sym_cond] = ACTIONS(55),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(55),
    [anon_sym_match] = ACTIONS(55),
    [anon_sym_condp] = ACTIONS(55),
    [anon_sym_cond_DASH_GT] = ACTIONS(55),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(58),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_or] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(55),
    [anon_sym_any] = ACTIONS(55),
    [anon_sym_all] = ACTIONS(55),
    [anon_sym_seq] = ACTIONS(55),
    [anon_sym_when] = ACTIONS(55),
    [anon_sym_quote] = ACTIONS(55),
    [anon_sym_list] = ACTIONS(55),
    [anon_sym_range] = ACTIONS(55),
    [anon_sym_some] = ACTIONS(55),
    [anon_sym_every_QMARK] = ACTIONS(55),
    [anon_sym_for] = ACTIONS(55),
    [anon_sym_doseq] = ACTIONS(55),
    [anon_sym_success] = ACTIONS(61),
    [anon_sym_blocked] = ACTIONS(61),
    [anon_sym_redirect] = ACTIONS(61),
    [anon_sym_outcome] = ACTIONS(61),
    [anon_sym_go] = ACTIONS(61),
    [anon_sym_do] = ACTIONS(61),
    [anon_sym_tell] = ACTIONS(61),
    [anon_sym_random] = ACTIONS(61),
    [anon_sym_first_DASHchild] = ACTIONS(61),
    [anon_sym_next_DASHsibling] = ACTIONS(61),
    [anon_sym_first_DASHin] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym_SLASH] = ACTIONS(64),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_mod] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(64),
    [anon_sym_LT_EQ] = ACTIONS(64),
    [anon_sym_has_DASHflag] = ACTIONS(70),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(70),
    [anon_sym_loc] = ACTIONS(70),
    [anon_sym_prop] = ACTIONS(70),
    [anon_sym_desc] = ACTIONS(70),
    [anon_sym_flags] = ACTIONS(70),
    [anon_sym_visible_QMARK] = ACTIONS(70),
    [anon_sym_held_QMARK] = ACTIONS(70),
    [anon_sym_here_QMARK] = ACTIONS(70),
    [anon_sym_in_QMARK] = ACTIONS(70),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(70),
    [anon_sym_inside_QMARK] = ACTIONS(70),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(70),
    [anon_sym_at_QMARK] = ACTIONS(70),
    [anon_sym_room_QMARK] = ACTIONS(70),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(70),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(70),
    [anon_sym_inventory] = ACTIONS(70),
    [anon_sym_contents] = ACTIONS(70),
    [anon_sym_exit_QMARK] = ACTIONS(70),
    [anon_sym_exit_DASHto] = ACTIONS(70),
    [anon_sym_exit_DASHvia] = ACTIONS(70),
    [anon_sym_queued_QMARK] = ACTIONS(70),
    [anon_sym_eq_QMARK] = ACTIONS(70),
    [anon_sym_nil_QMARK] = ACTIONS(70),
    [anon_sym_empty_QMARK] = ACTIONS(70),
    [anon_sym_str] = ACTIONS(70),
    [anon_sym_join] = ACTIONS(70),
    [anon_sym_nth] = ACTIONS(70),
    [anon_sym_list_DASHset] = ACTIONS(70),
    [anon_sym_first] = ACTIONS(70),
    [anon_sym_rest] = ACTIONS(70),
    [anon_sym_count] = ACTIONS(70),
    [anon_sym_cons] = ACTIONS(70),
    [anon_sym_concat] = ACTIONS(70),
    [anon_sym_map] = ACTIONS(70),
    [anon_sym_filter] = ACTIONS(70),
    [anon_sym_remove] = ACTIONS(70),
    [anon_sym_keep] = ACTIONS(70),
    [anon_sym_reduce] = ACTIONS(70),
    [anon_sym_outcome_QMARK] = ACTIONS(70),
    [anon_sym_reason_QMARK] = ACTIONS(70),
    [anon_sym_context_QMARK] = ACTIONS(70),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(70),
    [anon_sym_loc_QMARK] = ACTIONS(70),
    [anon_sym_prop_QMARK] = ACTIONS(70),
    [anon_sym_global_QMARK] = ACTIONS(70),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(70),
    [anon_sym_move_BANG] = ACTIONS(73),
    [anon_sym_take_BANG] = ACTIONS(73),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(73),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(73),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(73),
    [anon_sym_set_BANG] = ACTIONS(73),
    [anon_sym_inc_BANG] = ACTIONS(73),
    [anon_sym_queue_BANG] = ACTIONS(73),
    [anon_sym_dequeue_BANG] = ACTIONS(73),
    [anon_sym_get_DASHprop] = ACTIONS(73),
    [anon_sym_put_DASHprop] = ACTIONS(73),
    [anon_sym_test] = ACTIONS(76),
    [anon_sym_test_DASHsequence] = ACTIONS(76),
    [anon_sym_test_DASHgroup] = ACTIONS(76),
    [anon_sym_step] = ACTIONS(76),
    [anon_sym_north] = ACTIONS(79),
    [anon_sym_south] = ACTIONS(79),
    [anon_sym_east] = ACTIONS(79),
    [anon_sym_west] = ACTIONS(79),
    [anon_sym_up] = ACTIONS(79),
    [anon_sym_down] = ACTIONS(79),
    [anon_sym_northeast] = ACTIONS(79),
    [anon_sym_northwest] = ACTIONS(79),
    [anon_sym_southeast] = ACTIONS(79),
    [anon_sym_southwest] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_out] = ACTIONS(79),
    [anon_sym_land] = ACTIONS(79),
    [sym_flag] = ACTIONS(82),
    [anon_sym_enter] = ACTIONS(85),
    [anon_sym_leave] = ACTIONS(85),
    [anon_sym_through] = ACTIONS(85),
    [anon_sym_take] = ACTIONS(85),
    [anon_sym_drop] = ACTIONS(85),
    [anon_sym_examine] = ACTIONS(85),
    [anon_sym_open] = ACTIONS(85),
    [anon_sym_close] = ACTIONS(85),
    [anon_sym_lock] = ACTIONS(85),
    [anon_sym_unlock] = ACTIONS(85),
    [anon_sym_read] = ACTIONS(85),
    [anon_sym_turn_DASHon] = ACTIONS(85),
    [anon_sym_turn_DASHoff] = ACTIONS(85),
    [anon_sym_plug] = ACTIONS(85),
    [anon_sym_unplug] = ACTIONS(85),
    [anon_sym_attack] = ACTIONS(85),
    [anon_sym_push] = ACTIONS(85),
    [anon_sym_pull] = ACTIONS(85),
    [anon_sym_touch] = ACTIONS(85),
    [anon_sym_rub] = ACTIONS(85),
    [anon_sym_click] = ACTIONS(85),
    [anon_sym_point] = ACTIONS(85),
    [anon_sym_eat] = ACTIONS(85),
    [anon_sym_drink] = ACTIONS(85),
    [anon_sym_wear] = ACTIONS(85),
    [anon_sym_climb] = ACTIONS(85),
    [anon_sym_sit] = ACTIONS(85),
    [anon_sym_stand] = ACTIONS(85),
    [anon_sym_smell] = ACTIONS(85),
    [anon_sym_listen] = ACTIONS(85),
    [anon_sym_ask_DASHabout] = ACTIONS(85),
    [anon_sym_tell_DASHabout] = ACTIONS(85),
    [anon_sym_give] = ACTIONS(85),
    [anon_sym_trade] = ACTIONS(85),
    [anon_sym_ask_DASHfor] = ACTIONS(85),
    [anon_sym_help] = ACTIONS(85),
    [anon_sym_put_DASHon] = ACTIONS(85),
    [anon_sym_put_DASHin] = ACTIONS(85),
    [anon_sym_on_DASHenter] = ACTIONS(85),
    [anon_sym_before_DASHaction] = ACTIONS(85),
    [anon_sym_process_DASHevents] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(88),
    [anon_sym_false] = ACTIONS(88),
    [anon_sym_nil] = ACTIONS(88),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_number] = ACTIONS(49),
  },
  [3] = {
    [sym__form] = STATE(4),
    [sym_list] = STATE(4),
    [sym_quoted] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_defform] = STATE(12),
    [sym_special_form] = STATE(12),
    [sym_builtin] = STATE(12),
    [sym_operator] = STATE(12),
    [sym_predicate] = STATE(12),
    [sym_effect] = STATE(12),
    [sym_test_form] = STATE(12),
    [sym_direction] = STATE(12),
    [sym_behavior_name] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_entity_ref] = ACTIONS(96),
    [sym_binding_ref] = ACTIONS(96),
    [sym_keyword] = ACTIONS(96),
    [anon_sym_world] = ACTIONS(13),
    [anon_sym_room] = ACTIONS(13),
    [anon_sym_object] = ACTIONS(13),
    [anon_sym_event] = ACTIONS(13),
    [anon_sym_victory] = ACTIONS(13),
    [anon_sym_defeat] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(13),
    [anon_sym_globals] = ACTIONS(13),
    [anon_sym_defsyntax] = ACTIONS(13),
    [anon_sym_defglobal] = ACTIONS(13),
    [anon_sym_defroutine] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_lambda] = ACTIONS(15),
    [anon_sym_defn] = ACTIONS(15),
    [anon_sym_def] = ACTIONS(15),
    [anon_sym_cond] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_match] = ACTIONS(15),
    [anon_sym_condp] = ACTIONS(15),
    [anon_sym_cond_DASH_GT] = ACTIONS(15),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_any] = ACTIONS(15),
    [anon_sym_all] = ACTIONS(15),
    [anon_sym_seq] = ACTIONS(15),
    [anon_sym_when] = ACTIONS(15),
    [anon_sym_quote] = ACTIONS(15),
    [anon_sym_list] = ACTIONS(15),
    [anon_sym_range] = ACTIONS(15),
    [anon_sym_some] = ACTIONS(15),
    [anon_sym_every_QMARK] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_doseq] = ACTIONS(15),
    [anon_sym_success] = ACTIONS(19),
    [anon_sym_blocked] = ACTIONS(19),
    [anon_sym_redirect] = ACTIONS(19),
    [anon_sym_outcome] = ACTIONS(19),
    [anon_sym_go] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_tell] = ACTIONS(19),
    [anon_sym_random] = ACTIONS(19),
    [anon_sym_first_DASHchild] = ACTIONS(19),
    [anon_sym_next_DASHsibling] = ACTIONS(19),
    [anon_sym_first_DASHin] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_has_DASHflag] = ACTIONS(25),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(25),
    [anon_sym_loc] = ACTIONS(25),
    [anon_sym_prop] = ACTIONS(25),
    [anon_sym_desc] = ACTIONS(25),
    [anon_sym_flags] = ACTIONS(25),
    [anon_sym_visible_QMARK] = ACTIONS(25),
    [anon_sym_held_QMARK] = ACTIONS(25),
    [anon_sym_here_QMARK] = ACTIONS(25),
    [anon_sym_in_QMARK] = ACTIONS(25),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(25),
    [anon_sym_inside_QMARK] = ACTIONS(25),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(25),
    [anon_sym_at_QMARK] = ACTIONS(25),
    [anon_sym_room_QMARK] = ACTIONS(25),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(25),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(25),
    [anon_sym_inventory] = ACTIONS(25),
    [anon_sym_contents] = ACTIONS(25),
    [anon_sym_exit_QMARK] = ACTIONS(25),
    [anon_sym_exit_DASHto] = ACTIONS(25),
    [anon_sym_exit_DASHvia] = ACTIONS(25),
    [anon_sym_queued_QMARK] = ACTIONS(25),
    [anon_sym_eq_QMARK] = ACTIONS(25),
    [anon_sym_nil_QMARK] = ACTIONS(25),
    [anon_sym_empty_QMARK] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(25),
    [anon_sym_nth] = ACTIONS(25),
    [anon_sym_list_DASHset] = ACTIONS(25),
    [anon_sym_first] = ACTIONS(25),
    [anon_sym_rest] = ACTIONS(25),
    [anon_sym_count] = ACTIONS(25),
    [anon_sym_cons] = ACTIONS(25),
    [anon_sym_concat] = ACTIONS(25),
    [anon_sym_map] = ACTIONS(25),
    [anon_sym_filter] = ACTIONS(25),
    [anon_sym_remove] = ACTIONS(25),
    [anon_sym_keep] = ACTIONS(25),
    [anon_sym_reduce] = ACTIONS(25),
    [anon_sym_outcome_QMARK] = ACTIONS(25),
    [anon_sym_reason_QMARK] = ACTIONS(25),
    [anon_sym_context_QMARK] = ACTIONS(25),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(25),
    [anon_sym_loc_QMARK] = ACTIONS(25),
    [anon_sym_prop_QMARK] = ACTIONS(25),
    [anon_sym_global_QMARK] = ACTIONS(25),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(25),
    [anon_sym_move_BANG] = ACTIONS(27),
    [anon_sym_take_BANG] = ACTIONS(27),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(27),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(27),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(27),
    [anon_sym_set_BANG] = ACTIONS(27),
    [anon_sym_inc_BANG] = ACTIONS(27),
    [anon_sym_queue_BANG] = ACTIONS(27),
    [anon_sym_dequeue_BANG] = ACTIONS(27),
    [anon_sym_get_DASHprop] = ACTIONS(27),
    [anon_sym_put_DASHprop] = ACTIONS(27),
    [anon_sym_test] = ACTIONS(29),
    [anon_sym_test_DASHsequence] = ACTIONS(29),
    [anon_sym_test_DASHgroup] = ACTIONS(29),
    [anon_sym_step] = ACTIONS(29),
    [anon_sym_north] = ACTIONS(31),
    [anon_sym_south] = ACTIONS(31),
    [anon_sym_east] = ACTIONS(31),
    [anon_sym_west] = ACTIONS(31),
    [anon_sym_up] = ACTIONS(31),
    [anon_sym_down] = ACTIONS(31),
    [anon_sym_northeast] = ACTIONS(31),
    [anon_sym_northwest] = ACTIONS(31),
    [anon_sym_southeast] = ACTIONS(31),
    [anon_sym_southwest] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(31),
    [anon_sym_out] = ACTIONS(31),
    [anon_sym_land] = ACTIONS(31),
    [sym_flag] = ACTIONS(33),
    [anon_sym_enter] = ACTIONS(35),
    [anon_sym_leave] = ACTIONS(35),
    [anon_sym_through] = ACTIONS(35),
    [anon_sym_take] = ACTIONS(35),
    [anon_sym_drop] = ACTIONS(35),
    [anon_sym_examine] = ACTIONS(35),
    [anon_sym_open] = ACTIONS(35),
    [anon_sym_close] = ACTIONS(35),
    [anon_sym_lock] = ACTIONS(35),
    [anon_sym_unlock] = ACTIONS(35),
    [anon_sym_read] = ACTIONS(35),
    [anon_sym_turn_DASHon] = ACTIONS(35),
    [anon_sym_turn_DASHoff] = ACTIONS(35),
    [anon_sym_plug] = ACTIONS(35),
    [anon_sym_unplug] = ACTIONS(35),
    [anon_sym_attack] = ACTIONS(35),
    [anon_sym_push] = ACTIONS(35),
    [anon_sym_pull] = ACTIONS(35),
    [anon_sym_touch] = ACTIONS(35),
    [anon_sym_rub] = ACTIONS(35),
    [anon_sym_click] = ACTIONS(35),
    [anon_sym_point] = ACTIONS(35),
    [anon_sym_eat] = ACTIONS(35),
    [anon_sym_drink] = ACTIONS(35),
    [anon_sym_wear] = ACTIONS(35),
    [anon_sym_climb] = ACTIONS(35),
    [anon_sym_sit] = ACTIONS(35),
    [anon_sym_stand] = ACTIONS(35),
    [anon_sym_smell] = ACTIONS(35),
    [anon_sym_listen] = ACTIONS(35),
    [anon_sym_ask_DASHabout] = ACTIONS(35),
    [anon_sym_tell_DASHabout] = ACTIONS(35),
    [anon_sym_give] = ACTIONS(35),
    [anon_sym_trade] = ACTIONS(35),
    [anon_sym_ask_DASHfor] = ACTIONS(35),
    [anon_sym_help] = ACTIONS(35),
    [anon_sym_put_DASHon] = ACTIONS(35),
    [anon_sym_put_DASHin] = ACTIONS(35),
    [anon_sym_on_DASHenter] = ACTIONS(35),
    [anon_sym_before_DASHaction] = ACTIONS(35),
    [anon_sym_process_DASHevents] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_nil] = ACTIONS(37),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_number] = ACTIONS(96),
  },
  [4] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_defform] = STATE(12),
    [sym_special_form] = STATE(12),
    [sym_builtin] = STATE(12),
    [sym_operator] = STATE(12),
    [sym_predicate] = STATE(12),
    [sym_effect] = STATE(12),
    [sym_test_form] = STATE(12),
    [sym_direction] = STATE(12),
    [sym_behavior_name] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_entity_ref] = ACTIONS(100),
    [sym_binding_ref] = ACTIONS(100),
    [sym_keyword] = ACTIONS(100),
    [anon_sym_world] = ACTIONS(13),
    [anon_sym_room] = ACTIONS(13),
    [anon_sym_object] = ACTIONS(13),
    [anon_sym_event] = ACTIONS(13),
    [anon_sym_victory] = ACTIONS(13),
    [anon_sym_defeat] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(13),
    [anon_sym_globals] = ACTIONS(13),
    [anon_sym_defsyntax] = ACTIONS(13),
    [anon_sym_defglobal] = ACTIONS(13),
    [anon_sym_defroutine] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_lambda] = ACTIONS(15),
    [anon_sym_defn] = ACTIONS(15),
    [anon_sym_def] = ACTIONS(15),
    [anon_sym_cond] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_match] = ACTIONS(15),
    [anon_sym_condp] = ACTIONS(15),
    [anon_sym_cond_DASH_GT] = ACTIONS(15),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_any] = ACTIONS(15),
    [anon_sym_all] = ACTIONS(15),
    [anon_sym_seq] = ACTIONS(15),
    [anon_sym_when] = ACTIONS(15),
    [anon_sym_quote] = ACTIONS(15),
    [anon_sym_list] = ACTIONS(15),
    [anon_sym_range] = ACTIONS(15),
    [anon_sym_some] = ACTIONS(15),
    [anon_sym_every_QMARK] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_doseq] = ACTIONS(15),
    [anon_sym_success] = ACTIONS(19),
    [anon_sym_blocked] = ACTIONS(19),
    [anon_sym_redirect] = ACTIONS(19),
    [anon_sym_outcome] = ACTIONS(19),
    [anon_sym_go] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_tell] = ACTIONS(19),
    [anon_sym_random] = ACTIONS(19),
    [anon_sym_first_DASHchild] = ACTIONS(19),
    [anon_sym_next_DASHsibling] = ACTIONS(19),
    [anon_sym_first_DASHin] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_has_DASHflag] = ACTIONS(25),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(25),
    [anon_sym_loc] = ACTIONS(25),
    [anon_sym_prop] = ACTIONS(25),
    [anon_sym_desc] = ACTIONS(25),
    [anon_sym_flags] = ACTIONS(25),
    [anon_sym_visible_QMARK] = ACTIONS(25),
    [anon_sym_held_QMARK] = ACTIONS(25),
    [anon_sym_here_QMARK] = ACTIONS(25),
    [anon_sym_in_QMARK] = ACTIONS(25),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(25),
    [anon_sym_inside_QMARK] = ACTIONS(25),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(25),
    [anon_sym_at_QMARK] = ACTIONS(25),
    [anon_sym_room_QMARK] = ACTIONS(25),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(25),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(25),
    [anon_sym_inventory] = ACTIONS(25),
    [anon_sym_contents] = ACTIONS(25),
    [anon_sym_exit_QMARK] = ACTIONS(25),
    [anon_sym_exit_DASHto] = ACTIONS(25),
    [anon_sym_exit_DASHvia] = ACTIONS(25),
    [anon_sym_queued_QMARK] = ACTIONS(25),
    [anon_sym_eq_QMARK] = ACTIONS(25),
    [anon_sym_nil_QMARK] = ACTIONS(25),
    [anon_sym_empty_QMARK] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(25),
    [anon_sym_nth] = ACTIONS(25),
    [anon_sym_list_DASHset] = ACTIONS(25),
    [anon_sym_first] = ACTIONS(25),
    [anon_sym_rest] = ACTIONS(25),
    [anon_sym_count] = ACTIONS(25),
    [anon_sym_cons] = ACTIONS(25),
    [anon_sym_concat] = ACTIONS(25),
    [anon_sym_map] = ACTIONS(25),
    [anon_sym_filter] = ACTIONS(25),
    [anon_sym_remove] = ACTIONS(25),
    [anon_sym_keep] = ACTIONS(25),
    [anon_sym_reduce] = ACTIONS(25),
    [anon_sym_outcome_QMARK] = ACTIONS(25),
    [anon_sym_reason_QMARK] = ACTIONS(25),
    [anon_sym_context_QMARK] = ACTIONS(25),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(25),
    [anon_sym_loc_QMARK] = ACTIONS(25),
    [anon_sym_prop_QMARK] = ACTIONS(25),
    [anon_sym_global_QMARK] = ACTIONS(25),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(25),
    [anon_sym_move_BANG] = ACTIONS(27),
    [anon_sym_take_BANG] = ACTIONS(27),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(27),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(27),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(27),
    [anon_sym_set_BANG] = ACTIONS(27),
    [anon_sym_inc_BANG] = ACTIONS(27),
    [anon_sym_queue_BANG] = ACTIONS(27),
    [anon_sym_dequeue_BANG] = ACTIONS(27),
    [anon_sym_get_DASHprop] = ACTIONS(27),
    [anon_sym_put_DASHprop] = ACTIONS(27),
    [anon_sym_test] = ACTIONS(29),
    [anon_sym_test_DASHsequence] = ACTIONS(29),
    [anon_sym_test_DASHgroup] = ACTIONS(29),
    [anon_sym_step] = ACTIONS(29),
    [anon_sym_north] = ACTIONS(31),
    [anon_sym_south] = ACTIONS(31),
    [anon_sym_east] = ACTIONS(31),
    [anon_sym_west] = ACTIONS(31),
    [anon_sym_up] = ACTIONS(31),
    [anon_sym_down] = ACTIONS(31),
    [anon_sym_northeast] = ACTIONS(31),
    [anon_sym_northwest] = ACTIONS(31),
    [anon_sym_southeast] = ACTIONS(31),
    [anon_sym_southwest] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(31),
    [anon_sym_out] = ACTIONS(31),
    [anon_sym_land] = ACTIONS(31),
    [sym_flag] = ACTIONS(33),
    [anon_sym_enter] = ACTIONS(35),
    [anon_sym_leave] = ACTIONS(35),
    [anon_sym_through] = ACTIONS(35),
    [anon_sym_take] = ACTIONS(35),
    [anon_sym_drop] = ACTIONS(35),
    [anon_sym_examine] = ACTIONS(35),
    [anon_sym_open] = ACTIONS(35),
    [anon_sym_close] = ACTIONS(35),
    [anon_sym_lock] = ACTIONS(35),
    [anon_sym_unlock] = ACTIONS(35),
    [anon_sym_read] = ACTIONS(35),
    [anon_sym_turn_DASHon] = ACTIONS(35),
    [anon_sym_turn_DASHoff] = ACTIONS(35),
    [anon_sym_plug] = ACTIONS(35),
    [anon_sym_unplug] = ACTIONS(35),
    [anon_sym_attack] = ACTIONS(35),
    [anon_sym_push] = ACTIONS(35),
    [anon_sym_pull] = ACTIONS(35),
    [anon_sym_touch] = ACTIONS(35),
    [anon_sym_rub] = ACTIONS(35),
    [anon_sym_click] = ACTIONS(35),
    [anon_sym_point] = ACTIONS(35),
    [anon_sym_eat] = ACTIONS(35),
    [anon_sym_drink] = ACTIONS(35),
    [anon_sym_wear] = ACTIONS(35),
    [anon_sym_climb] = ACTIONS(35),
    [anon_sym_sit] = ACTIONS(35),
    [anon_sym_stand] = ACTIONS(35),
    [anon_sym_smell] = ACTIONS(35),
    [anon_sym_listen] = ACTIONS(35),
    [anon_sym_ask_DASHabout] = ACTIONS(35),
    [anon_sym_tell_DASHabout] = ACTIONS(35),
    [anon_sym_give] = ACTIONS(35),
    [anon_sym_trade] = ACTIONS(35),
    [anon_sym_ask_DASHfor] = ACTIONS(35),
    [anon_sym_help] = ACTIONS(35),
    [anon_sym_put_DASHon] = ACTIONS(35),
    [anon_sym_put_DASHin] = ACTIONS(35),
    [anon_sym_on_DASHenter] = ACTIONS(35),
    [anon_sym_before_DASHaction] = ACTIONS(35),
    [anon_sym_process_DASHevents] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_nil] = ACTIONS(37),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_number] = ACTIONS(100),
  },
  [5] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_defform] = STATE(12),
    [sym_special_form] = STATE(12),
    [sym_builtin] = STATE(12),
    [sym_operator] = STATE(12),
    [sym_predicate] = STATE(12),
    [sym_effect] = STATE(12),
    [sym_test_form] = STATE(12),
    [sym_direction] = STATE(12),
    [sym_behavior_name] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_entity_ref] = ACTIONS(100),
    [sym_binding_ref] = ACTIONS(100),
    [sym_keyword] = ACTIONS(100),
    [anon_sym_world] = ACTIONS(13),
    [anon_sym_room] = ACTIONS(13),
    [anon_sym_object] = ACTIONS(13),
    [anon_sym_event] = ACTIONS(13),
    [anon_sym_victory] = ACTIONS(13),
    [anon_sym_defeat] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(13),
    [anon_sym_globals] = ACTIONS(13),
    [anon_sym_defsyntax] = ACTIONS(13),
    [anon_sym_defglobal] = ACTIONS(13),
    [anon_sym_defroutine] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_lambda] = ACTIONS(15),
    [anon_sym_defn] = ACTIONS(15),
    [anon_sym_def] = ACTIONS(15),
    [anon_sym_cond] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_match] = ACTIONS(15),
    [anon_sym_condp] = ACTIONS(15),
    [anon_sym_cond_DASH_GT] = ACTIONS(15),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_any] = ACTIONS(15),
    [anon_sym_all] = ACTIONS(15),
    [anon_sym_seq] = ACTIONS(15),
    [anon_sym_when] = ACTIONS(15),
    [anon_sym_quote] = ACTIONS(15),
    [anon_sym_list] = ACTIONS(15),
    [anon_sym_range] = ACTIONS(15),
    [anon_sym_some] = ACTIONS(15),
    [anon_sym_every_QMARK] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_doseq] = ACTIONS(15),
    [anon_sym_success] = ACTIONS(19),
    [anon_sym_blocked] = ACTIONS(19),
    [anon_sym_redirect] = ACTIONS(19),
    [anon_sym_outcome] = ACTIONS(19),
    [anon_sym_go] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_tell] = ACTIONS(19),
    [anon_sym_random] = ACTIONS(19),
    [anon_sym_first_DASHchild] = ACTIONS(19),
    [anon_sym_next_DASHsibling] = ACTIONS(19),
    [anon_sym_first_DASHin] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_has_DASHflag] = ACTIONS(25),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(25),
    [anon_sym_loc] = ACTIONS(25),
    [anon_sym_prop] = ACTIONS(25),
    [anon_sym_desc] = ACTIONS(25),
    [anon_sym_flags] = ACTIONS(25),
    [anon_sym_visible_QMARK] = ACTIONS(25),
    [anon_sym_held_QMARK] = ACTIONS(25),
    [anon_sym_here_QMARK] = ACTIONS(25),
    [anon_sym_in_QMARK] = ACTIONS(25),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(25),
    [anon_sym_inside_QMARK] = ACTIONS(25),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(25),
    [anon_sym_at_QMARK] = ACTIONS(25),
    [anon_sym_room_QMARK] = ACTIONS(25),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(25),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(25),
    [anon_sym_inventory] = ACTIONS(25),
    [anon_sym_contents] = ACTIONS(25),
    [anon_sym_exit_QMARK] = ACTIONS(25),
    [anon_sym_exit_DASHto] = ACTIONS(25),
    [anon_sym_exit_DASHvia] = ACTIONS(25),
    [anon_sym_queued_QMARK] = ACTIONS(25),
    [anon_sym_eq_QMARK] = ACTIONS(25),
    [anon_sym_nil_QMARK] = ACTIONS(25),
    [anon_sym_empty_QMARK] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(25),
    [anon_sym_nth] = ACTIONS(25),
    [anon_sym_list_DASHset] = ACTIONS(25),
    [anon_sym_first] = ACTIONS(25),
    [anon_sym_rest] = ACTIONS(25),
    [anon_sym_count] = ACTIONS(25),
    [anon_sym_cons] = ACTIONS(25),
    [anon_sym_concat] = ACTIONS(25),
    [anon_sym_map] = ACTIONS(25),
    [anon_sym_filter] = ACTIONS(25),
    [anon_sym_remove] = ACTIONS(25),
    [anon_sym_keep] = ACTIONS(25),
    [anon_sym_reduce] = ACTIONS(25),
    [anon_sym_outcome_QMARK] = ACTIONS(25),
    [anon_sym_reason_QMARK] = ACTIONS(25),
    [anon_sym_context_QMARK] = ACTIONS(25),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(25),
    [anon_sym_loc_QMARK] = ACTIONS(25),
    [anon_sym_prop_QMARK] = ACTIONS(25),
    [anon_sym_global_QMARK] = ACTIONS(25),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(25),
    [anon_sym_move_BANG] = ACTIONS(27),
    [anon_sym_take_BANG] = ACTIONS(27),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(27),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(27),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(27),
    [anon_sym_set_BANG] = ACTIONS(27),
    [anon_sym_inc_BANG] = ACTIONS(27),
    [anon_sym_queue_BANG] = ACTIONS(27),
    [anon_sym_dequeue_BANG] = ACTIONS(27),
    [anon_sym_get_DASHprop] = ACTIONS(27),
    [anon_sym_put_DASHprop] = ACTIONS(27),
    [anon_sym_test] = ACTIONS(29),
    [anon_sym_test_DASHsequence] = ACTIONS(29),
    [anon_sym_test_DASHgroup] = ACTIONS(29),
    [anon_sym_step] = ACTIONS(29),
    [anon_sym_north] = ACTIONS(31),
    [anon_sym_south] = ACTIONS(31),
    [anon_sym_east] = ACTIONS(31),
    [anon_sym_west] = ACTIONS(31),
    [anon_sym_up] = ACTIONS(31),
    [anon_sym_down] = ACTIONS(31),
    [anon_sym_northeast] = ACTIONS(31),
    [anon_sym_northwest] = ACTIONS(31),
    [anon_sym_southeast] = ACTIONS(31),
    [anon_sym_southwest] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(31),
    [anon_sym_out] = ACTIONS(31),
    [anon_sym_land] = ACTIONS(31),
    [sym_flag] = ACTIONS(33),
    [anon_sym_enter] = ACTIONS(35),
    [anon_sym_leave] = ACTIONS(35),
    [anon_sym_through] = ACTIONS(35),
    [anon_sym_take] = ACTIONS(35),
    [anon_sym_drop] = ACTIONS(35),
    [anon_sym_examine] = ACTIONS(35),
    [anon_sym_open] = ACTIONS(35),
    [anon_sym_close] = ACTIONS(35),
    [anon_sym_lock] = ACTIONS(35),
    [anon_sym_unlock] = ACTIONS(35),
    [anon_sym_read] = ACTIONS(35),
    [anon_sym_turn_DASHon] = ACTIONS(35),
    [anon_sym_turn_DASHoff] = ACTIONS(35),
    [anon_sym_plug] = ACTIONS(35),
    [anon_sym_unplug] = ACTIONS(35),
    [anon_sym_attack] = ACTIONS(35),
    [anon_sym_push] = ACTIONS(35),
    [anon_sym_pull] = ACTIONS(35),
    [anon_sym_touch] = ACTIONS(35),
    [anon_sym_rub] = ACTIONS(35),
    [anon_sym_click] = ACTIONS(35),
    [anon_sym_point] = ACTIONS(35),
    [anon_sym_eat] = ACTIONS(35),
    [anon_sym_drink] = ACTIONS(35),
    [anon_sym_wear] = ACTIONS(35),
    [anon_sym_climb] = ACTIONS(35),
    [anon_sym_sit] = ACTIONS(35),
    [anon_sym_stand] = ACTIONS(35),
    [anon_sym_smell] = ACTIONS(35),
    [anon_sym_listen] = ACTIONS(35),
    [anon_sym_ask_DASHabout] = ACTIONS(35),
    [anon_sym_tell_DASHabout] = ACTIONS(35),
    [anon_sym_give] = ACTIONS(35),
    [anon_sym_trade] = ACTIONS(35),
    [anon_sym_ask_DASHfor] = ACTIONS(35),
    [anon_sym_help] = ACTIONS(35),
    [anon_sym_put_DASHon] = ACTIONS(35),
    [anon_sym_put_DASHin] = ACTIONS(35),
    [anon_sym_on_DASHenter] = ACTIONS(35),
    [anon_sym_before_DASHaction] = ACTIONS(35),
    [anon_sym_process_DASHevents] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_nil] = ACTIONS(37),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_number] = ACTIONS(100),
  },
  [6] = {
    [sym__form] = STATE(20),
    [sym_list] = STATE(20),
    [sym_quoted] = STATE(20),
    [sym_symbol] = STATE(20),
    [sym_defform] = STATE(12),
    [sym_special_form] = STATE(12),
    [sym_builtin] = STATE(12),
    [sym_operator] = STATE(12),
    [sym_predicate] = STATE(12),
    [sym_effect] = STATE(12),
    [sym_test_form] = STATE(12),
    [sym_direction] = STATE(12),
    [sym_behavior_name] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_string] = STATE(20),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_entity_ref] = ACTIONS(104),
    [sym_binding_ref] = ACTIONS(104),
    [sym_keyword] = ACTIONS(104),
    [anon_sym_world] = ACTIONS(13),
    [anon_sym_room] = ACTIONS(13),
    [anon_sym_object] = ACTIONS(13),
    [anon_sym_event] = ACTIONS(13),
    [anon_sym_victory] = ACTIONS(13),
    [anon_sym_defeat] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(13),
    [anon_sym_globals] = ACTIONS(13),
    [anon_sym_defsyntax] = ACTIONS(13),
    [anon_sym_defglobal] = ACTIONS(13),
    [anon_sym_defroutine] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_lambda] = ACTIONS(15),
    [anon_sym_defn] = ACTIONS(15),
    [anon_sym_def] = ACTIONS(15),
    [anon_sym_cond] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_match] = ACTIONS(15),
    [anon_sym_condp] = ACTIONS(15),
    [anon_sym_cond_DASH_GT] = ACTIONS(15),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_any] = ACTIONS(15),
    [anon_sym_all] = ACTIONS(15),
    [anon_sym_seq] = ACTIONS(15),
    [anon_sym_when] = ACTIONS(15),
    [anon_sym_quote] = ACTIONS(15),
    [anon_sym_list] = ACTIONS(15),
    [anon_sym_range] = ACTIONS(15),
    [anon_sym_some] = ACTIONS(15),
    [anon_sym_every_QMARK] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_doseq] = ACTIONS(15),
    [anon_sym_success] = ACTIONS(19),
    [anon_sym_blocked] = ACTIONS(19),
    [anon_sym_redirect] = ACTIONS(19),
    [anon_sym_outcome] = ACTIONS(19),
    [anon_sym_go] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_tell] = ACTIONS(19),
    [anon_sym_random] = ACTIONS(19),
    [anon_sym_first_DASHchild] = ACTIONS(19),
    [anon_sym_next_DASHsibling] = ACTIONS(19),
    [anon_sym_first_DASHin] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_has_DASHflag] = ACTIONS(25),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(25),
    [anon_sym_loc] = ACTIONS(25),
    [anon_sym_prop] = ACTIONS(25),
    [anon_sym_desc] = ACTIONS(25),
    [anon_sym_flags] = ACTIONS(25),
    [anon_sym_visible_QMARK] = ACTIONS(25),
    [anon_sym_held_QMARK] = ACTIONS(25),
    [anon_sym_here_QMARK] = ACTIONS(25),
    [anon_sym_in_QMARK] = ACTIONS(25),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(25),
    [anon_sym_inside_QMARK] = ACTIONS(25),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(25),
    [anon_sym_at_QMARK] = ACTIONS(25),
    [anon_sym_room_QMARK] = ACTIONS(25),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(25),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(25),
    [anon_sym_inventory] = ACTIONS(25),
    [anon_sym_contents] = ACTIONS(25),
    [anon_sym_exit_QMARK] = ACTIONS(25),
    [anon_sym_exit_DASHto] = ACTIONS(25),
    [anon_sym_exit_DASHvia] = ACTIONS(25),
    [anon_sym_queued_QMARK] = ACTIONS(25),
    [anon_sym_eq_QMARK] = ACTIONS(25),
    [anon_sym_nil_QMARK] = ACTIONS(25),
    [anon_sym_empty_QMARK] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_join] = ACTIONS(25),
    [anon_sym_nth] = ACTIONS(25),
    [anon_sym_list_DASHset] = ACTIONS(25),
    [anon_sym_first] = ACTIONS(25),
    [anon_sym_rest] = ACTIONS(25),
    [anon_sym_count] = ACTIONS(25),
    [anon_sym_cons] = ACTIONS(25),
    [anon_sym_concat] = ACTIONS(25),
    [anon_sym_map] = ACTIONS(25),
    [anon_sym_filter] = ACTIONS(25),
    [anon_sym_remove] = ACTIONS(25),
    [anon_sym_keep] = ACTIONS(25),
    [anon_sym_reduce] = ACTIONS(25),
    [anon_sym_outcome_QMARK] = ACTIONS(25),
    [anon_sym_reason_QMARK] = ACTIONS(25),
    [anon_sym_context_QMARK] = ACTIONS(25),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(25),
    [anon_sym_loc_QMARK] = ACTIONS(25),
    [anon_sym_prop_QMARK] = ACTIONS(25),
    [anon_sym_global_QMARK] = ACTIONS(25),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(25),
    [anon_sym_move_BANG] = ACTIONS(27),
    [anon_sym_take_BANG] = ACTIONS(27),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(27),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(27),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(27),
    [anon_sym_set_BANG] = ACTIONS(27),
    [anon_sym_inc_BANG] = ACTIONS(27),
    [anon_sym_queue_BANG] = ACTIONS(27),
    [anon_sym_dequeue_BANG] = ACTIONS(27),
    [anon_sym_get_DASHprop] = ACTIONS(27),
    [anon_sym_put_DASHprop] = ACTIONS(27),
    [anon_sym_test] = ACTIONS(29),
    [anon_sym_test_DASHsequence] = ACTIONS(29),
    [anon_sym_test_DASHgroup] = ACTIONS(29),
    [anon_sym_step] = ACTIONS(29),
    [anon_sym_north] = ACTIONS(31),
    [anon_sym_south] = ACTIONS(31),
    [anon_sym_east] = ACTIONS(31),
    [anon_sym_west] = ACTIONS(31),
    [anon_sym_up] = ACTIONS(31),
    [anon_sym_down] = ACTIONS(31),
    [anon_sym_northeast] = ACTIONS(31),
    [anon_sym_northwest] = ACTIONS(31),
    [anon_sym_southeast] = ACTIONS(31),
    [anon_sym_southwest] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(31),
    [anon_sym_out] = ACTIONS(31),
    [anon_sym_land] = ACTIONS(31),
    [sym_flag] = ACTIONS(33),
    [anon_sym_enter] = ACTIONS(35),
    [anon_sym_leave] = ACTIONS(35),
    [anon_sym_through] = ACTIONS(35),
    [anon_sym_take] = ACTIONS(35),
    [anon_sym_drop] = ACTIONS(35),
    [anon_sym_examine] = ACTIONS(35),
    [anon_sym_open] = ACTIONS(35),
    [anon_sym_close] = ACTIONS(35),
    [anon_sym_lock] = ACTIONS(35),
    [anon_sym_unlock] = ACTIONS(35),
    [anon_sym_read] = ACTIONS(35),
    [anon_sym_turn_DASHon] = ACTIONS(35),
    [anon_sym_turn_DASHoff] = ACTIONS(35),
    [anon_sym_plug] = ACTIONS(35),
    [anon_sym_unplug] = ACTIONS(35),
    [anon_sym_attack] = ACTIONS(35),
    [anon_sym_push] = ACTIONS(35),
    [anon_sym_pull] = ACTIONS(35),
    [anon_sym_touch] = ACTIONS(35),
    [anon_sym_rub] = ACTIONS(35),
    [anon_sym_click] = ACTIONS(35),
    [anon_sym_point] = ACTIONS(35),
    [anon_sym_eat] = ACTIONS(35),
    [anon_sym_drink] = ACTIONS(35),
    [anon_sym_wear] = ACTIONS(35),
    [anon_sym_climb] = ACTIONS(35),
    [anon_sym_sit] = ACTIONS(35),
    [anon_sym_stand] = ACTIONS(35),
    [anon_sym_smell] = ACTIONS(35),
    [anon_sym_listen] = ACTIONS(35),
    [anon_sym_ask_DASHabout] = ACTIONS(35),
    [anon_sym_tell_DASHabout] = ACTIONS(35),
    [anon_sym_give] = ACTIONS(35),
    [anon_sym_trade] = ACTIONS(35),
    [anon_sym_ask_DASHfor] = ACTIONS(35),
    [anon_sym_help] = ACTIONS(35),
    [anon_sym_put_DASHon] = ACTIONS(35),
    [anon_sym_put_DASHin] = ACTIONS(35),
    [anon_sym_on_DASHenter] = ACTIONS(35),
    [anon_sym_before_DASHaction] = ACTIONS(35),
    [anon_sym_process_DASHevents] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_nil] = ACTIONS(37),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_number] = ACTIONS(104),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [sym_entity_ref] = ACTIONS(106),
    [sym_binding_ref] = ACTIONS(106),
    [sym_keyword] = ACTIONS(106),
    [anon_sym_world] = ACTIONS(108),
    [anon_sym_room] = ACTIONS(108),
    [anon_sym_object] = ACTIONS(108),
    [anon_sym_event] = ACTIONS(108),
    [anon_sym_victory] = ACTIONS(108),
    [anon_sym_defeat] = ACTIONS(108),
    [anon_sym_default] = ACTIONS(108),
    [anon_sym_globals] = ACTIONS(108),
    [anon_sym_defsyntax] = ACTIONS(108),
    [anon_sym_defglobal] = ACTIONS(108),
    [anon_sym_defroutine] = ACTIONS(108),
    [anon_sym_fn] = ACTIONS(108),
    [anon_sym_lambda] = ACTIONS(108),
    [anon_sym_defn] = ACTIONS(108),
    [anon_sym_def] = ACTIONS(108),
    [anon_sym_cond] = ACTIONS(108),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_let] = ACTIONS(108),
    [anon_sym_match] = ACTIONS(108),
    [anon_sym_condp] = ACTIONS(108),
    [anon_sym_cond_DASH_GT] = ACTIONS(108),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(106),
    [anon_sym_and] = ACTIONS(108),
    [anon_sym_or] = ACTIONS(108),
    [anon_sym_not] = ACTIONS(108),
    [anon_sym_any] = ACTIONS(108),
    [anon_sym_all] = ACTIONS(108),
    [anon_sym_seq] = ACTIONS(108),
    [anon_sym_when] = ACTIONS(108),
    [anon_sym_quote] = ACTIONS(108),
    [anon_sym_list] = ACTIONS(108),
    [anon_sym_range] = ACTIONS(108),
    [anon_sym_some] = ACTIONS(108),
    [anon_sym_every_QMARK] = ACTIONS(108),
    [anon_sym_for] = ACTIONS(108),
    [anon_sym_doseq] = ACTIONS(108),
    [anon_sym_success] = ACTIONS(108),
    [anon_sym_blocked] = ACTIONS(108),
    [anon_sym_redirect] = ACTIONS(108),
    [anon_sym_outcome] = ACTIONS(108),
    [anon_sym_go] = ACTIONS(108),
    [anon_sym_do] = ACTIONS(108),
    [anon_sym_tell] = ACTIONS(108),
    [anon_sym_random] = ACTIONS(108),
    [anon_sym_first_DASHchild] = ACTIONS(108),
    [anon_sym_next_DASHsibling] = ACTIONS(108),
    [anon_sym_first_DASHin] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_mod] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_GT_EQ] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(106),
    [anon_sym_has_DASHflag] = ACTIONS(108),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(108),
    [anon_sym_loc] = ACTIONS(108),
    [anon_sym_prop] = ACTIONS(108),
    [anon_sym_desc] = ACTIONS(108),
    [anon_sym_flags] = ACTIONS(108),
    [anon_sym_visible_QMARK] = ACTIONS(108),
    [anon_sym_held_QMARK] = ACTIONS(108),
    [anon_sym_here_QMARK] = ACTIONS(108),
    [anon_sym_in_QMARK] = ACTIONS(108),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(108),
    [anon_sym_inside_QMARK] = ACTIONS(108),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(108),
    [anon_sym_at_QMARK] = ACTIONS(108),
    [anon_sym_room_QMARK] = ACTIONS(108),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(108),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(108),
    [anon_sym_inventory] = ACTIONS(108),
    [anon_sym_contents] = ACTIONS(108),
    [anon_sym_exit_QMARK] = ACTIONS(108),
    [anon_sym_exit_DASHto] = ACTIONS(108),
    [anon_sym_exit_DASHvia] = ACTIONS(108),
    [anon_sym_queued_QMARK] = ACTIONS(108),
    [anon_sym_eq_QMARK] = ACTIONS(108),
    [anon_sym_nil_QMARK] = ACTIONS(108),
    [anon_sym_empty_QMARK] = ACTIONS(108),
    [anon_sym_str] = ACTIONS(108),
    [anon_sym_join] = ACTIONS(108),
    [anon_sym_nth] = ACTIONS(108),
    [anon_sym_list_DASHset] = ACTIONS(108),
    [anon_sym_first] = ACTIONS(108),
    [anon_sym_rest] = ACTIONS(108),
    [anon_sym_count] = ACTIONS(108),
    [anon_sym_cons] = ACTIONS(108),
    [anon_sym_concat] = ACTIONS(108),
    [anon_sym_map] = ACTIONS(108),
    [anon_sym_filter] = ACTIONS(108),
    [anon_sym_remove] = ACTIONS(108),
    [anon_sym_keep] = ACTIONS(108),
    [anon_sym_reduce] = ACTIONS(108),
    [anon_sym_outcome_QMARK] = ACTIONS(108),
    [anon_sym_reason_QMARK] = ACTIONS(108),
    [anon_sym_context_QMARK] = ACTIONS(108),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(108),
    [anon_sym_loc_QMARK] = ACTIONS(108),
    [anon_sym_prop_QMARK] = ACTIONS(108),
    [anon_sym_global_QMARK] = ACTIONS(108),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(108),
    [anon_sym_move_BANG] = ACTIONS(108),
    [anon_sym_take_BANG] = ACTIONS(108),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(108),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(108),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(108),
    [anon_sym_set_BANG] = ACTIONS(108),
    [anon_sym_inc_BANG] = ACTIONS(108),
    [anon_sym_queue_BANG] = ACTIONS(108),
    [anon_sym_dequeue_BANG] = ACTIONS(108),
    [anon_sym_get_DASHprop] = ACTIONS(108),
    [anon_sym_put_DASHprop] = ACTIONS(108),
    [anon_sym_test] = ACTIONS(108),
    [anon_sym_test_DASHsequence] = ACTIONS(108),
    [anon_sym_test_DASHgroup] = ACTIONS(108),
    [anon_sym_step] = ACTIONS(108),
    [anon_sym_north] = ACTIONS(108),
    [anon_sym_south] = ACTIONS(108),
    [anon_sym_east] = ACTIONS(108),
    [anon_sym_west] = ACTIONS(108),
    [anon_sym_up] = ACTIONS(108),
    [anon_sym_down] = ACTIONS(108),
    [anon_sym_northeast] = ACTIONS(108),
    [anon_sym_northwest] = ACTIONS(108),
    [anon_sym_southeast] = ACTIONS(108),
    [anon_sym_southwest] = ACTIONS(108),
    [anon_sym_in] = ACTIONS(108),
    [anon_sym_out] = ACTIONS(108),
    [anon_sym_land] = ACTIONS(108),
    [sym_flag] = ACTIONS(108),
    [anon_sym_enter] = ACTIONS(108),
    [anon_sym_leave] = ACTIONS(108),
    [anon_sym_through] = ACTIONS(108),
    [anon_sym_take] = ACTIONS(108),
    [anon_sym_drop] = ACTIONS(108),
    [anon_sym_examine] = ACTIONS(108),
    [anon_sym_open] = ACTIONS(108),
    [anon_sym_close] = ACTIONS(108),
    [anon_sym_lock] = ACTIONS(108),
    [anon_sym_unlock] = ACTIONS(108),
    [anon_sym_read] = ACTIONS(108),
    [anon_sym_turn_DASHon] = ACTIONS(108),
    [anon_sym_turn_DASHoff] = ACTIONS(108),
    [anon_sym_plug] = ACTIONS(108),
    [anon_sym_unplug] = ACTIONS(108),
    [anon_sym_attack] = ACTIONS(108),
    [anon_sym_push] = ACTIONS(108),
    [anon_sym_pull] = ACTIONS(108),
    [anon_sym_touch] = ACTIONS(108),
    [anon_sym_rub] = ACTIONS(108),
    [anon_sym_click] = ACTIONS(108),
    [anon_sym_point] = ACTIONS(108),
    [anon_sym_eat] = ACTIONS(108),
    [anon_sym_drink] = ACTIONS(108),
    [anon_sym_wear] = ACTIONS(108),
    [anon_sym_climb] = ACTIONS(108),
    [anon_sym_sit] = ACTIONS(108),
    [anon_sym_stand] = ACTIONS(108),
    [anon_sym_smell] = ACTIONS(108),
    [anon_sym_listen] = ACTIONS(108),
    [anon_sym_ask_DASHabout] = ACTIONS(108),
    [anon_sym_tell_DASHabout] = ACTIONS(108),
    [anon_sym_give] = ACTIONS(108),
    [anon_sym_trade] = ACTIONS(108),
    [anon_sym_ask_DASHfor] = ACTIONS(108),
    [anon_sym_help] = ACTIONS(108),
    [anon_sym_put_DASHon] = ACTIONS(108),
    [anon_sym_put_DASHin] = ACTIONS(108),
    [anon_sym_on_DASHenter] = ACTIONS(108),
    [anon_sym_before_DASHaction] = ACTIONS(108),
    [anon_sym_process_DASHevents] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(108),
    [anon_sym_nil] = ACTIONS(108),
    [sym_identifier] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [sym_number] = ACTIONS(106),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [sym_entity_ref] = ACTIONS(110),
    [sym_binding_ref] = ACTIONS(110),
    [sym_keyword] = ACTIONS(110),
    [anon_sym_world] = ACTIONS(112),
    [anon_sym_room] = ACTIONS(112),
    [anon_sym_object] = ACTIONS(112),
    [anon_sym_event] = ACTIONS(112),
    [anon_sym_victory] = ACTIONS(112),
    [anon_sym_defeat] = ACTIONS(112),
    [anon_sym_default] = ACTIONS(112),
    [anon_sym_globals] = ACTIONS(112),
    [anon_sym_defsyntax] = ACTIONS(112),
    [anon_sym_defglobal] = ACTIONS(112),
    [anon_sym_defroutine] = ACTIONS(112),
    [anon_sym_fn] = ACTIONS(112),
    [anon_sym_lambda] = ACTIONS(112),
    [anon_sym_defn] = ACTIONS(112),
    [anon_sym_def] = ACTIONS(112),
    [anon_sym_cond] = ACTIONS(112),
    [anon_sym_if] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(112),
    [anon_sym_match] = ACTIONS(112),
    [anon_sym_condp] = ACTIONS(112),
    [anon_sym_cond_DASH_GT] = ACTIONS(112),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(110),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_or] = ACTIONS(112),
    [anon_sym_not] = ACTIONS(112),
    [anon_sym_any] = ACTIONS(112),
    [anon_sym_all] = ACTIONS(112),
    [anon_sym_seq] = ACTIONS(112),
    [anon_sym_when] = ACTIONS(112),
    [anon_sym_quote] = ACTIONS(112),
    [anon_sym_list] = ACTIONS(112),
    [anon_sym_range] = ACTIONS(112),
    [anon_sym_some] = ACTIONS(112),
    [anon_sym_every_QMARK] = ACTIONS(112),
    [anon_sym_for] = ACTIONS(112),
    [anon_sym_doseq] = ACTIONS(112),
    [anon_sym_success] = ACTIONS(112),
    [anon_sym_blocked] = ACTIONS(112),
    [anon_sym_redirect] = ACTIONS(112),
    [anon_sym_outcome] = ACTIONS(112),
    [anon_sym_go] = ACTIONS(112),
    [anon_sym_do] = ACTIONS(112),
    [anon_sym_tell] = ACTIONS(112),
    [anon_sym_random] = ACTIONS(112),
    [anon_sym_first_DASHchild] = ACTIONS(112),
    [anon_sym_next_DASHsibling] = ACTIONS(112),
    [anon_sym_first_DASHin] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(110),
    [anon_sym_mod] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_GT] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(110),
    [anon_sym_LT_EQ] = ACTIONS(110),
    [anon_sym_has_DASHflag] = ACTIONS(112),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(112),
    [anon_sym_loc] = ACTIONS(112),
    [anon_sym_prop] = ACTIONS(112),
    [anon_sym_desc] = ACTIONS(112),
    [anon_sym_flags] = ACTIONS(112),
    [anon_sym_visible_QMARK] = ACTIONS(112),
    [anon_sym_held_QMARK] = ACTIONS(112),
    [anon_sym_here_QMARK] = ACTIONS(112),
    [anon_sym_in_QMARK] = ACTIONS(112),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(112),
    [anon_sym_inside_QMARK] = ACTIONS(112),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(112),
    [anon_sym_at_QMARK] = ACTIONS(112),
    [anon_sym_room_QMARK] = ACTIONS(112),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(112),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(112),
    [anon_sym_inventory] = ACTIONS(112),
    [anon_sym_contents] = ACTIONS(112),
    [anon_sym_exit_QMARK] = ACTIONS(112),
    [anon_sym_exit_DASHto] = ACTIONS(112),
    [anon_sym_exit_DASHvia] = ACTIONS(112),
    [anon_sym_queued_QMARK] = ACTIONS(112),
    [anon_sym_eq_QMARK] = ACTIONS(112),
    [anon_sym_nil_QMARK] = ACTIONS(112),
    [anon_sym_empty_QMARK] = ACTIONS(112),
    [anon_sym_str] = ACTIONS(112),
    [anon_sym_join] = ACTIONS(112),
    [anon_sym_nth] = ACTIONS(112),
    [anon_sym_list_DASHset] = ACTIONS(112),
    [anon_sym_first] = ACTIONS(112),
    [anon_sym_rest] = ACTIONS(112),
    [anon_sym_count] = ACTIONS(112),
    [anon_sym_cons] = ACTIONS(112),
    [anon_sym_concat] = ACTIONS(112),
    [anon_sym_map] = ACTIONS(112),
    [anon_sym_filter] = ACTIONS(112),
    [anon_sym_remove] = ACTIONS(112),
    [anon_sym_keep] = ACTIONS(112),
    [anon_sym_reduce] = ACTIONS(112),
    [anon_sym_outcome_QMARK] = ACTIONS(112),
    [anon_sym_reason_QMARK] = ACTIONS(112),
    [anon_sym_context_QMARK] = ACTIONS(112),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(112),
    [anon_sym_loc_QMARK] = ACTIONS(112),
    [anon_sym_prop_QMARK] = ACTIONS(112),
    [anon_sym_global_QMARK] = ACTIONS(112),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(112),
    [anon_sym_move_BANG] = ACTIONS(112),
    [anon_sym_take_BANG] = ACTIONS(112),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(112),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(112),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(112),
    [anon_sym_set_BANG] = ACTIONS(112),
    [anon_sym_inc_BANG] = ACTIONS(112),
    [anon_sym_queue_BANG] = ACTIONS(112),
    [anon_sym_dequeue_BANG] = ACTIONS(112),
    [anon_sym_get_DASHprop] = ACTIONS(112),
    [anon_sym_put_DASHprop] = ACTIONS(112),
    [anon_sym_test] = ACTIONS(112),
    [anon_sym_test_DASHsequence] = ACTIONS(112),
    [anon_sym_test_DASHgroup] = ACTIONS(112),
    [anon_sym_step] = ACTIONS(112),
    [anon_sym_north] = ACTIONS(112),
    [anon_sym_south] = ACTIONS(112),
    [anon_sym_east] = ACTIONS(112),
    [anon_sym_west] = ACTIONS(112),
    [anon_sym_up] = ACTIONS(112),
    [anon_sym_down] = ACTIONS(112),
    [anon_sym_northeast] = ACTIONS(112),
    [anon_sym_northwest] = ACTIONS(112),
    [anon_sym_southeast] = ACTIONS(112),
    [anon_sym_southwest] = ACTIONS(112),
    [anon_sym_in] = ACTIONS(112),
    [anon_sym_out] = ACTIONS(112),
    [anon_sym_land] = ACTIONS(112),
    [sym_flag] = ACTIONS(112),
    [anon_sym_enter] = ACTIONS(112),
    [anon_sym_leave] = ACTIONS(112),
    [anon_sym_through] = ACTIONS(112),
    [anon_sym_take] = ACTIONS(112),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_examine] = ACTIONS(112),
    [anon_sym_open] = ACTIONS(112),
    [anon_sym_close] = ACTIONS(112),
    [anon_sym_lock] = ACTIONS(112),
    [anon_sym_unlock] = ACTIONS(112),
    [anon_sym_read] = ACTIONS(112),
    [anon_sym_turn_DASHon] = ACTIONS(112),
    [anon_sym_turn_DASHoff] = ACTIONS(112),
    [anon_sym_plug] = ACTIONS(112),
    [anon_sym_unplug] = ACTIONS(112),
    [anon_sym_attack] = ACTIONS(112),
    [anon_sym_push] = ACTIONS(112),
    [anon_sym_pull] = ACTIONS(112),
    [anon_sym_touch] = ACTIONS(112),
    [anon_sym_rub] = ACTIONS(112),
    [anon_sym_click] = ACTIONS(112),
    [anon_sym_point] = ACTIONS(112),
    [anon_sym_eat] = ACTIONS(112),
    [anon_sym_drink] = ACTIONS(112),
    [anon_sym_wear] = ACTIONS(112),
    [anon_sym_climb] = ACTIONS(112),
    [anon_sym_sit] = ACTIONS(112),
    [anon_sym_stand] = ACTIONS(112),
    [anon_sym_smell] = ACTIONS(112),
    [anon_sym_listen] = ACTIONS(112),
    [anon_sym_ask_DASHabout] = ACTIONS(112),
    [anon_sym_tell_DASHabout] = ACTIONS(112),
    [anon_sym_give] = ACTIONS(112),
    [anon_sym_trade] = ACTIONS(112),
    [anon_sym_ask_DASHfor] = ACTIONS(112),
    [anon_sym_help] = ACTIONS(112),
    [anon_sym_put_DASHon] = ACTIONS(112),
    [anon_sym_put_DASHin] = ACTIONS(112),
    [anon_sym_on_DASHenter] = ACTIONS(112),
    [anon_sym_before_DASHaction] = ACTIONS(112),
    [anon_sym_process_DASHevents] = ACTIONS(112),
    [anon_sym_true] = ACTIONS(112),
    [anon_sym_false] = ACTIONS(112),
    [anon_sym_nil] = ACTIONS(112),
    [sym_identifier] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [sym_number] = ACTIONS(110),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [sym_entity_ref] = ACTIONS(114),
    [sym_binding_ref] = ACTIONS(114),
    [sym_keyword] = ACTIONS(114),
    [anon_sym_world] = ACTIONS(116),
    [anon_sym_room] = ACTIONS(116),
    [anon_sym_object] = ACTIONS(116),
    [anon_sym_event] = ACTIONS(116),
    [anon_sym_victory] = ACTIONS(116),
    [anon_sym_defeat] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
    [anon_sym_globals] = ACTIONS(116),
    [anon_sym_defsyntax] = ACTIONS(116),
    [anon_sym_defglobal] = ACTIONS(116),
    [anon_sym_defroutine] = ACTIONS(116),
    [anon_sym_fn] = ACTIONS(116),
    [anon_sym_lambda] = ACTIONS(116),
    [anon_sym_defn] = ACTIONS(116),
    [anon_sym_def] = ACTIONS(116),
    [anon_sym_cond] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(116),
    [anon_sym_let] = ACTIONS(116),
    [anon_sym_match] = ACTIONS(116),
    [anon_sym_condp] = ACTIONS(116),
    [anon_sym_cond_DASH_GT] = ACTIONS(116),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(116),
    [anon_sym_or] = ACTIONS(116),
    [anon_sym_not] = ACTIONS(116),
    [anon_sym_any] = ACTIONS(116),
    [anon_sym_all] = ACTIONS(116),
    [anon_sym_seq] = ACTIONS(116),
    [anon_sym_when] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_list] = ACTIONS(116),
    [anon_sym_range] = ACTIONS(116),
    [anon_sym_some] = ACTIONS(116),
    [anon_sym_every_QMARK] = ACTIONS(116),
    [anon_sym_for] = ACTIONS(116),
    [anon_sym_doseq] = ACTIONS(116),
    [anon_sym_success] = ACTIONS(116),
    [anon_sym_blocked] = ACTIONS(116),
    [anon_sym_redirect] = ACTIONS(116),
    [anon_sym_outcome] = ACTIONS(116),
    [anon_sym_go] = ACTIONS(116),
    [anon_sym_do] = ACTIONS(116),
    [anon_sym_tell] = ACTIONS(116),
    [anon_sym_random] = ACTIONS(116),
    [anon_sym_first_DASHchild] = ACTIONS(116),
    [anon_sym_next_DASHsibling] = ACTIONS(116),
    [anon_sym_first_DASHin] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_mod] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(114),
    [anon_sym_has_DASHflag] = ACTIONS(116),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(116),
    [anon_sym_loc] = ACTIONS(116),
    [anon_sym_prop] = ACTIONS(116),
    [anon_sym_desc] = ACTIONS(116),
    [anon_sym_flags] = ACTIONS(116),
    [anon_sym_visible_QMARK] = ACTIONS(116),
    [anon_sym_held_QMARK] = ACTIONS(116),
    [anon_sym_here_QMARK] = ACTIONS(116),
    [anon_sym_in_QMARK] = ACTIONS(116),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(116),
    [anon_sym_inside_QMARK] = ACTIONS(116),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(116),
    [anon_sym_at_QMARK] = ACTIONS(116),
    [anon_sym_room_QMARK] = ACTIONS(116),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(116),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(116),
    [anon_sym_inventory] = ACTIONS(116),
    [anon_sym_contents] = ACTIONS(116),
    [anon_sym_exit_QMARK] = ACTIONS(116),
    [anon_sym_exit_DASHto] = ACTIONS(116),
    [anon_sym_exit_DASHvia] = ACTIONS(116),
    [anon_sym_queued_QMARK] = ACTIONS(116),
    [anon_sym_eq_QMARK] = ACTIONS(116),
    [anon_sym_nil_QMARK] = ACTIONS(116),
    [anon_sym_empty_QMARK] = ACTIONS(116),
    [anon_sym_str] = ACTIONS(116),
    [anon_sym_join] = ACTIONS(116),
    [anon_sym_nth] = ACTIONS(116),
    [anon_sym_list_DASHset] = ACTIONS(116),
    [anon_sym_first] = ACTIONS(116),
    [anon_sym_rest] = ACTIONS(116),
    [anon_sym_count] = ACTIONS(116),
    [anon_sym_cons] = ACTIONS(116),
    [anon_sym_concat] = ACTIONS(116),
    [anon_sym_map] = ACTIONS(116),
    [anon_sym_filter] = ACTIONS(116),
    [anon_sym_remove] = ACTIONS(116),
    [anon_sym_keep] = ACTIONS(116),
    [anon_sym_reduce] = ACTIONS(116),
    [anon_sym_outcome_QMARK] = ACTIONS(116),
    [anon_sym_reason_QMARK] = ACTIONS(116),
    [anon_sym_context_QMARK] = ACTIONS(116),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(116),
    [anon_sym_loc_QMARK] = ACTIONS(116),
    [anon_sym_prop_QMARK] = ACTIONS(116),
    [anon_sym_global_QMARK] = ACTIONS(116),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(116),
    [anon_sym_move_BANG] = ACTIONS(116),
    [anon_sym_take_BANG] = ACTIONS(116),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(116),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(116),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(116),
    [anon_sym_set_BANG] = ACTIONS(116),
    [anon_sym_inc_BANG] = ACTIONS(116),
    [anon_sym_queue_BANG] = ACTIONS(116),
    [anon_sym_dequeue_BANG] = ACTIONS(116),
    [anon_sym_get_DASHprop] = ACTIONS(116),
    [anon_sym_put_DASHprop] = ACTIONS(116),
    [anon_sym_test] = ACTIONS(116),
    [anon_sym_test_DASHsequence] = ACTIONS(116),
    [anon_sym_test_DASHgroup] = ACTIONS(116),
    [anon_sym_step] = ACTIONS(116),
    [anon_sym_north] = ACTIONS(116),
    [anon_sym_south] = ACTIONS(116),
    [anon_sym_east] = ACTIONS(116),
    [anon_sym_west] = ACTIONS(116),
    [anon_sym_up] = ACTIONS(116),
    [anon_sym_down] = ACTIONS(116),
    [anon_sym_northeast] = ACTIONS(116),
    [anon_sym_northwest] = ACTIONS(116),
    [anon_sym_southeast] = ACTIONS(116),
    [anon_sym_southwest] = ACTIONS(116),
    [anon_sym_in] = ACTIONS(116),
    [anon_sym_out] = ACTIONS(116),
    [anon_sym_land] = ACTIONS(116),
    [sym_flag] = ACTIONS(116),
    [anon_sym_enter] = ACTIONS(116),
    [anon_sym_leave] = ACTIONS(116),
    [anon_sym_through] = ACTIONS(116),
    [anon_sym_take] = ACTIONS(116),
    [anon_sym_drop] = ACTIONS(116),
    [anon_sym_examine] = ACTIONS(116),
    [anon_sym_open] = ACTIONS(116),
    [anon_sym_close] = ACTIONS(116),
    [anon_sym_lock] = ACTIONS(116),
    [anon_sym_unlock] = ACTIONS(116),
    [anon_sym_read] = ACTIONS(116),
    [anon_sym_turn_DASHon] = ACTIONS(116),
    [anon_sym_turn_DASHoff] = ACTIONS(116),
    [anon_sym_plug] = ACTIONS(116),
    [anon_sym_unplug] = ACTIONS(116),
    [anon_sym_attack] = ACTIONS(116),
    [anon_sym_push] = ACTIONS(116),
    [anon_sym_pull] = ACTIONS(116),
    [anon_sym_touch] = ACTIONS(116),
    [anon_sym_rub] = ACTIONS(116),
    [anon_sym_click] = ACTIONS(116),
    [anon_sym_point] = ACTIONS(116),
    [anon_sym_eat] = ACTIONS(116),
    [anon_sym_drink] = ACTIONS(116),
    [anon_sym_wear] = ACTIONS(116),
    [anon_sym_climb] = ACTIONS(116),
    [anon_sym_sit] = ACTIONS(116),
    [anon_sym_stand] = ACTIONS(116),
    [anon_sym_smell] = ACTIONS(116),
    [anon_sym_listen] = ACTIONS(116),
    [anon_sym_ask_DASHabout] = ACTIONS(116),
    [anon_sym_tell_DASHabout] = ACTIONS(116),
    [anon_sym_give] = ACTIONS(116),
    [anon_sym_trade] = ACTIONS(116),
    [anon_sym_ask_DASHfor] = ACTIONS(116),
    [anon_sym_help] = ACTIONS(116),
    [anon_sym_put_DASHon] = ACTIONS(116),
    [anon_sym_put_DASHin] = ACTIONS(116),
    [anon_sym_on_DASHenter] = ACTIONS(116),
    [anon_sym_before_DASHaction] = ACTIONS(116),
    [anon_sym_process_DASHevents] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(116),
    [anon_sym_false] = ACTIONS(116),
    [anon_sym_nil] = ACTIONS(116),
    [sym_identifier] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [sym_number] = ACTIONS(114),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [sym_entity_ref] = ACTIONS(118),
    [sym_binding_ref] = ACTIONS(118),
    [sym_keyword] = ACTIONS(118),
    [anon_sym_world] = ACTIONS(120),
    [anon_sym_room] = ACTIONS(120),
    [anon_sym_object] = ACTIONS(120),
    [anon_sym_event] = ACTIONS(120),
    [anon_sym_victory] = ACTIONS(120),
    [anon_sym_defeat] = ACTIONS(120),
    [anon_sym_default] = ACTIONS(120),
    [anon_sym_globals] = ACTIONS(120),
    [anon_sym_defsyntax] = ACTIONS(120),
    [anon_sym_defglobal] = ACTIONS(120),
    [anon_sym_defroutine] = ACTIONS(120),
    [anon_sym_fn] = ACTIONS(120),
    [anon_sym_lambda] = ACTIONS(120),
    [anon_sym_defn] = ACTIONS(120),
    [anon_sym_def] = ACTIONS(120),
    [anon_sym_cond] = ACTIONS(120),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_let] = ACTIONS(120),
    [anon_sym_match] = ACTIONS(120),
    [anon_sym_condp] = ACTIONS(120),
    [anon_sym_cond_DASH_GT] = ACTIONS(120),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(118),
    [anon_sym_and] = ACTIONS(120),
    [anon_sym_or] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_any] = ACTIONS(120),
    [anon_sym_all] = ACTIONS(120),
    [anon_sym_seq] = ACTIONS(120),
    [anon_sym_when] = ACTIONS(120),
    [anon_sym_quote] = ACTIONS(120),
    [anon_sym_list] = ACTIONS(120),
    [anon_sym_range] = ACTIONS(120),
    [anon_sym_some] = ACTIONS(120),
    [anon_sym_every_QMARK] = ACTIONS(120),
    [anon_sym_for] = ACTIONS(120),
    [anon_sym_doseq] = ACTIONS(120),
    [anon_sym_success] = ACTIONS(120),
    [anon_sym_blocked] = ACTIONS(120),
    [anon_sym_redirect] = ACTIONS(120),
    [anon_sym_outcome] = ACTIONS(120),
    [anon_sym_go] = ACTIONS(120),
    [anon_sym_do] = ACTIONS(120),
    [anon_sym_tell] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_first_DASHchild] = ACTIONS(120),
    [anon_sym_next_DASHsibling] = ACTIONS(120),
    [anon_sym_first_DASHin] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_mod] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [anon_sym_has_DASHflag] = ACTIONS(120),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(120),
    [anon_sym_loc] = ACTIONS(120),
    [anon_sym_prop] = ACTIONS(120),
    [anon_sym_desc] = ACTIONS(120),
    [anon_sym_flags] = ACTIONS(120),
    [anon_sym_visible_QMARK] = ACTIONS(120),
    [anon_sym_held_QMARK] = ACTIONS(120),
    [anon_sym_here_QMARK] = ACTIONS(120),
    [anon_sym_in_QMARK] = ACTIONS(120),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(120),
    [anon_sym_inside_QMARK] = ACTIONS(120),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(120),
    [anon_sym_at_QMARK] = ACTIONS(120),
    [anon_sym_room_QMARK] = ACTIONS(120),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(120),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(120),
    [anon_sym_inventory] = ACTIONS(120),
    [anon_sym_contents] = ACTIONS(120),
    [anon_sym_exit_QMARK] = ACTIONS(120),
    [anon_sym_exit_DASHto] = ACTIONS(120),
    [anon_sym_exit_DASHvia] = ACTIONS(120),
    [anon_sym_queued_QMARK] = ACTIONS(120),
    [anon_sym_eq_QMARK] = ACTIONS(120),
    [anon_sym_nil_QMARK] = ACTIONS(120),
    [anon_sym_empty_QMARK] = ACTIONS(120),
    [anon_sym_str] = ACTIONS(120),
    [anon_sym_join] = ACTIONS(120),
    [anon_sym_nth] = ACTIONS(120),
    [anon_sym_list_DASHset] = ACTIONS(120),
    [anon_sym_first] = ACTIONS(120),
    [anon_sym_rest] = ACTIONS(120),
    [anon_sym_count] = ACTIONS(120),
    [anon_sym_cons] = ACTIONS(120),
    [anon_sym_concat] = ACTIONS(120),
    [anon_sym_map] = ACTIONS(120),
    [anon_sym_filter] = ACTIONS(120),
    [anon_sym_remove] = ACTIONS(120),
    [anon_sym_keep] = ACTIONS(120),
    [anon_sym_reduce] = ACTIONS(120),
    [anon_sym_outcome_QMARK] = ACTIONS(120),
    [anon_sym_reason_QMARK] = ACTIONS(120),
    [anon_sym_context_QMARK] = ACTIONS(120),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(120),
    [anon_sym_loc_QMARK] = ACTIONS(120),
    [anon_sym_prop_QMARK] = ACTIONS(120),
    [anon_sym_global_QMARK] = ACTIONS(120),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(120),
    [anon_sym_move_BANG] = ACTIONS(120),
    [anon_sym_take_BANG] = ACTIONS(120),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(120),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(120),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(120),
    [anon_sym_set_BANG] = ACTIONS(120),
    [anon_sym_inc_BANG] = ACTIONS(120),
    [anon_sym_queue_BANG] = ACTIONS(120),
    [anon_sym_dequeue_BANG] = ACTIONS(120),
    [anon_sym_get_DASHprop] = ACTIONS(120),
    [anon_sym_put_DASHprop] = ACTIONS(120),
    [anon_sym_test] = ACTIONS(120),
    [anon_sym_test_DASHsequence] = ACTIONS(120),
    [anon_sym_test_DASHgroup] = ACTIONS(120),
    [anon_sym_step] = ACTIONS(120),
    [anon_sym_north] = ACTIONS(120),
    [anon_sym_south] = ACTIONS(120),
    [anon_sym_east] = ACTIONS(120),
    [anon_sym_west] = ACTIONS(120),
    [anon_sym_up] = ACTIONS(120),
    [anon_sym_down] = ACTIONS(120),
    [anon_sym_northeast] = ACTIONS(120),
    [anon_sym_northwest] = ACTIONS(120),
    [anon_sym_southeast] = ACTIONS(120),
    [anon_sym_southwest] = ACTIONS(120),
    [anon_sym_in] = ACTIONS(120),
    [anon_sym_out] = ACTIONS(120),
    [anon_sym_land] = ACTIONS(120),
    [sym_flag] = ACTIONS(120),
    [anon_sym_enter] = ACTIONS(120),
    [anon_sym_leave] = ACTIONS(120),
    [anon_sym_through] = ACTIONS(120),
    [anon_sym_take] = ACTIONS(120),
    [anon_sym_drop] = ACTIONS(120),
    [anon_sym_examine] = ACTIONS(120),
    [anon_sym_open] = ACTIONS(120),
    [anon_sym_close] = ACTIONS(120),
    [anon_sym_lock] = ACTIONS(120),
    [anon_sym_unlock] = ACTIONS(120),
    [anon_sym_read] = ACTIONS(120),
    [anon_sym_turn_DASHon] = ACTIONS(120),
    [anon_sym_turn_DASHoff] = ACTIONS(120),
    [anon_sym_plug] = ACTIONS(120),
    [anon_sym_unplug] = ACTIONS(120),
    [anon_sym_attack] = ACTIONS(120),
    [anon_sym_push] = ACTIONS(120),
    [anon_sym_pull] = ACTIONS(120),
    [anon_sym_touch] = ACTIONS(120),
    [anon_sym_rub] = ACTIONS(120),
    [anon_sym_click] = ACTIONS(120),
    [anon_sym_point] = ACTIONS(120),
    [anon_sym_eat] = ACTIONS(120),
    [anon_sym_drink] = ACTIONS(120),
    [anon_sym_wear] = ACTIONS(120),
    [anon_sym_climb] = ACTIONS(120),
    [anon_sym_sit] = ACTIONS(120),
    [anon_sym_stand] = ACTIONS(120),
    [anon_sym_smell] = ACTIONS(120),
    [anon_sym_listen] = ACTIONS(120),
    [anon_sym_ask_DASHabout] = ACTIONS(120),
    [anon_sym_tell_DASHabout] = ACTIONS(120),
    [anon_sym_give] = ACTIONS(120),
    [anon_sym_trade] = ACTIONS(120),
    [anon_sym_ask_DASHfor] = ACTIONS(120),
    [anon_sym_help] = ACTIONS(120),
    [anon_sym_put_DASHon] = ACTIONS(120),
    [anon_sym_put_DASHin] = ACTIONS(120),
    [anon_sym_on_DASHenter] = ACTIONS(120),
    [anon_sym_before_DASHaction] = ACTIONS(120),
    [anon_sym_process_DASHevents] = ACTIONS(120),
    [anon_sym_true] = ACTIONS(120),
    [anon_sym_false] = ACTIONS(120),
    [anon_sym_nil] = ACTIONS(120),
    [sym_identifier] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [sym_number] = ACTIONS(118),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [sym_entity_ref] = ACTIONS(122),
    [sym_binding_ref] = ACTIONS(122),
    [sym_keyword] = ACTIONS(122),
    [anon_sym_world] = ACTIONS(124),
    [anon_sym_room] = ACTIONS(124),
    [anon_sym_object] = ACTIONS(124),
    [anon_sym_event] = ACTIONS(124),
    [anon_sym_victory] = ACTIONS(124),
    [anon_sym_defeat] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
    [anon_sym_globals] = ACTIONS(124),
    [anon_sym_defsyntax] = ACTIONS(124),
    [anon_sym_defglobal] = ACTIONS(124),
    [anon_sym_defroutine] = ACTIONS(124),
    [anon_sym_fn] = ACTIONS(124),
    [anon_sym_lambda] = ACTIONS(124),
    [anon_sym_defn] = ACTIONS(124),
    [anon_sym_def] = ACTIONS(124),
    [anon_sym_cond] = ACTIONS(124),
    [anon_sym_if] = ACTIONS(124),
    [anon_sym_let] = ACTIONS(124),
    [anon_sym_match] = ACTIONS(124),
    [anon_sym_condp] = ACTIONS(124),
    [anon_sym_cond_DASH_GT] = ACTIONS(124),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(124),
    [anon_sym_or] = ACTIONS(124),
    [anon_sym_not] = ACTIONS(124),
    [anon_sym_any] = ACTIONS(124),
    [anon_sym_all] = ACTIONS(124),
    [anon_sym_seq] = ACTIONS(124),
    [anon_sym_when] = ACTIONS(124),
    [anon_sym_quote] = ACTIONS(124),
    [anon_sym_list] = ACTIONS(124),
    [anon_sym_range] = ACTIONS(124),
    [anon_sym_some] = ACTIONS(124),
    [anon_sym_every_QMARK] = ACTIONS(124),
    [anon_sym_for] = ACTIONS(124),
    [anon_sym_doseq] = ACTIONS(124),
    [anon_sym_success] = ACTIONS(124),
    [anon_sym_blocked] = ACTIONS(124),
    [anon_sym_redirect] = ACTIONS(124),
    [anon_sym_outcome] = ACTIONS(124),
    [anon_sym_go] = ACTIONS(124),
    [anon_sym_do] = ACTIONS(124),
    [anon_sym_tell] = ACTIONS(124),
    [anon_sym_random] = ACTIONS(124),
    [anon_sym_first_DASHchild] = ACTIONS(124),
    [anon_sym_next_DASHsibling] = ACTIONS(124),
    [anon_sym_first_DASHin] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_mod] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(122),
    [anon_sym_has_DASHflag] = ACTIONS(124),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(124),
    [anon_sym_loc] = ACTIONS(124),
    [anon_sym_prop] = ACTIONS(124),
    [anon_sym_desc] = ACTIONS(124),
    [anon_sym_flags] = ACTIONS(124),
    [anon_sym_visible_QMARK] = ACTIONS(124),
    [anon_sym_held_QMARK] = ACTIONS(124),
    [anon_sym_here_QMARK] = ACTIONS(124),
    [anon_sym_in_QMARK] = ACTIONS(124),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(124),
    [anon_sym_inside_QMARK] = ACTIONS(124),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(124),
    [anon_sym_at_QMARK] = ACTIONS(124),
    [anon_sym_room_QMARK] = ACTIONS(124),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(124),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(124),
    [anon_sym_inventory] = ACTIONS(124),
    [anon_sym_contents] = ACTIONS(124),
    [anon_sym_exit_QMARK] = ACTIONS(124),
    [anon_sym_exit_DASHto] = ACTIONS(124),
    [anon_sym_exit_DASHvia] = ACTIONS(124),
    [anon_sym_queued_QMARK] = ACTIONS(124),
    [anon_sym_eq_QMARK] = ACTIONS(124),
    [anon_sym_nil_QMARK] = ACTIONS(124),
    [anon_sym_empty_QMARK] = ACTIONS(124),
    [anon_sym_str] = ACTIONS(124),
    [anon_sym_join] = ACTIONS(124),
    [anon_sym_nth] = ACTIONS(124),
    [anon_sym_list_DASHset] = ACTIONS(124),
    [anon_sym_first] = ACTIONS(124),
    [anon_sym_rest] = ACTIONS(124),
    [anon_sym_count] = ACTIONS(124),
    [anon_sym_cons] = ACTIONS(124),
    [anon_sym_concat] = ACTIONS(124),
    [anon_sym_map] = ACTIONS(124),
    [anon_sym_filter] = ACTIONS(124),
    [anon_sym_remove] = ACTIONS(124),
    [anon_sym_keep] = ACTIONS(124),
    [anon_sym_reduce] = ACTIONS(124),
    [anon_sym_outcome_QMARK] = ACTIONS(124),
    [anon_sym_reason_QMARK] = ACTIONS(124),
    [anon_sym_context_QMARK] = ACTIONS(124),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(124),
    [anon_sym_loc_QMARK] = ACTIONS(124),
    [anon_sym_prop_QMARK] = ACTIONS(124),
    [anon_sym_global_QMARK] = ACTIONS(124),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(124),
    [anon_sym_move_BANG] = ACTIONS(124),
    [anon_sym_take_BANG] = ACTIONS(124),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(124),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(124),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(124),
    [anon_sym_set_BANG] = ACTIONS(124),
    [anon_sym_inc_BANG] = ACTIONS(124),
    [anon_sym_queue_BANG] = ACTIONS(124),
    [anon_sym_dequeue_BANG] = ACTIONS(124),
    [anon_sym_get_DASHprop] = ACTIONS(124),
    [anon_sym_put_DASHprop] = ACTIONS(124),
    [anon_sym_test] = ACTIONS(124),
    [anon_sym_test_DASHsequence] = ACTIONS(124),
    [anon_sym_test_DASHgroup] = ACTIONS(124),
    [anon_sym_step] = ACTIONS(124),
    [anon_sym_north] = ACTIONS(124),
    [anon_sym_south] = ACTIONS(124),
    [anon_sym_east] = ACTIONS(124),
    [anon_sym_west] = ACTIONS(124),
    [anon_sym_up] = ACTIONS(124),
    [anon_sym_down] = ACTIONS(124),
    [anon_sym_northeast] = ACTIONS(124),
    [anon_sym_northwest] = ACTIONS(124),
    [anon_sym_southeast] = ACTIONS(124),
    [anon_sym_southwest] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_out] = ACTIONS(124),
    [anon_sym_land] = ACTIONS(124),
    [sym_flag] = ACTIONS(124),
    [anon_sym_enter] = ACTIONS(124),
    [anon_sym_leave] = ACTIONS(124),
    [anon_sym_through] = ACTIONS(124),
    [anon_sym_take] = ACTIONS(124),
    [anon_sym_drop] = ACTIONS(124),
    [anon_sym_examine] = ACTIONS(124),
    [anon_sym_open] = ACTIONS(124),
    [anon_sym_close] = ACTIONS(124),
    [anon_sym_lock] = ACTIONS(124),
    [anon_sym_unlock] = ACTIONS(124),
    [anon_sym_read] = ACTIONS(124),
    [anon_sym_turn_DASHon] = ACTIONS(124),
    [anon_sym_turn_DASHoff] = ACTIONS(124),
    [anon_sym_plug] = ACTIONS(124),
    [anon_sym_unplug] = ACTIONS(124),
    [anon_sym_attack] = ACTIONS(124),
    [anon_sym_push] = ACTIONS(124),
    [anon_sym_pull] = ACTIONS(124),
    [anon_sym_touch] = ACTIONS(124),
    [anon_sym_rub] = ACTIONS(124),
    [anon_sym_click] = ACTIONS(124),
    [anon_sym_point] = ACTIONS(124),
    [anon_sym_eat] = ACTIONS(124),
    [anon_sym_drink] = ACTIONS(124),
    [anon_sym_wear] = ACTIONS(124),
    [anon_sym_climb] = ACTIONS(124),
    [anon_sym_sit] = ACTIONS(124),
    [anon_sym_stand] = ACTIONS(124),
    [anon_sym_smell] = ACTIONS(124),
    [anon_sym_listen] = ACTIONS(124),
    [anon_sym_ask_DASHabout] = ACTIONS(124),
    [anon_sym_tell_DASHabout] = ACTIONS(124),
    [anon_sym_give] = ACTIONS(124),
    [anon_sym_trade] = ACTIONS(124),
    [anon_sym_ask_DASHfor] = ACTIONS(124),
    [anon_sym_help] = ACTIONS(124),
    [anon_sym_put_DASHon] = ACTIONS(124),
    [anon_sym_put_DASHin] = ACTIONS(124),
    [anon_sym_on_DASHenter] = ACTIONS(124),
    [anon_sym_before_DASHaction] = ACTIONS(124),
    [anon_sym_process_DASHevents] = ACTIONS(124),
    [anon_sym_true] = ACTIONS(124),
    [anon_sym_false] = ACTIONS(124),
    [anon_sym_nil] = ACTIONS(124),
    [sym_identifier] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [sym_entity_ref] = ACTIONS(126),
    [sym_binding_ref] = ACTIONS(126),
    [sym_keyword] = ACTIONS(126),
    [anon_sym_world] = ACTIONS(128),
    [anon_sym_room] = ACTIONS(128),
    [anon_sym_object] = ACTIONS(128),
    [anon_sym_event] = ACTIONS(128),
    [anon_sym_victory] = ACTIONS(128),
    [anon_sym_defeat] = ACTIONS(128),
    [anon_sym_default] = ACTIONS(128),
    [anon_sym_globals] = ACTIONS(128),
    [anon_sym_defsyntax] = ACTIONS(128),
    [anon_sym_defglobal] = ACTIONS(128),
    [anon_sym_defroutine] = ACTIONS(128),
    [anon_sym_fn] = ACTIONS(128),
    [anon_sym_lambda] = ACTIONS(128),
    [anon_sym_defn] = ACTIONS(128),
    [anon_sym_def] = ACTIONS(128),
    [anon_sym_cond] = ACTIONS(128),
    [anon_sym_if] = ACTIONS(128),
    [anon_sym_let] = ACTIONS(128),
    [anon_sym_match] = ACTIONS(128),
    [anon_sym_condp] = ACTIONS(128),
    [anon_sym_cond_DASH_GT] = ACTIONS(128),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(128),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_not] = ACTIONS(128),
    [anon_sym_any] = ACTIONS(128),
    [anon_sym_all] = ACTIONS(128),
    [anon_sym_seq] = ACTIONS(128),
    [anon_sym_when] = ACTIONS(128),
    [anon_sym_quote] = ACTIONS(128),
    [anon_sym_list] = ACTIONS(128),
    [anon_sym_range] = ACTIONS(128),
    [anon_sym_some] = ACTIONS(128),
    [anon_sym_every_QMARK] = ACTIONS(128),
    [anon_sym_for] = ACTIONS(128),
    [anon_sym_doseq] = ACTIONS(128),
    [anon_sym_success] = ACTIONS(128),
    [anon_sym_blocked] = ACTIONS(128),
    [anon_sym_redirect] = ACTIONS(128),
    [anon_sym_outcome] = ACTIONS(128),
    [anon_sym_go] = ACTIONS(128),
    [anon_sym_do] = ACTIONS(128),
    [anon_sym_tell] = ACTIONS(128),
    [anon_sym_random] = ACTIONS(128),
    [anon_sym_first_DASHchild] = ACTIONS(128),
    [anon_sym_next_DASHsibling] = ACTIONS(128),
    [anon_sym_first_DASHin] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_PERCENT] = ACTIONS(126),
    [anon_sym_mod] = ACTIONS(128),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_has_DASHflag] = ACTIONS(128),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(128),
    [anon_sym_loc] = ACTIONS(128),
    [anon_sym_prop] = ACTIONS(128),
    [anon_sym_desc] = ACTIONS(128),
    [anon_sym_flags] = ACTIONS(128),
    [anon_sym_visible_QMARK] = ACTIONS(128),
    [anon_sym_held_QMARK] = ACTIONS(128),
    [anon_sym_here_QMARK] = ACTIONS(128),
    [anon_sym_in_QMARK] = ACTIONS(128),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(128),
    [anon_sym_inside_QMARK] = ACTIONS(128),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(128),
    [anon_sym_at_QMARK] = ACTIONS(128),
    [anon_sym_room_QMARK] = ACTIONS(128),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(128),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(128),
    [anon_sym_inventory] = ACTIONS(128),
    [anon_sym_contents] = ACTIONS(128),
    [anon_sym_exit_QMARK] = ACTIONS(128),
    [anon_sym_exit_DASHto] = ACTIONS(128),
    [anon_sym_exit_DASHvia] = ACTIONS(128),
    [anon_sym_queued_QMARK] = ACTIONS(128),
    [anon_sym_eq_QMARK] = ACTIONS(128),
    [anon_sym_nil_QMARK] = ACTIONS(128),
    [anon_sym_empty_QMARK] = ACTIONS(128),
    [anon_sym_str] = ACTIONS(128),
    [anon_sym_join] = ACTIONS(128),
    [anon_sym_nth] = ACTIONS(128),
    [anon_sym_list_DASHset] = ACTIONS(128),
    [anon_sym_first] = ACTIONS(128),
    [anon_sym_rest] = ACTIONS(128),
    [anon_sym_count] = ACTIONS(128),
    [anon_sym_cons] = ACTIONS(128),
    [anon_sym_concat] = ACTIONS(128),
    [anon_sym_map] = ACTIONS(128),
    [anon_sym_filter] = ACTIONS(128),
    [anon_sym_remove] = ACTIONS(128),
    [anon_sym_keep] = ACTIONS(128),
    [anon_sym_reduce] = ACTIONS(128),
    [anon_sym_outcome_QMARK] = ACTIONS(128),
    [anon_sym_reason_QMARK] = ACTIONS(128),
    [anon_sym_context_QMARK] = ACTIONS(128),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(128),
    [anon_sym_loc_QMARK] = ACTIONS(128),
    [anon_sym_prop_QMARK] = ACTIONS(128),
    [anon_sym_global_QMARK] = ACTIONS(128),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(128),
    [anon_sym_move_BANG] = ACTIONS(128),
    [anon_sym_take_BANG] = ACTIONS(128),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(128),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(128),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(128),
    [anon_sym_set_BANG] = ACTIONS(128),
    [anon_sym_inc_BANG] = ACTIONS(128),
    [anon_sym_queue_BANG] = ACTIONS(128),
    [anon_sym_dequeue_BANG] = ACTIONS(128),
    [anon_sym_get_DASHprop] = ACTIONS(128),
    [anon_sym_put_DASHprop] = ACTIONS(128),
    [anon_sym_test] = ACTIONS(128),
    [anon_sym_test_DASHsequence] = ACTIONS(128),
    [anon_sym_test_DASHgroup] = ACTIONS(128),
    [anon_sym_step] = ACTIONS(128),
    [anon_sym_north] = ACTIONS(128),
    [anon_sym_south] = ACTIONS(128),
    [anon_sym_east] = ACTIONS(128),
    [anon_sym_west] = ACTIONS(128),
    [anon_sym_up] = ACTIONS(128),
    [anon_sym_down] = ACTIONS(128),
    [anon_sym_northeast] = ACTIONS(128),
    [anon_sym_northwest] = ACTIONS(128),
    [anon_sym_southeast] = ACTIONS(128),
    [anon_sym_southwest] = ACTIONS(128),
    [anon_sym_in] = ACTIONS(128),
    [anon_sym_out] = ACTIONS(128),
    [anon_sym_land] = ACTIONS(128),
    [sym_flag] = ACTIONS(128),
    [anon_sym_enter] = ACTIONS(128),
    [anon_sym_leave] = ACTIONS(128),
    [anon_sym_through] = ACTIONS(128),
    [anon_sym_take] = ACTIONS(128),
    [anon_sym_drop] = ACTIONS(128),
    [anon_sym_examine] = ACTIONS(128),
    [anon_sym_open] = ACTIONS(128),
    [anon_sym_close] = ACTIONS(128),
    [anon_sym_lock] = ACTIONS(128),
    [anon_sym_unlock] = ACTIONS(128),
    [anon_sym_read] = ACTIONS(128),
    [anon_sym_turn_DASHon] = ACTIONS(128),
    [anon_sym_turn_DASHoff] = ACTIONS(128),
    [anon_sym_plug] = ACTIONS(128),
    [anon_sym_unplug] = ACTIONS(128),
    [anon_sym_attack] = ACTIONS(128),
    [anon_sym_push] = ACTIONS(128),
    [anon_sym_pull] = ACTIONS(128),
    [anon_sym_touch] = ACTIONS(128),
    [anon_sym_rub] = ACTIONS(128),
    [anon_sym_click] = ACTIONS(128),
    [anon_sym_point] = ACTIONS(128),
    [anon_sym_eat] = ACTIONS(128),
    [anon_sym_drink] = ACTIONS(128),
    [anon_sym_wear] = ACTIONS(128),
    [anon_sym_climb] = ACTIONS(128),
    [anon_sym_sit] = ACTIONS(128),
    [anon_sym_stand] = ACTIONS(128),
    [anon_sym_smell] = ACTIONS(128),
    [anon_sym_listen] = ACTIONS(128),
    [anon_sym_ask_DASHabout] = ACTIONS(128),
    [anon_sym_tell_DASHabout] = ACTIONS(128),
    [anon_sym_give] = ACTIONS(128),
    [anon_sym_trade] = ACTIONS(128),
    [anon_sym_ask_DASHfor] = ACTIONS(128),
    [anon_sym_help] = ACTIONS(128),
    [anon_sym_put_DASHon] = ACTIONS(128),
    [anon_sym_put_DASHin] = ACTIONS(128),
    [anon_sym_on_DASHenter] = ACTIONS(128),
    [anon_sym_before_DASHaction] = ACTIONS(128),
    [anon_sym_process_DASHevents] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(128),
    [anon_sym_false] = ACTIONS(128),
    [anon_sym_nil] = ACTIONS(128),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [sym_number] = ACTIONS(126),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [sym_entity_ref] = ACTIONS(130),
    [sym_binding_ref] = ACTIONS(130),
    [sym_keyword] = ACTIONS(130),
    [anon_sym_world] = ACTIONS(132),
    [anon_sym_room] = ACTIONS(132),
    [anon_sym_object] = ACTIONS(132),
    [anon_sym_event] = ACTIONS(132),
    [anon_sym_victory] = ACTIONS(132),
    [anon_sym_defeat] = ACTIONS(132),
    [anon_sym_default] = ACTIONS(132),
    [anon_sym_globals] = ACTIONS(132),
    [anon_sym_defsyntax] = ACTIONS(132),
    [anon_sym_defglobal] = ACTIONS(132),
    [anon_sym_defroutine] = ACTIONS(132),
    [anon_sym_fn] = ACTIONS(132),
    [anon_sym_lambda] = ACTIONS(132),
    [anon_sym_defn] = ACTIONS(132),
    [anon_sym_def] = ACTIONS(132),
    [anon_sym_cond] = ACTIONS(132),
    [anon_sym_if] = ACTIONS(132),
    [anon_sym_let] = ACTIONS(132),
    [anon_sym_match] = ACTIONS(132),
    [anon_sym_condp] = ACTIONS(132),
    [anon_sym_cond_DASH_GT] = ACTIONS(132),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(130),
    [anon_sym_and] = ACTIONS(132),
    [anon_sym_or] = ACTIONS(132),
    [anon_sym_not] = ACTIONS(132),
    [anon_sym_any] = ACTIONS(132),
    [anon_sym_all] = ACTIONS(132),
    [anon_sym_seq] = ACTIONS(132),
    [anon_sym_when] = ACTIONS(132),
    [anon_sym_quote] = ACTIONS(132),
    [anon_sym_list] = ACTIONS(132),
    [anon_sym_range] = ACTIONS(132),
    [anon_sym_some] = ACTIONS(132),
    [anon_sym_every_QMARK] = ACTIONS(132),
    [anon_sym_for] = ACTIONS(132),
    [anon_sym_doseq] = ACTIONS(132),
    [anon_sym_success] = ACTIONS(132),
    [anon_sym_blocked] = ACTIONS(132),
    [anon_sym_redirect] = ACTIONS(132),
    [anon_sym_outcome] = ACTIONS(132),
    [anon_sym_go] = ACTIONS(132),
    [anon_sym_do] = ACTIONS(132),
    [anon_sym_tell] = ACTIONS(132),
    [anon_sym_random] = ACTIONS(132),
    [anon_sym_first_DASHchild] = ACTIONS(132),
    [anon_sym_next_DASHsibling] = ACTIONS(132),
    [anon_sym_first_DASHin] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(130),
    [anon_sym_mod] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_has_DASHflag] = ACTIONS(132),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(132),
    [anon_sym_loc] = ACTIONS(132),
    [anon_sym_prop] = ACTIONS(132),
    [anon_sym_desc] = ACTIONS(132),
    [anon_sym_flags] = ACTIONS(132),
    [anon_sym_visible_QMARK] = ACTIONS(132),
    [anon_sym_held_QMARK] = ACTIONS(132),
    [anon_sym_here_QMARK] = ACTIONS(132),
    [anon_sym_in_QMARK] = ACTIONS(132),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(132),
    [anon_sym_inside_QMARK] = ACTIONS(132),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(132),
    [anon_sym_at_QMARK] = ACTIONS(132),
    [anon_sym_room_QMARK] = ACTIONS(132),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(132),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(132),
    [anon_sym_inventory] = ACTIONS(132),
    [anon_sym_contents] = ACTIONS(132),
    [anon_sym_exit_QMARK] = ACTIONS(132),
    [anon_sym_exit_DASHto] = ACTIONS(132),
    [anon_sym_exit_DASHvia] = ACTIONS(132),
    [anon_sym_queued_QMARK] = ACTIONS(132),
    [anon_sym_eq_QMARK] = ACTIONS(132),
    [anon_sym_nil_QMARK] = ACTIONS(132),
    [anon_sym_empty_QMARK] = ACTIONS(132),
    [anon_sym_str] = ACTIONS(132),
    [anon_sym_join] = ACTIONS(132),
    [anon_sym_nth] = ACTIONS(132),
    [anon_sym_list_DASHset] = ACTIONS(132),
    [anon_sym_first] = ACTIONS(132),
    [anon_sym_rest] = ACTIONS(132),
    [anon_sym_count] = ACTIONS(132),
    [anon_sym_cons] = ACTIONS(132),
    [anon_sym_concat] = ACTIONS(132),
    [anon_sym_map] = ACTIONS(132),
    [anon_sym_filter] = ACTIONS(132),
    [anon_sym_remove] = ACTIONS(132),
    [anon_sym_keep] = ACTIONS(132),
    [anon_sym_reduce] = ACTIONS(132),
    [anon_sym_outcome_QMARK] = ACTIONS(132),
    [anon_sym_reason_QMARK] = ACTIONS(132),
    [anon_sym_context_QMARK] = ACTIONS(132),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(132),
    [anon_sym_loc_QMARK] = ACTIONS(132),
    [anon_sym_prop_QMARK] = ACTIONS(132),
    [anon_sym_global_QMARK] = ACTIONS(132),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(132),
    [anon_sym_move_BANG] = ACTIONS(132),
    [anon_sym_take_BANG] = ACTIONS(132),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(132),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(132),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(132),
    [anon_sym_set_BANG] = ACTIONS(132),
    [anon_sym_inc_BANG] = ACTIONS(132),
    [anon_sym_queue_BANG] = ACTIONS(132),
    [anon_sym_dequeue_BANG] = ACTIONS(132),
    [anon_sym_get_DASHprop] = ACTIONS(132),
    [anon_sym_put_DASHprop] = ACTIONS(132),
    [anon_sym_test] = ACTIONS(132),
    [anon_sym_test_DASHsequence] = ACTIONS(132),
    [anon_sym_test_DASHgroup] = ACTIONS(132),
    [anon_sym_step] = ACTIONS(132),
    [anon_sym_north] = ACTIONS(132),
    [anon_sym_south] = ACTIONS(132),
    [anon_sym_east] = ACTIONS(132),
    [anon_sym_west] = ACTIONS(132),
    [anon_sym_up] = ACTIONS(132),
    [anon_sym_down] = ACTIONS(132),
    [anon_sym_northeast] = ACTIONS(132),
    [anon_sym_northwest] = ACTIONS(132),
    [anon_sym_southeast] = ACTIONS(132),
    [anon_sym_southwest] = ACTIONS(132),
    [anon_sym_in] = ACTIONS(132),
    [anon_sym_out] = ACTIONS(132),
    [anon_sym_land] = ACTIONS(132),
    [sym_flag] = ACTIONS(132),
    [anon_sym_enter] = ACTIONS(132),
    [anon_sym_leave] = ACTIONS(132),
    [anon_sym_through] = ACTIONS(132),
    [anon_sym_take] = ACTIONS(132),
    [anon_sym_drop] = ACTIONS(132),
    [anon_sym_examine] = ACTIONS(132),
    [anon_sym_open] = ACTIONS(132),
    [anon_sym_close] = ACTIONS(132),
    [anon_sym_lock] = ACTIONS(132),
    [anon_sym_unlock] = ACTIONS(132),
    [anon_sym_read] = ACTIONS(132),
    [anon_sym_turn_DASHon] = ACTIONS(132),
    [anon_sym_turn_DASHoff] = ACTIONS(132),
    [anon_sym_plug] = ACTIONS(132),
    [anon_sym_unplug] = ACTIONS(132),
    [anon_sym_attack] = ACTIONS(132),
    [anon_sym_push] = ACTIONS(132),
    [anon_sym_pull] = ACTIONS(132),
    [anon_sym_touch] = ACTIONS(132),
    [anon_sym_rub] = ACTIONS(132),
    [anon_sym_click] = ACTIONS(132),
    [anon_sym_point] = ACTIONS(132),
    [anon_sym_eat] = ACTIONS(132),
    [anon_sym_drink] = ACTIONS(132),
    [anon_sym_wear] = ACTIONS(132),
    [anon_sym_climb] = ACTIONS(132),
    [anon_sym_sit] = ACTIONS(132),
    [anon_sym_stand] = ACTIONS(132),
    [anon_sym_smell] = ACTIONS(132),
    [anon_sym_listen] = ACTIONS(132),
    [anon_sym_ask_DASHabout] = ACTIONS(132),
    [anon_sym_tell_DASHabout] = ACTIONS(132),
    [anon_sym_give] = ACTIONS(132),
    [anon_sym_trade] = ACTIONS(132),
    [anon_sym_ask_DASHfor] = ACTIONS(132),
    [anon_sym_help] = ACTIONS(132),
    [anon_sym_put_DASHon] = ACTIONS(132),
    [anon_sym_put_DASHin] = ACTIONS(132),
    [anon_sym_on_DASHenter] = ACTIONS(132),
    [anon_sym_before_DASHaction] = ACTIONS(132),
    [anon_sym_process_DASHevents] = ACTIONS(132),
    [anon_sym_true] = ACTIONS(132),
    [anon_sym_false] = ACTIONS(132),
    [anon_sym_nil] = ACTIONS(132),
    [sym_identifier] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [sym_number] = ACTIONS(130),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [sym_entity_ref] = ACTIONS(134),
    [sym_binding_ref] = ACTIONS(134),
    [sym_keyword] = ACTIONS(134),
    [anon_sym_world] = ACTIONS(136),
    [anon_sym_room] = ACTIONS(136),
    [anon_sym_object] = ACTIONS(136),
    [anon_sym_event] = ACTIONS(136),
    [anon_sym_victory] = ACTIONS(136),
    [anon_sym_defeat] = ACTIONS(136),
    [anon_sym_default] = ACTIONS(136),
    [anon_sym_globals] = ACTIONS(136),
    [anon_sym_defsyntax] = ACTIONS(136),
    [anon_sym_defglobal] = ACTIONS(136),
    [anon_sym_defroutine] = ACTIONS(136),
    [anon_sym_fn] = ACTIONS(136),
    [anon_sym_lambda] = ACTIONS(136),
    [anon_sym_defn] = ACTIONS(136),
    [anon_sym_def] = ACTIONS(136),
    [anon_sym_cond] = ACTIONS(136),
    [anon_sym_if] = ACTIONS(136),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_match] = ACTIONS(136),
    [anon_sym_condp] = ACTIONS(136),
    [anon_sym_cond_DASH_GT] = ACTIONS(136),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(134),
    [anon_sym_and] = ACTIONS(136),
    [anon_sym_or] = ACTIONS(136),
    [anon_sym_not] = ACTIONS(136),
    [anon_sym_any] = ACTIONS(136),
    [anon_sym_all] = ACTIONS(136),
    [anon_sym_seq] = ACTIONS(136),
    [anon_sym_when] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_list] = ACTIONS(136),
    [anon_sym_range] = ACTIONS(136),
    [anon_sym_some] = ACTIONS(136),
    [anon_sym_every_QMARK] = ACTIONS(136),
    [anon_sym_for] = ACTIONS(136),
    [anon_sym_doseq] = ACTIONS(136),
    [anon_sym_success] = ACTIONS(136),
    [anon_sym_blocked] = ACTIONS(136),
    [anon_sym_redirect] = ACTIONS(136),
    [anon_sym_outcome] = ACTIONS(136),
    [anon_sym_go] = ACTIONS(136),
    [anon_sym_do] = ACTIONS(136),
    [anon_sym_tell] = ACTIONS(136),
    [anon_sym_random] = ACTIONS(136),
    [anon_sym_first_DASHchild] = ACTIONS(136),
    [anon_sym_next_DASHsibling] = ACTIONS(136),
    [anon_sym_first_DASHin] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [anon_sym_mod] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_GT_EQ] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(134),
    [anon_sym_has_DASHflag] = ACTIONS(136),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(136),
    [anon_sym_loc] = ACTIONS(136),
    [anon_sym_prop] = ACTIONS(136),
    [anon_sym_desc] = ACTIONS(136),
    [anon_sym_flags] = ACTIONS(136),
    [anon_sym_visible_QMARK] = ACTIONS(136),
    [anon_sym_held_QMARK] = ACTIONS(136),
    [anon_sym_here_QMARK] = ACTIONS(136),
    [anon_sym_in_QMARK] = ACTIONS(136),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(136),
    [anon_sym_inside_QMARK] = ACTIONS(136),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(136),
    [anon_sym_at_QMARK] = ACTIONS(136),
    [anon_sym_room_QMARK] = ACTIONS(136),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(136),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(136),
    [anon_sym_inventory] = ACTIONS(136),
    [anon_sym_contents] = ACTIONS(136),
    [anon_sym_exit_QMARK] = ACTIONS(136),
    [anon_sym_exit_DASHto] = ACTIONS(136),
    [anon_sym_exit_DASHvia] = ACTIONS(136),
    [anon_sym_queued_QMARK] = ACTIONS(136),
    [anon_sym_eq_QMARK] = ACTIONS(136),
    [anon_sym_nil_QMARK] = ACTIONS(136),
    [anon_sym_empty_QMARK] = ACTIONS(136),
    [anon_sym_str] = ACTIONS(136),
    [anon_sym_join] = ACTIONS(136),
    [anon_sym_nth] = ACTIONS(136),
    [anon_sym_list_DASHset] = ACTIONS(136),
    [anon_sym_first] = ACTIONS(136),
    [anon_sym_rest] = ACTIONS(136),
    [anon_sym_count] = ACTIONS(136),
    [anon_sym_cons] = ACTIONS(136),
    [anon_sym_concat] = ACTIONS(136),
    [anon_sym_map] = ACTIONS(136),
    [anon_sym_filter] = ACTIONS(136),
    [anon_sym_remove] = ACTIONS(136),
    [anon_sym_keep] = ACTIONS(136),
    [anon_sym_reduce] = ACTIONS(136),
    [anon_sym_outcome_QMARK] = ACTIONS(136),
    [anon_sym_reason_QMARK] = ACTIONS(136),
    [anon_sym_context_QMARK] = ACTIONS(136),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(136),
    [anon_sym_loc_QMARK] = ACTIONS(136),
    [anon_sym_prop_QMARK] = ACTIONS(136),
    [anon_sym_global_QMARK] = ACTIONS(136),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(136),
    [anon_sym_move_BANG] = ACTIONS(136),
    [anon_sym_take_BANG] = ACTIONS(136),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(136),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(136),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(136),
    [anon_sym_set_BANG] = ACTIONS(136),
    [anon_sym_inc_BANG] = ACTIONS(136),
    [anon_sym_queue_BANG] = ACTIONS(136),
    [anon_sym_dequeue_BANG] = ACTIONS(136),
    [anon_sym_get_DASHprop] = ACTIONS(136),
    [anon_sym_put_DASHprop] = ACTIONS(136),
    [anon_sym_test] = ACTIONS(136),
    [anon_sym_test_DASHsequence] = ACTIONS(136),
    [anon_sym_test_DASHgroup] = ACTIONS(136),
    [anon_sym_step] = ACTIONS(136),
    [anon_sym_north] = ACTIONS(136),
    [anon_sym_south] = ACTIONS(136),
    [anon_sym_east] = ACTIONS(136),
    [anon_sym_west] = ACTIONS(136),
    [anon_sym_up] = ACTIONS(136),
    [anon_sym_down] = ACTIONS(136),
    [anon_sym_northeast] = ACTIONS(136),
    [anon_sym_northwest] = ACTIONS(136),
    [anon_sym_southeast] = ACTIONS(136),
    [anon_sym_southwest] = ACTIONS(136),
    [anon_sym_in] = ACTIONS(136),
    [anon_sym_out] = ACTIONS(136),
    [anon_sym_land] = ACTIONS(136),
    [sym_flag] = ACTIONS(136),
    [anon_sym_enter] = ACTIONS(136),
    [anon_sym_leave] = ACTIONS(136),
    [anon_sym_through] = ACTIONS(136),
    [anon_sym_take] = ACTIONS(136),
    [anon_sym_drop] = ACTIONS(136),
    [anon_sym_examine] = ACTIONS(136),
    [anon_sym_open] = ACTIONS(136),
    [anon_sym_close] = ACTIONS(136),
    [anon_sym_lock] = ACTIONS(136),
    [anon_sym_unlock] = ACTIONS(136),
    [anon_sym_read] = ACTIONS(136),
    [anon_sym_turn_DASHon] = ACTIONS(136),
    [anon_sym_turn_DASHoff] = ACTIONS(136),
    [anon_sym_plug] = ACTIONS(136),
    [anon_sym_unplug] = ACTIONS(136),
    [anon_sym_attack] = ACTIONS(136),
    [anon_sym_push] = ACTIONS(136),
    [anon_sym_pull] = ACTIONS(136),
    [anon_sym_touch] = ACTIONS(136),
    [anon_sym_rub] = ACTIONS(136),
    [anon_sym_click] = ACTIONS(136),
    [anon_sym_point] = ACTIONS(136),
    [anon_sym_eat] = ACTIONS(136),
    [anon_sym_drink] = ACTIONS(136),
    [anon_sym_wear] = ACTIONS(136),
    [anon_sym_climb] = ACTIONS(136),
    [anon_sym_sit] = ACTIONS(136),
    [anon_sym_stand] = ACTIONS(136),
    [anon_sym_smell] = ACTIONS(136),
    [anon_sym_listen] = ACTIONS(136),
    [anon_sym_ask_DASHabout] = ACTIONS(136),
    [anon_sym_tell_DASHabout] = ACTIONS(136),
    [anon_sym_give] = ACTIONS(136),
    [anon_sym_trade] = ACTIONS(136),
    [anon_sym_ask_DASHfor] = ACTIONS(136),
    [anon_sym_help] = ACTIONS(136),
    [anon_sym_put_DASHon] = ACTIONS(136),
    [anon_sym_put_DASHin] = ACTIONS(136),
    [anon_sym_on_DASHenter] = ACTIONS(136),
    [anon_sym_before_DASHaction] = ACTIONS(136),
    [anon_sym_process_DASHevents] = ACTIONS(136),
    [anon_sym_true] = ACTIONS(136),
    [anon_sym_false] = ACTIONS(136),
    [anon_sym_nil] = ACTIONS(136),
    [sym_identifier] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym_number] = ACTIONS(134),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(138),
    [sym_entity_ref] = ACTIONS(138),
    [sym_binding_ref] = ACTIONS(138),
    [sym_keyword] = ACTIONS(138),
    [anon_sym_world] = ACTIONS(140),
    [anon_sym_room] = ACTIONS(140),
    [anon_sym_object] = ACTIONS(140),
    [anon_sym_event] = ACTIONS(140),
    [anon_sym_victory] = ACTIONS(140),
    [anon_sym_defeat] = ACTIONS(140),
    [anon_sym_default] = ACTIONS(140),
    [anon_sym_globals] = ACTIONS(140),
    [anon_sym_defsyntax] = ACTIONS(140),
    [anon_sym_defglobal] = ACTIONS(140),
    [anon_sym_defroutine] = ACTIONS(140),
    [anon_sym_fn] = ACTIONS(140),
    [anon_sym_lambda] = ACTIONS(140),
    [anon_sym_defn] = ACTIONS(140),
    [anon_sym_def] = ACTIONS(140),
    [anon_sym_cond] = ACTIONS(140),
    [anon_sym_if] = ACTIONS(140),
    [anon_sym_let] = ACTIONS(140),
    [anon_sym_match] = ACTIONS(140),
    [anon_sym_condp] = ACTIONS(140),
    [anon_sym_cond_DASH_GT] = ACTIONS(140),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(138),
    [anon_sym_and] = ACTIONS(140),
    [anon_sym_or] = ACTIONS(140),
    [anon_sym_not] = ACTIONS(140),
    [anon_sym_any] = ACTIONS(140),
    [anon_sym_all] = ACTIONS(140),
    [anon_sym_seq] = ACTIONS(140),
    [anon_sym_when] = ACTIONS(140),
    [anon_sym_quote] = ACTIONS(140),
    [anon_sym_list] = ACTIONS(140),
    [anon_sym_range] = ACTIONS(140),
    [anon_sym_some] = ACTIONS(140),
    [anon_sym_every_QMARK] = ACTIONS(140),
    [anon_sym_for] = ACTIONS(140),
    [anon_sym_doseq] = ACTIONS(140),
    [anon_sym_success] = ACTIONS(140),
    [anon_sym_blocked] = ACTIONS(140),
    [anon_sym_redirect] = ACTIONS(140),
    [anon_sym_outcome] = ACTIONS(140),
    [anon_sym_go] = ACTIONS(140),
    [anon_sym_do] = ACTIONS(140),
    [anon_sym_tell] = ACTIONS(140),
    [anon_sym_random] = ACTIONS(140),
    [anon_sym_first_DASHchild] = ACTIONS(140),
    [anon_sym_next_DASHsibling] = ACTIONS(140),
    [anon_sym_first_DASHin] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_mod] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_has_DASHflag] = ACTIONS(140),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(140),
    [anon_sym_loc] = ACTIONS(140),
    [anon_sym_prop] = ACTIONS(140),
    [anon_sym_desc] = ACTIONS(140),
    [anon_sym_flags] = ACTIONS(140),
    [anon_sym_visible_QMARK] = ACTIONS(140),
    [anon_sym_held_QMARK] = ACTIONS(140),
    [anon_sym_here_QMARK] = ACTIONS(140),
    [anon_sym_in_QMARK] = ACTIONS(140),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(140),
    [anon_sym_inside_QMARK] = ACTIONS(140),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(140),
    [anon_sym_at_QMARK] = ACTIONS(140),
    [anon_sym_room_QMARK] = ACTIONS(140),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(140),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(140),
    [anon_sym_inventory] = ACTIONS(140),
    [anon_sym_contents] = ACTIONS(140),
    [anon_sym_exit_QMARK] = ACTIONS(140),
    [anon_sym_exit_DASHto] = ACTIONS(140),
    [anon_sym_exit_DASHvia] = ACTIONS(140),
    [anon_sym_queued_QMARK] = ACTIONS(140),
    [anon_sym_eq_QMARK] = ACTIONS(140),
    [anon_sym_nil_QMARK] = ACTIONS(140),
    [anon_sym_empty_QMARK] = ACTIONS(140),
    [anon_sym_str] = ACTIONS(140),
    [anon_sym_join] = ACTIONS(140),
    [anon_sym_nth] = ACTIONS(140),
    [anon_sym_list_DASHset] = ACTIONS(140),
    [anon_sym_first] = ACTIONS(140),
    [anon_sym_rest] = ACTIONS(140),
    [anon_sym_count] = ACTIONS(140),
    [anon_sym_cons] = ACTIONS(140),
    [anon_sym_concat] = ACTIONS(140),
    [anon_sym_map] = ACTIONS(140),
    [anon_sym_filter] = ACTIONS(140),
    [anon_sym_remove] = ACTIONS(140),
    [anon_sym_keep] = ACTIONS(140),
    [anon_sym_reduce] = ACTIONS(140),
    [anon_sym_outcome_QMARK] = ACTIONS(140),
    [anon_sym_reason_QMARK] = ACTIONS(140),
    [anon_sym_context_QMARK] = ACTIONS(140),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(140),
    [anon_sym_loc_QMARK] = ACTIONS(140),
    [anon_sym_prop_QMARK] = ACTIONS(140),
    [anon_sym_global_QMARK] = ACTIONS(140),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(140),
    [anon_sym_move_BANG] = ACTIONS(140),
    [anon_sym_take_BANG] = ACTIONS(140),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(140),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(140),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(140),
    [anon_sym_set_BANG] = ACTIONS(140),
    [anon_sym_inc_BANG] = ACTIONS(140),
    [anon_sym_queue_BANG] = ACTIONS(140),
    [anon_sym_dequeue_BANG] = ACTIONS(140),
    [anon_sym_get_DASHprop] = ACTIONS(140),
    [anon_sym_put_DASHprop] = ACTIONS(140),
    [anon_sym_test] = ACTIONS(140),
    [anon_sym_test_DASHsequence] = ACTIONS(140),
    [anon_sym_test_DASHgroup] = ACTIONS(140),
    [anon_sym_step] = ACTIONS(140),
    [anon_sym_north] = ACTIONS(140),
    [anon_sym_south] = ACTIONS(140),
    [anon_sym_east] = ACTIONS(140),
    [anon_sym_west] = ACTIONS(140),
    [anon_sym_up] = ACTIONS(140),
    [anon_sym_down] = ACTIONS(140),
    [anon_sym_northeast] = ACTIONS(140),
    [anon_sym_northwest] = ACTIONS(140),
    [anon_sym_southeast] = ACTIONS(140),
    [anon_sym_southwest] = ACTIONS(140),
    [anon_sym_in] = ACTIONS(140),
    [anon_sym_out] = ACTIONS(140),
    [anon_sym_land] = ACTIONS(140),
    [sym_flag] = ACTIONS(140),
    [anon_sym_enter] = ACTIONS(140),
    [anon_sym_leave] = ACTIONS(140),
    [anon_sym_through] = ACTIONS(140),
    [anon_sym_take] = ACTIONS(140),
    [anon_sym_drop] = ACTIONS(140),
    [anon_sym_examine] = ACTIONS(140),
    [anon_sym_open] = ACTIONS(140),
    [anon_sym_close] = ACTIONS(140),
    [anon_sym_lock] = ACTIONS(140),
    [anon_sym_unlock] = ACTIONS(140),
    [anon_sym_read] = ACTIONS(140),
    [anon_sym_turn_DASHon] = ACTIONS(140),
    [anon_sym_turn_DASHoff] = ACTIONS(140),
    [anon_sym_plug] = ACTIONS(140),
    [anon_sym_unplug] = ACTIONS(140),
    [anon_sym_attack] = ACTIONS(140),
    [anon_sym_push] = ACTIONS(140),
    [anon_sym_pull] = ACTIONS(140),
    [anon_sym_touch] = ACTIONS(140),
    [anon_sym_rub] = ACTIONS(140),
    [anon_sym_click] = ACTIONS(140),
    [anon_sym_point] = ACTIONS(140),
    [anon_sym_eat] = ACTIONS(140),
    [anon_sym_drink] = ACTIONS(140),
    [anon_sym_wear] = ACTIONS(140),
    [anon_sym_climb] = ACTIONS(140),
    [anon_sym_sit] = ACTIONS(140),
    [anon_sym_stand] = ACTIONS(140),
    [anon_sym_smell] = ACTIONS(140),
    [anon_sym_listen] = ACTIONS(140),
    [anon_sym_ask_DASHabout] = ACTIONS(140),
    [anon_sym_tell_DASHabout] = ACTIONS(140),
    [anon_sym_give] = ACTIONS(140),
    [anon_sym_trade] = ACTIONS(140),
    [anon_sym_ask_DASHfor] = ACTIONS(140),
    [anon_sym_help] = ACTIONS(140),
    [anon_sym_put_DASHon] = ACTIONS(140),
    [anon_sym_put_DASHin] = ACTIONS(140),
    [anon_sym_on_DASHenter] = ACTIONS(140),
    [anon_sym_before_DASHaction] = ACTIONS(140),
    [anon_sym_process_DASHevents] = ACTIONS(140),
    [anon_sym_true] = ACTIONS(140),
    [anon_sym_false] = ACTIONS(140),
    [anon_sym_nil] = ACTIONS(140),
    [sym_identifier] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_number] = ACTIONS(138),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(142),
    [sym_entity_ref] = ACTIONS(142),
    [sym_binding_ref] = ACTIONS(142),
    [sym_keyword] = ACTIONS(142),
    [anon_sym_world] = ACTIONS(144),
    [anon_sym_room] = ACTIONS(144),
    [anon_sym_object] = ACTIONS(144),
    [anon_sym_event] = ACTIONS(144),
    [anon_sym_victory] = ACTIONS(144),
    [anon_sym_defeat] = ACTIONS(144),
    [anon_sym_default] = ACTIONS(144),
    [anon_sym_globals] = ACTIONS(144),
    [anon_sym_defsyntax] = ACTIONS(144),
    [anon_sym_defglobal] = ACTIONS(144),
    [anon_sym_defroutine] = ACTIONS(144),
    [anon_sym_fn] = ACTIONS(144),
    [anon_sym_lambda] = ACTIONS(144),
    [anon_sym_defn] = ACTIONS(144),
    [anon_sym_def] = ACTIONS(144),
    [anon_sym_cond] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(144),
    [anon_sym_let] = ACTIONS(144),
    [anon_sym_match] = ACTIONS(144),
    [anon_sym_condp] = ACTIONS(144),
    [anon_sym_cond_DASH_GT] = ACTIONS(144),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(142),
    [anon_sym_and] = ACTIONS(144),
    [anon_sym_or] = ACTIONS(144),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_any] = ACTIONS(144),
    [anon_sym_all] = ACTIONS(144),
    [anon_sym_seq] = ACTIONS(144),
    [anon_sym_when] = ACTIONS(144),
    [anon_sym_quote] = ACTIONS(144),
    [anon_sym_list] = ACTIONS(144),
    [anon_sym_range] = ACTIONS(144),
    [anon_sym_some] = ACTIONS(144),
    [anon_sym_every_QMARK] = ACTIONS(144),
    [anon_sym_for] = ACTIONS(144),
    [anon_sym_doseq] = ACTIONS(144),
    [anon_sym_success] = ACTIONS(144),
    [anon_sym_blocked] = ACTIONS(144),
    [anon_sym_redirect] = ACTIONS(144),
    [anon_sym_outcome] = ACTIONS(144),
    [anon_sym_go] = ACTIONS(144),
    [anon_sym_do] = ACTIONS(144),
    [anon_sym_tell] = ACTIONS(144),
    [anon_sym_random] = ACTIONS(144),
    [anon_sym_first_DASHchild] = ACTIONS(144),
    [anon_sym_next_DASHsibling] = ACTIONS(144),
    [anon_sym_first_DASHin] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym_STAR] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(142),
    [anon_sym_mod] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(142),
    [anon_sym_LT_EQ] = ACTIONS(142),
    [anon_sym_has_DASHflag] = ACTIONS(144),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(144),
    [anon_sym_loc] = ACTIONS(144),
    [anon_sym_prop] = ACTIONS(144),
    [anon_sym_desc] = ACTIONS(144),
    [anon_sym_flags] = ACTIONS(144),
    [anon_sym_visible_QMARK] = ACTIONS(144),
    [anon_sym_held_QMARK] = ACTIONS(144),
    [anon_sym_here_QMARK] = ACTIONS(144),
    [anon_sym_in_QMARK] = ACTIONS(144),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(144),
    [anon_sym_inside_QMARK] = ACTIONS(144),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(144),
    [anon_sym_at_QMARK] = ACTIONS(144),
    [anon_sym_room_QMARK] = ACTIONS(144),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(144),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(144),
    [anon_sym_inventory] = ACTIONS(144),
    [anon_sym_contents] = ACTIONS(144),
    [anon_sym_exit_QMARK] = ACTIONS(144),
    [anon_sym_exit_DASHto] = ACTIONS(144),
    [anon_sym_exit_DASHvia] = ACTIONS(144),
    [anon_sym_queued_QMARK] = ACTIONS(144),
    [anon_sym_eq_QMARK] = ACTIONS(144),
    [anon_sym_nil_QMARK] = ACTIONS(144),
    [anon_sym_empty_QMARK] = ACTIONS(144),
    [anon_sym_str] = ACTIONS(144),
    [anon_sym_join] = ACTIONS(144),
    [anon_sym_nth] = ACTIONS(144),
    [anon_sym_list_DASHset] = ACTIONS(144),
    [anon_sym_first] = ACTIONS(144),
    [anon_sym_rest] = ACTIONS(144),
    [anon_sym_count] = ACTIONS(144),
    [anon_sym_cons] = ACTIONS(144),
    [anon_sym_concat] = ACTIONS(144),
    [anon_sym_map] = ACTIONS(144),
    [anon_sym_filter] = ACTIONS(144),
    [anon_sym_remove] = ACTIONS(144),
    [anon_sym_keep] = ACTIONS(144),
    [anon_sym_reduce] = ACTIONS(144),
    [anon_sym_outcome_QMARK] = ACTIONS(144),
    [anon_sym_reason_QMARK] = ACTIONS(144),
    [anon_sym_context_QMARK] = ACTIONS(144),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(144),
    [anon_sym_loc_QMARK] = ACTIONS(144),
    [anon_sym_prop_QMARK] = ACTIONS(144),
    [anon_sym_global_QMARK] = ACTIONS(144),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(144),
    [anon_sym_move_BANG] = ACTIONS(144),
    [anon_sym_take_BANG] = ACTIONS(144),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(144),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(144),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(144),
    [anon_sym_set_BANG] = ACTIONS(144),
    [anon_sym_inc_BANG] = ACTIONS(144),
    [anon_sym_queue_BANG] = ACTIONS(144),
    [anon_sym_dequeue_BANG] = ACTIONS(144),
    [anon_sym_get_DASHprop] = ACTIONS(144),
    [anon_sym_put_DASHprop] = ACTIONS(144),
    [anon_sym_test] = ACTIONS(144),
    [anon_sym_test_DASHsequence] = ACTIONS(144),
    [anon_sym_test_DASHgroup] = ACTIONS(144),
    [anon_sym_step] = ACTIONS(144),
    [anon_sym_north] = ACTIONS(144),
    [anon_sym_south] = ACTIONS(144),
    [anon_sym_east] = ACTIONS(144),
    [anon_sym_west] = ACTIONS(144),
    [anon_sym_up] = ACTIONS(144),
    [anon_sym_down] = ACTIONS(144),
    [anon_sym_northeast] = ACTIONS(144),
    [anon_sym_northwest] = ACTIONS(144),
    [anon_sym_southeast] = ACTIONS(144),
    [anon_sym_southwest] = ACTIONS(144),
    [anon_sym_in] = ACTIONS(144),
    [anon_sym_out] = ACTIONS(144),
    [anon_sym_land] = ACTIONS(144),
    [sym_flag] = ACTIONS(144),
    [anon_sym_enter] = ACTIONS(144),
    [anon_sym_leave] = ACTIONS(144),
    [anon_sym_through] = ACTIONS(144),
    [anon_sym_take] = ACTIONS(144),
    [anon_sym_drop] = ACTIONS(144),
    [anon_sym_examine] = ACTIONS(144),
    [anon_sym_open] = ACTIONS(144),
    [anon_sym_close] = ACTIONS(144),
    [anon_sym_lock] = ACTIONS(144),
    [anon_sym_unlock] = ACTIONS(144),
    [anon_sym_read] = ACTIONS(144),
    [anon_sym_turn_DASHon] = ACTIONS(144),
    [anon_sym_turn_DASHoff] = ACTIONS(144),
    [anon_sym_plug] = ACTIONS(144),
    [anon_sym_unplug] = ACTIONS(144),
    [anon_sym_attack] = ACTIONS(144),
    [anon_sym_push] = ACTIONS(144),
    [anon_sym_pull] = ACTIONS(144),
    [anon_sym_touch] = ACTIONS(144),
    [anon_sym_rub] = ACTIONS(144),
    [anon_sym_click] = ACTIONS(144),
    [anon_sym_point] = ACTIONS(144),
    [anon_sym_eat] = ACTIONS(144),
    [anon_sym_drink] = ACTIONS(144),
    [anon_sym_wear] = ACTIONS(144),
    [anon_sym_climb] = ACTIONS(144),
    [anon_sym_sit] = ACTIONS(144),
    [anon_sym_stand] = ACTIONS(144),
    [anon_sym_smell] = ACTIONS(144),
    [anon_sym_listen] = ACTIONS(144),
    [anon_sym_ask_DASHabout] = ACTIONS(144),
    [anon_sym_tell_DASHabout] = ACTIONS(144),
    [anon_sym_give] = ACTIONS(144),
    [anon_sym_trade] = ACTIONS(144),
    [anon_sym_ask_DASHfor] = ACTIONS(144),
    [anon_sym_help] = ACTIONS(144),
    [anon_sym_put_DASHon] = ACTIONS(144),
    [anon_sym_put_DASHin] = ACTIONS(144),
    [anon_sym_on_DASHenter] = ACTIONS(144),
    [anon_sym_before_DASHaction] = ACTIONS(144),
    [anon_sym_process_DASHevents] = ACTIONS(144),
    [anon_sym_true] = ACTIONS(144),
    [anon_sym_false] = ACTIONS(144),
    [anon_sym_nil] = ACTIONS(144),
    [sym_identifier] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [sym_number] = ACTIONS(142),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [sym_entity_ref] = ACTIONS(146),
    [sym_binding_ref] = ACTIONS(146),
    [sym_keyword] = ACTIONS(146),
    [anon_sym_world] = ACTIONS(148),
    [anon_sym_room] = ACTIONS(148),
    [anon_sym_object] = ACTIONS(148),
    [anon_sym_event] = ACTIONS(148),
    [anon_sym_victory] = ACTIONS(148),
    [anon_sym_defeat] = ACTIONS(148),
    [anon_sym_default] = ACTIONS(148),
    [anon_sym_globals] = ACTIONS(148),
    [anon_sym_defsyntax] = ACTIONS(148),
    [anon_sym_defglobal] = ACTIONS(148),
    [anon_sym_defroutine] = ACTIONS(148),
    [anon_sym_fn] = ACTIONS(148),
    [anon_sym_lambda] = ACTIONS(148),
    [anon_sym_defn] = ACTIONS(148),
    [anon_sym_def] = ACTIONS(148),
    [anon_sym_cond] = ACTIONS(148),
    [anon_sym_if] = ACTIONS(148),
    [anon_sym_let] = ACTIONS(148),
    [anon_sym_match] = ACTIONS(148),
    [anon_sym_condp] = ACTIONS(148),
    [anon_sym_cond_DASH_GT] = ACTIONS(148),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(146),
    [anon_sym_and] = ACTIONS(148),
    [anon_sym_or] = ACTIONS(148),
    [anon_sym_not] = ACTIONS(148),
    [anon_sym_any] = ACTIONS(148),
    [anon_sym_all] = ACTIONS(148),
    [anon_sym_seq] = ACTIONS(148),
    [anon_sym_when] = ACTIONS(148),
    [anon_sym_quote] = ACTIONS(148),
    [anon_sym_list] = ACTIONS(148),
    [anon_sym_range] = ACTIONS(148),
    [anon_sym_some] = ACTIONS(148),
    [anon_sym_every_QMARK] = ACTIONS(148),
    [anon_sym_for] = ACTIONS(148),
    [anon_sym_doseq] = ACTIONS(148),
    [anon_sym_success] = ACTIONS(148),
    [anon_sym_blocked] = ACTIONS(148),
    [anon_sym_redirect] = ACTIONS(148),
    [anon_sym_outcome] = ACTIONS(148),
    [anon_sym_go] = ACTIONS(148),
    [anon_sym_do] = ACTIONS(148),
    [anon_sym_tell] = ACTIONS(148),
    [anon_sym_random] = ACTIONS(148),
    [anon_sym_first_DASHchild] = ACTIONS(148),
    [anon_sym_next_DASHsibling] = ACTIONS(148),
    [anon_sym_first_DASHin] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(146),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_STAR] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_PERCENT] = ACTIONS(146),
    [anon_sym_mod] = ACTIONS(148),
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [anon_sym_has_DASHflag] = ACTIONS(148),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(148),
    [anon_sym_loc] = ACTIONS(148),
    [anon_sym_prop] = ACTIONS(148),
    [anon_sym_desc] = ACTIONS(148),
    [anon_sym_flags] = ACTIONS(148),
    [anon_sym_visible_QMARK] = ACTIONS(148),
    [anon_sym_held_QMARK] = ACTIONS(148),
    [anon_sym_here_QMARK] = ACTIONS(148),
    [anon_sym_in_QMARK] = ACTIONS(148),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(148),
    [anon_sym_inside_QMARK] = ACTIONS(148),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(148),
    [anon_sym_at_QMARK] = ACTIONS(148),
    [anon_sym_room_QMARK] = ACTIONS(148),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(148),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(148),
    [anon_sym_inventory] = ACTIONS(148),
    [anon_sym_contents] = ACTIONS(148),
    [anon_sym_exit_QMARK] = ACTIONS(148),
    [anon_sym_exit_DASHto] = ACTIONS(148),
    [anon_sym_exit_DASHvia] = ACTIONS(148),
    [anon_sym_queued_QMARK] = ACTIONS(148),
    [anon_sym_eq_QMARK] = ACTIONS(148),
    [anon_sym_nil_QMARK] = ACTIONS(148),
    [anon_sym_empty_QMARK] = ACTIONS(148),
    [anon_sym_str] = ACTIONS(148),
    [anon_sym_join] = ACTIONS(148),
    [anon_sym_nth] = ACTIONS(148),
    [anon_sym_list_DASHset] = ACTIONS(148),
    [anon_sym_first] = ACTIONS(148),
    [anon_sym_rest] = ACTIONS(148),
    [anon_sym_count] = ACTIONS(148),
    [anon_sym_cons] = ACTIONS(148),
    [anon_sym_concat] = ACTIONS(148),
    [anon_sym_map] = ACTIONS(148),
    [anon_sym_filter] = ACTIONS(148),
    [anon_sym_remove] = ACTIONS(148),
    [anon_sym_keep] = ACTIONS(148),
    [anon_sym_reduce] = ACTIONS(148),
    [anon_sym_outcome_QMARK] = ACTIONS(148),
    [anon_sym_reason_QMARK] = ACTIONS(148),
    [anon_sym_context_QMARK] = ACTIONS(148),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(148),
    [anon_sym_loc_QMARK] = ACTIONS(148),
    [anon_sym_prop_QMARK] = ACTIONS(148),
    [anon_sym_global_QMARK] = ACTIONS(148),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(148),
    [anon_sym_move_BANG] = ACTIONS(148),
    [anon_sym_take_BANG] = ACTIONS(148),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(148),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(148),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(148),
    [anon_sym_set_BANG] = ACTIONS(148),
    [anon_sym_inc_BANG] = ACTIONS(148),
    [anon_sym_queue_BANG] = ACTIONS(148),
    [anon_sym_dequeue_BANG] = ACTIONS(148),
    [anon_sym_get_DASHprop] = ACTIONS(148),
    [anon_sym_put_DASHprop] = ACTIONS(148),
    [anon_sym_test] = ACTIONS(148),
    [anon_sym_test_DASHsequence] = ACTIONS(148),
    [anon_sym_test_DASHgroup] = ACTIONS(148),
    [anon_sym_step] = ACTIONS(148),
    [anon_sym_north] = ACTIONS(148),
    [anon_sym_south] = ACTIONS(148),
    [anon_sym_east] = ACTIONS(148),
    [anon_sym_west] = ACTIONS(148),
    [anon_sym_up] = ACTIONS(148),
    [anon_sym_down] = ACTIONS(148),
    [anon_sym_northeast] = ACTIONS(148),
    [anon_sym_northwest] = ACTIONS(148),
    [anon_sym_southeast] = ACTIONS(148),
    [anon_sym_southwest] = ACTIONS(148),
    [anon_sym_in] = ACTIONS(148),
    [anon_sym_out] = ACTIONS(148),
    [anon_sym_land] = ACTIONS(148),
    [sym_flag] = ACTIONS(148),
    [anon_sym_enter] = ACTIONS(148),
    [anon_sym_leave] = ACTIONS(148),
    [anon_sym_through] = ACTIONS(148),
    [anon_sym_take] = ACTIONS(148),
    [anon_sym_drop] = ACTIONS(148),
    [anon_sym_examine] = ACTIONS(148),
    [anon_sym_open] = ACTIONS(148),
    [anon_sym_close] = ACTIONS(148),
    [anon_sym_lock] = ACTIONS(148),
    [anon_sym_unlock] = ACTIONS(148),
    [anon_sym_read] = ACTIONS(148),
    [anon_sym_turn_DASHon] = ACTIONS(148),
    [anon_sym_turn_DASHoff] = ACTIONS(148),
    [anon_sym_plug] = ACTIONS(148),
    [anon_sym_unplug] = ACTIONS(148),
    [anon_sym_attack] = ACTIONS(148),
    [anon_sym_push] = ACTIONS(148),
    [anon_sym_pull] = ACTIONS(148),
    [anon_sym_touch] = ACTIONS(148),
    [anon_sym_rub] = ACTIONS(148),
    [anon_sym_click] = ACTIONS(148),
    [anon_sym_point] = ACTIONS(148),
    [anon_sym_eat] = ACTIONS(148),
    [anon_sym_drink] = ACTIONS(148),
    [anon_sym_wear] = ACTIONS(148),
    [anon_sym_climb] = ACTIONS(148),
    [anon_sym_sit] = ACTIONS(148),
    [anon_sym_stand] = ACTIONS(148),
    [anon_sym_smell] = ACTIONS(148),
    [anon_sym_listen] = ACTIONS(148),
    [anon_sym_ask_DASHabout] = ACTIONS(148),
    [anon_sym_tell_DASHabout] = ACTIONS(148),
    [anon_sym_give] = ACTIONS(148),
    [anon_sym_trade] = ACTIONS(148),
    [anon_sym_ask_DASHfor] = ACTIONS(148),
    [anon_sym_help] = ACTIONS(148),
    [anon_sym_put_DASHon] = ACTIONS(148),
    [anon_sym_put_DASHin] = ACTIONS(148),
    [anon_sym_on_DASHenter] = ACTIONS(148),
    [anon_sym_before_DASHaction] = ACTIONS(148),
    [anon_sym_process_DASHevents] = ACTIONS(148),
    [anon_sym_true] = ACTIONS(148),
    [anon_sym_false] = ACTIONS(148),
    [anon_sym_nil] = ACTIONS(148),
    [sym_identifier] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(146),
    [sym_number] = ACTIONS(146),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [sym_entity_ref] = ACTIONS(150),
    [sym_binding_ref] = ACTIONS(150),
    [sym_keyword] = ACTIONS(150),
    [anon_sym_world] = ACTIONS(152),
    [anon_sym_room] = ACTIONS(152),
    [anon_sym_object] = ACTIONS(152),
    [anon_sym_event] = ACTIONS(152),
    [anon_sym_victory] = ACTIONS(152),
    [anon_sym_defeat] = ACTIONS(152),
    [anon_sym_default] = ACTIONS(152),
    [anon_sym_globals] = ACTIONS(152),
    [anon_sym_defsyntax] = ACTIONS(152),
    [anon_sym_defglobal] = ACTIONS(152),
    [anon_sym_defroutine] = ACTIONS(152),
    [anon_sym_fn] = ACTIONS(152),
    [anon_sym_lambda] = ACTIONS(152),
    [anon_sym_defn] = ACTIONS(152),
    [anon_sym_def] = ACTIONS(152),
    [anon_sym_cond] = ACTIONS(152),
    [anon_sym_if] = ACTIONS(152),
    [anon_sym_let] = ACTIONS(152),
    [anon_sym_match] = ACTIONS(152),
    [anon_sym_condp] = ACTIONS(152),
    [anon_sym_cond_DASH_GT] = ACTIONS(152),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(150),
    [anon_sym_and] = ACTIONS(152),
    [anon_sym_or] = ACTIONS(152),
    [anon_sym_not] = ACTIONS(152),
    [anon_sym_any] = ACTIONS(152),
    [anon_sym_all] = ACTIONS(152),
    [anon_sym_seq] = ACTIONS(152),
    [anon_sym_when] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_list] = ACTIONS(152),
    [anon_sym_range] = ACTIONS(152),
    [anon_sym_some] = ACTIONS(152),
    [anon_sym_every_QMARK] = ACTIONS(152),
    [anon_sym_for] = ACTIONS(152),
    [anon_sym_doseq] = ACTIONS(152),
    [anon_sym_success] = ACTIONS(152),
    [anon_sym_blocked] = ACTIONS(152),
    [anon_sym_redirect] = ACTIONS(152),
    [anon_sym_outcome] = ACTIONS(152),
    [anon_sym_go] = ACTIONS(152),
    [anon_sym_do] = ACTIONS(152),
    [anon_sym_tell] = ACTIONS(152),
    [anon_sym_random] = ACTIONS(152),
    [anon_sym_first_DASHchild] = ACTIONS(152),
    [anon_sym_next_DASHsibling] = ACTIONS(152),
    [anon_sym_first_DASHin] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_mod] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_LT] = ACTIONS(152),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(150),
    [anon_sym_has_DASHflag] = ACTIONS(152),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(152),
    [anon_sym_loc] = ACTIONS(152),
    [anon_sym_prop] = ACTIONS(152),
    [anon_sym_desc] = ACTIONS(152),
    [anon_sym_flags] = ACTIONS(152),
    [anon_sym_visible_QMARK] = ACTIONS(152),
    [anon_sym_held_QMARK] = ACTIONS(152),
    [anon_sym_here_QMARK] = ACTIONS(152),
    [anon_sym_in_QMARK] = ACTIONS(152),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(152),
    [anon_sym_inside_QMARK] = ACTIONS(152),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(152),
    [anon_sym_at_QMARK] = ACTIONS(152),
    [anon_sym_room_QMARK] = ACTIONS(152),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(152),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(152),
    [anon_sym_inventory] = ACTIONS(152),
    [anon_sym_contents] = ACTIONS(152),
    [anon_sym_exit_QMARK] = ACTIONS(152),
    [anon_sym_exit_DASHto] = ACTIONS(152),
    [anon_sym_exit_DASHvia] = ACTIONS(152),
    [anon_sym_queued_QMARK] = ACTIONS(152),
    [anon_sym_eq_QMARK] = ACTIONS(152),
    [anon_sym_nil_QMARK] = ACTIONS(152),
    [anon_sym_empty_QMARK] = ACTIONS(152),
    [anon_sym_str] = ACTIONS(152),
    [anon_sym_join] = ACTIONS(152),
    [anon_sym_nth] = ACTIONS(152),
    [anon_sym_list_DASHset] = ACTIONS(152),
    [anon_sym_first] = ACTIONS(152),
    [anon_sym_rest] = ACTIONS(152),
    [anon_sym_count] = ACTIONS(152),
    [anon_sym_cons] = ACTIONS(152),
    [anon_sym_concat] = ACTIONS(152),
    [anon_sym_map] = ACTIONS(152),
    [anon_sym_filter] = ACTIONS(152),
    [anon_sym_remove] = ACTIONS(152),
    [anon_sym_keep] = ACTIONS(152),
    [anon_sym_reduce] = ACTIONS(152),
    [anon_sym_outcome_QMARK] = ACTIONS(152),
    [anon_sym_reason_QMARK] = ACTIONS(152),
    [anon_sym_context_QMARK] = ACTIONS(152),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(152),
    [anon_sym_loc_QMARK] = ACTIONS(152),
    [anon_sym_prop_QMARK] = ACTIONS(152),
    [anon_sym_global_QMARK] = ACTIONS(152),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(152),
    [anon_sym_move_BANG] = ACTIONS(152),
    [anon_sym_take_BANG] = ACTIONS(152),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(152),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(152),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(152),
    [anon_sym_set_BANG] = ACTIONS(152),
    [anon_sym_inc_BANG] = ACTIONS(152),
    [anon_sym_queue_BANG] = ACTIONS(152),
    [anon_sym_dequeue_BANG] = ACTIONS(152),
    [anon_sym_get_DASHprop] = ACTIONS(152),
    [anon_sym_put_DASHprop] = ACTIONS(152),
    [anon_sym_test] = ACTIONS(152),
    [anon_sym_test_DASHsequence] = ACTIONS(152),
    [anon_sym_test_DASHgroup] = ACTIONS(152),
    [anon_sym_step] = ACTIONS(152),
    [anon_sym_north] = ACTIONS(152),
    [anon_sym_south] = ACTIONS(152),
    [anon_sym_east] = ACTIONS(152),
    [anon_sym_west] = ACTIONS(152),
    [anon_sym_up] = ACTIONS(152),
    [anon_sym_down] = ACTIONS(152),
    [anon_sym_northeast] = ACTIONS(152),
    [anon_sym_northwest] = ACTIONS(152),
    [anon_sym_southeast] = ACTIONS(152),
    [anon_sym_southwest] = ACTIONS(152),
    [anon_sym_in] = ACTIONS(152),
    [anon_sym_out] = ACTIONS(152),
    [anon_sym_land] = ACTIONS(152),
    [sym_flag] = ACTIONS(152),
    [anon_sym_enter] = ACTIONS(152),
    [anon_sym_leave] = ACTIONS(152),
    [anon_sym_through] = ACTIONS(152),
    [anon_sym_take] = ACTIONS(152),
    [anon_sym_drop] = ACTIONS(152),
    [anon_sym_examine] = ACTIONS(152),
    [anon_sym_open] = ACTIONS(152),
    [anon_sym_close] = ACTIONS(152),
    [anon_sym_lock] = ACTIONS(152),
    [anon_sym_unlock] = ACTIONS(152),
    [anon_sym_read] = ACTIONS(152),
    [anon_sym_turn_DASHon] = ACTIONS(152),
    [anon_sym_turn_DASHoff] = ACTIONS(152),
    [anon_sym_plug] = ACTIONS(152),
    [anon_sym_unplug] = ACTIONS(152),
    [anon_sym_attack] = ACTIONS(152),
    [anon_sym_push] = ACTIONS(152),
    [anon_sym_pull] = ACTIONS(152),
    [anon_sym_touch] = ACTIONS(152),
    [anon_sym_rub] = ACTIONS(152),
    [anon_sym_click] = ACTIONS(152),
    [anon_sym_point] = ACTIONS(152),
    [anon_sym_eat] = ACTIONS(152),
    [anon_sym_drink] = ACTIONS(152),
    [anon_sym_wear] = ACTIONS(152),
    [anon_sym_climb] = ACTIONS(152),
    [anon_sym_sit] = ACTIONS(152),
    [anon_sym_stand] = ACTIONS(152),
    [anon_sym_smell] = ACTIONS(152),
    [anon_sym_listen] = ACTIONS(152),
    [anon_sym_ask_DASHabout] = ACTIONS(152),
    [anon_sym_tell_DASHabout] = ACTIONS(152),
    [anon_sym_give] = ACTIONS(152),
    [anon_sym_trade] = ACTIONS(152),
    [anon_sym_ask_DASHfor] = ACTIONS(152),
    [anon_sym_help] = ACTIONS(152),
    [anon_sym_put_DASHon] = ACTIONS(152),
    [anon_sym_put_DASHin] = ACTIONS(152),
    [anon_sym_on_DASHenter] = ACTIONS(152),
    [anon_sym_before_DASHaction] = ACTIONS(152),
    [anon_sym_process_DASHevents] = ACTIONS(152),
    [anon_sym_true] = ACTIONS(152),
    [anon_sym_false] = ACTIONS(152),
    [anon_sym_nil] = ACTIONS(152),
    [sym_identifier] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [sym_number] = ACTIONS(150),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [sym_entity_ref] = ACTIONS(154),
    [sym_binding_ref] = ACTIONS(154),
    [sym_keyword] = ACTIONS(154),
    [anon_sym_world] = ACTIONS(156),
    [anon_sym_room] = ACTIONS(156),
    [anon_sym_object] = ACTIONS(156),
    [anon_sym_event] = ACTIONS(156),
    [anon_sym_victory] = ACTIONS(156),
    [anon_sym_defeat] = ACTIONS(156),
    [anon_sym_default] = ACTIONS(156),
    [anon_sym_globals] = ACTIONS(156),
    [anon_sym_defsyntax] = ACTIONS(156),
    [anon_sym_defglobal] = ACTIONS(156),
    [anon_sym_defroutine] = ACTIONS(156),
    [anon_sym_fn] = ACTIONS(156),
    [anon_sym_lambda] = ACTIONS(156),
    [anon_sym_defn] = ACTIONS(156),
    [anon_sym_def] = ACTIONS(156),
    [anon_sym_cond] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(156),
    [anon_sym_let] = ACTIONS(156),
    [anon_sym_match] = ACTIONS(156),
    [anon_sym_condp] = ACTIONS(156),
    [anon_sym_cond_DASH_GT] = ACTIONS(156),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(154),
    [anon_sym_and] = ACTIONS(156),
    [anon_sym_or] = ACTIONS(156),
    [anon_sym_not] = ACTIONS(156),
    [anon_sym_any] = ACTIONS(156),
    [anon_sym_all] = ACTIONS(156),
    [anon_sym_seq] = ACTIONS(156),
    [anon_sym_when] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_list] = ACTIONS(156),
    [anon_sym_range] = ACTIONS(156),
    [anon_sym_some] = ACTIONS(156),
    [anon_sym_every_QMARK] = ACTIONS(156),
    [anon_sym_for] = ACTIONS(156),
    [anon_sym_doseq] = ACTIONS(156),
    [anon_sym_success] = ACTIONS(156),
    [anon_sym_blocked] = ACTIONS(156),
    [anon_sym_redirect] = ACTIONS(156),
    [anon_sym_outcome] = ACTIONS(156),
    [anon_sym_go] = ACTIONS(156),
    [anon_sym_do] = ACTIONS(156),
    [anon_sym_tell] = ACTIONS(156),
    [anon_sym_random] = ACTIONS(156),
    [anon_sym_first_DASHchild] = ACTIONS(156),
    [anon_sym_next_DASHsibling] = ACTIONS(156),
    [anon_sym_first_DASHin] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(154),
    [anon_sym_mod] = ACTIONS(156),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_LT] = ACTIONS(156),
    [anon_sym_GT_EQ] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(154),
    [anon_sym_has_DASHflag] = ACTIONS(156),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(156),
    [anon_sym_loc] = ACTIONS(156),
    [anon_sym_prop] = ACTIONS(156),
    [anon_sym_desc] = ACTIONS(156),
    [anon_sym_flags] = ACTIONS(156),
    [anon_sym_visible_QMARK] = ACTIONS(156),
    [anon_sym_held_QMARK] = ACTIONS(156),
    [anon_sym_here_QMARK] = ACTIONS(156),
    [anon_sym_in_QMARK] = ACTIONS(156),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(156),
    [anon_sym_inside_QMARK] = ACTIONS(156),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(156),
    [anon_sym_at_QMARK] = ACTIONS(156),
    [anon_sym_room_QMARK] = ACTIONS(156),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(156),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(156),
    [anon_sym_inventory] = ACTIONS(156),
    [anon_sym_contents] = ACTIONS(156),
    [anon_sym_exit_QMARK] = ACTIONS(156),
    [anon_sym_exit_DASHto] = ACTIONS(156),
    [anon_sym_exit_DASHvia] = ACTIONS(156),
    [anon_sym_queued_QMARK] = ACTIONS(156),
    [anon_sym_eq_QMARK] = ACTIONS(156),
    [anon_sym_nil_QMARK] = ACTIONS(156),
    [anon_sym_empty_QMARK] = ACTIONS(156),
    [anon_sym_str] = ACTIONS(156),
    [anon_sym_join] = ACTIONS(156),
    [anon_sym_nth] = ACTIONS(156),
    [anon_sym_list_DASHset] = ACTIONS(156),
    [anon_sym_first] = ACTIONS(156),
    [anon_sym_rest] = ACTIONS(156),
    [anon_sym_count] = ACTIONS(156),
    [anon_sym_cons] = ACTIONS(156),
    [anon_sym_concat] = ACTIONS(156),
    [anon_sym_map] = ACTIONS(156),
    [anon_sym_filter] = ACTIONS(156),
    [anon_sym_remove] = ACTIONS(156),
    [anon_sym_keep] = ACTIONS(156),
    [anon_sym_reduce] = ACTIONS(156),
    [anon_sym_outcome_QMARK] = ACTIONS(156),
    [anon_sym_reason_QMARK] = ACTIONS(156),
    [anon_sym_context_QMARK] = ACTIONS(156),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(156),
    [anon_sym_loc_QMARK] = ACTIONS(156),
    [anon_sym_prop_QMARK] = ACTIONS(156),
    [anon_sym_global_QMARK] = ACTIONS(156),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(156),
    [anon_sym_move_BANG] = ACTIONS(156),
    [anon_sym_take_BANG] = ACTIONS(156),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(156),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(156),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(156),
    [anon_sym_set_BANG] = ACTIONS(156),
    [anon_sym_inc_BANG] = ACTIONS(156),
    [anon_sym_queue_BANG] = ACTIONS(156),
    [anon_sym_dequeue_BANG] = ACTIONS(156),
    [anon_sym_get_DASHprop] = ACTIONS(156),
    [anon_sym_put_DASHprop] = ACTIONS(156),
    [anon_sym_test] = ACTIONS(156),
    [anon_sym_test_DASHsequence] = ACTIONS(156),
    [anon_sym_test_DASHgroup] = ACTIONS(156),
    [anon_sym_step] = ACTIONS(156),
    [anon_sym_north] = ACTIONS(156),
    [anon_sym_south] = ACTIONS(156),
    [anon_sym_east] = ACTIONS(156),
    [anon_sym_west] = ACTIONS(156),
    [anon_sym_up] = ACTIONS(156),
    [anon_sym_down] = ACTIONS(156),
    [anon_sym_northeast] = ACTIONS(156),
    [anon_sym_northwest] = ACTIONS(156),
    [anon_sym_southeast] = ACTIONS(156),
    [anon_sym_southwest] = ACTIONS(156),
    [anon_sym_in] = ACTIONS(156),
    [anon_sym_out] = ACTIONS(156),
    [anon_sym_land] = ACTIONS(156),
    [sym_flag] = ACTIONS(156),
    [anon_sym_enter] = ACTIONS(156),
    [anon_sym_leave] = ACTIONS(156),
    [anon_sym_through] = ACTIONS(156),
    [anon_sym_take] = ACTIONS(156),
    [anon_sym_drop] = ACTIONS(156),
    [anon_sym_examine] = ACTIONS(156),
    [anon_sym_open] = ACTIONS(156),
    [anon_sym_close] = ACTIONS(156),
    [anon_sym_lock] = ACTIONS(156),
    [anon_sym_unlock] = ACTIONS(156),
    [anon_sym_read] = ACTIONS(156),
    [anon_sym_turn_DASHon] = ACTIONS(156),
    [anon_sym_turn_DASHoff] = ACTIONS(156),
    [anon_sym_plug] = ACTIONS(156),
    [anon_sym_unplug] = ACTIONS(156),
    [anon_sym_attack] = ACTIONS(156),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_pull] = ACTIONS(156),
    [anon_sym_touch] = ACTIONS(156),
    [anon_sym_rub] = ACTIONS(156),
    [anon_sym_click] = ACTIONS(156),
    [anon_sym_point] = ACTIONS(156),
    [anon_sym_eat] = ACTIONS(156),
    [anon_sym_drink] = ACTIONS(156),
    [anon_sym_wear] = ACTIONS(156),
    [anon_sym_climb] = ACTIONS(156),
    [anon_sym_sit] = ACTIONS(156),
    [anon_sym_stand] = ACTIONS(156),
    [anon_sym_smell] = ACTIONS(156),
    [anon_sym_listen] = ACTIONS(156),
    [anon_sym_ask_DASHabout] = ACTIONS(156),
    [anon_sym_tell_DASHabout] = ACTIONS(156),
    [anon_sym_give] = ACTIONS(156),
    [anon_sym_trade] = ACTIONS(156),
    [anon_sym_ask_DASHfor] = ACTIONS(156),
    [anon_sym_help] = ACTIONS(156),
    [anon_sym_put_DASHon] = ACTIONS(156),
    [anon_sym_put_DASHin] = ACTIONS(156),
    [anon_sym_on_DASHenter] = ACTIONS(156),
    [anon_sym_before_DASHaction] = ACTIONS(156),
    [anon_sym_process_DASHevents] = ACTIONS(156),
    [anon_sym_true] = ACTIONS(156),
    [anon_sym_false] = ACTIONS(156),
    [anon_sym_nil] = ACTIONS(156),
    [sym_identifier] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [sym_number] = ACTIONS(154),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [sym_entity_ref] = ACTIONS(158),
    [sym_binding_ref] = ACTIONS(158),
    [sym_keyword] = ACTIONS(158),
    [anon_sym_world] = ACTIONS(160),
    [anon_sym_room] = ACTIONS(160),
    [anon_sym_object] = ACTIONS(160),
    [anon_sym_event] = ACTIONS(160),
    [anon_sym_victory] = ACTIONS(160),
    [anon_sym_defeat] = ACTIONS(160),
    [anon_sym_default] = ACTIONS(160),
    [anon_sym_globals] = ACTIONS(160),
    [anon_sym_defsyntax] = ACTIONS(160),
    [anon_sym_defglobal] = ACTIONS(160),
    [anon_sym_defroutine] = ACTIONS(160),
    [anon_sym_fn] = ACTIONS(160),
    [anon_sym_lambda] = ACTIONS(160),
    [anon_sym_defn] = ACTIONS(160),
    [anon_sym_def] = ACTIONS(160),
    [anon_sym_cond] = ACTIONS(160),
    [anon_sym_if] = ACTIONS(160),
    [anon_sym_let] = ACTIONS(160),
    [anon_sym_match] = ACTIONS(160),
    [anon_sym_condp] = ACTIONS(160),
    [anon_sym_cond_DASH_GT] = ACTIONS(160),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(158),
    [anon_sym_and] = ACTIONS(160),
    [anon_sym_or] = ACTIONS(160),
    [anon_sym_not] = ACTIONS(160),
    [anon_sym_any] = ACTIONS(160),
    [anon_sym_all] = ACTIONS(160),
    [anon_sym_seq] = ACTIONS(160),
    [anon_sym_when] = ACTIONS(160),
    [anon_sym_quote] = ACTIONS(160),
    [anon_sym_list] = ACTIONS(160),
    [anon_sym_range] = ACTIONS(160),
    [anon_sym_some] = ACTIONS(160),
    [anon_sym_every_QMARK] = ACTIONS(160),
    [anon_sym_for] = ACTIONS(160),
    [anon_sym_doseq] = ACTIONS(160),
    [anon_sym_success] = ACTIONS(160),
    [anon_sym_blocked] = ACTIONS(160),
    [anon_sym_redirect] = ACTIONS(160),
    [anon_sym_outcome] = ACTIONS(160),
    [anon_sym_go] = ACTIONS(160),
    [anon_sym_do] = ACTIONS(160),
    [anon_sym_tell] = ACTIONS(160),
    [anon_sym_random] = ACTIONS(160),
    [anon_sym_first_DASHchild] = ACTIONS(160),
    [anon_sym_next_DASHsibling] = ACTIONS(160),
    [anon_sym_first_DASHin] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_mod] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [anon_sym_has_DASHflag] = ACTIONS(160),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(160),
    [anon_sym_loc] = ACTIONS(160),
    [anon_sym_prop] = ACTIONS(160),
    [anon_sym_desc] = ACTIONS(160),
    [anon_sym_flags] = ACTIONS(160),
    [anon_sym_visible_QMARK] = ACTIONS(160),
    [anon_sym_held_QMARK] = ACTIONS(160),
    [anon_sym_here_QMARK] = ACTIONS(160),
    [anon_sym_in_QMARK] = ACTIONS(160),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(160),
    [anon_sym_inside_QMARK] = ACTIONS(160),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(160),
    [anon_sym_at_QMARK] = ACTIONS(160),
    [anon_sym_room_QMARK] = ACTIONS(160),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(160),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(160),
    [anon_sym_inventory] = ACTIONS(160),
    [anon_sym_contents] = ACTIONS(160),
    [anon_sym_exit_QMARK] = ACTIONS(160),
    [anon_sym_exit_DASHto] = ACTIONS(160),
    [anon_sym_exit_DASHvia] = ACTIONS(160),
    [anon_sym_queued_QMARK] = ACTIONS(160),
    [anon_sym_eq_QMARK] = ACTIONS(160),
    [anon_sym_nil_QMARK] = ACTIONS(160),
    [anon_sym_empty_QMARK] = ACTIONS(160),
    [anon_sym_str] = ACTIONS(160),
    [anon_sym_join] = ACTIONS(160),
    [anon_sym_nth] = ACTIONS(160),
    [anon_sym_list_DASHset] = ACTIONS(160),
    [anon_sym_first] = ACTIONS(160),
    [anon_sym_rest] = ACTIONS(160),
    [anon_sym_count] = ACTIONS(160),
    [anon_sym_cons] = ACTIONS(160),
    [anon_sym_concat] = ACTIONS(160),
    [anon_sym_map] = ACTIONS(160),
    [anon_sym_filter] = ACTIONS(160),
    [anon_sym_remove] = ACTIONS(160),
    [anon_sym_keep] = ACTIONS(160),
    [anon_sym_reduce] = ACTIONS(160),
    [anon_sym_outcome_QMARK] = ACTIONS(160),
    [anon_sym_reason_QMARK] = ACTIONS(160),
    [anon_sym_context_QMARK] = ACTIONS(160),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(160),
    [anon_sym_loc_QMARK] = ACTIONS(160),
    [anon_sym_prop_QMARK] = ACTIONS(160),
    [anon_sym_global_QMARK] = ACTIONS(160),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(160),
    [anon_sym_move_BANG] = ACTIONS(160),
    [anon_sym_take_BANG] = ACTIONS(160),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(160),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(160),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(160),
    [anon_sym_set_BANG] = ACTIONS(160),
    [anon_sym_inc_BANG] = ACTIONS(160),
    [anon_sym_queue_BANG] = ACTIONS(160),
    [anon_sym_dequeue_BANG] = ACTIONS(160),
    [anon_sym_get_DASHprop] = ACTIONS(160),
    [anon_sym_put_DASHprop] = ACTIONS(160),
    [anon_sym_test] = ACTIONS(160),
    [anon_sym_test_DASHsequence] = ACTIONS(160),
    [anon_sym_test_DASHgroup] = ACTIONS(160),
    [anon_sym_step] = ACTIONS(160),
    [anon_sym_north] = ACTIONS(160),
    [anon_sym_south] = ACTIONS(160),
    [anon_sym_east] = ACTIONS(160),
    [anon_sym_west] = ACTIONS(160),
    [anon_sym_up] = ACTIONS(160),
    [anon_sym_down] = ACTIONS(160),
    [anon_sym_northeast] = ACTIONS(160),
    [anon_sym_northwest] = ACTIONS(160),
    [anon_sym_southeast] = ACTIONS(160),
    [anon_sym_southwest] = ACTIONS(160),
    [anon_sym_in] = ACTIONS(160),
    [anon_sym_out] = ACTIONS(160),
    [anon_sym_land] = ACTIONS(160),
    [sym_flag] = ACTIONS(160),
    [anon_sym_enter] = ACTIONS(160),
    [anon_sym_leave] = ACTIONS(160),
    [anon_sym_through] = ACTIONS(160),
    [anon_sym_take] = ACTIONS(160),
    [anon_sym_drop] = ACTIONS(160),
    [anon_sym_examine] = ACTIONS(160),
    [anon_sym_open] = ACTIONS(160),
    [anon_sym_close] = ACTIONS(160),
    [anon_sym_lock] = ACTIONS(160),
    [anon_sym_unlock] = ACTIONS(160),
    [anon_sym_read] = ACTIONS(160),
    [anon_sym_turn_DASHon] = ACTIONS(160),
    [anon_sym_turn_DASHoff] = ACTIONS(160),
    [anon_sym_plug] = ACTIONS(160),
    [anon_sym_unplug] = ACTIONS(160),
    [anon_sym_attack] = ACTIONS(160),
    [anon_sym_push] = ACTIONS(160),
    [anon_sym_pull] = ACTIONS(160),
    [anon_sym_touch] = ACTIONS(160),
    [anon_sym_rub] = ACTIONS(160),
    [anon_sym_click] = ACTIONS(160),
    [anon_sym_point] = ACTIONS(160),
    [anon_sym_eat] = ACTIONS(160),
    [anon_sym_drink] = ACTIONS(160),
    [anon_sym_wear] = ACTIONS(160),
    [anon_sym_climb] = ACTIONS(160),
    [anon_sym_sit] = ACTIONS(160),
    [anon_sym_stand] = ACTIONS(160),
    [anon_sym_smell] = ACTIONS(160),
    [anon_sym_listen] = ACTIONS(160),
    [anon_sym_ask_DASHabout] = ACTIONS(160),
    [anon_sym_tell_DASHabout] = ACTIONS(160),
    [anon_sym_give] = ACTIONS(160),
    [anon_sym_trade] = ACTIONS(160),
    [anon_sym_ask_DASHfor] = ACTIONS(160),
    [anon_sym_help] = ACTIONS(160),
    [anon_sym_put_DASHon] = ACTIONS(160),
    [anon_sym_put_DASHin] = ACTIONS(160),
    [anon_sym_on_DASHenter] = ACTIONS(160),
    [anon_sym_before_DASHaction] = ACTIONS(160),
    [anon_sym_process_DASHevents] = ACTIONS(160),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [anon_sym_nil] = ACTIONS(160),
    [sym_identifier] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [sym_number] = ACTIONS(158),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [sym_entity_ref] = ACTIONS(162),
    [sym_binding_ref] = ACTIONS(162),
    [sym_keyword] = ACTIONS(162),
    [anon_sym_world] = ACTIONS(164),
    [anon_sym_room] = ACTIONS(164),
    [anon_sym_object] = ACTIONS(164),
    [anon_sym_event] = ACTIONS(164),
    [anon_sym_victory] = ACTIONS(164),
    [anon_sym_defeat] = ACTIONS(164),
    [anon_sym_default] = ACTIONS(164),
    [anon_sym_globals] = ACTIONS(164),
    [anon_sym_defsyntax] = ACTIONS(164),
    [anon_sym_defglobal] = ACTIONS(164),
    [anon_sym_defroutine] = ACTIONS(164),
    [anon_sym_fn] = ACTIONS(164),
    [anon_sym_lambda] = ACTIONS(164),
    [anon_sym_defn] = ACTIONS(164),
    [anon_sym_def] = ACTIONS(164),
    [anon_sym_cond] = ACTIONS(164),
    [anon_sym_if] = ACTIONS(164),
    [anon_sym_let] = ACTIONS(164),
    [anon_sym_match] = ACTIONS(164),
    [anon_sym_condp] = ACTIONS(164),
    [anon_sym_cond_DASH_GT] = ACTIONS(164),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(162),
    [anon_sym_and] = ACTIONS(164),
    [anon_sym_or] = ACTIONS(164),
    [anon_sym_not] = ACTIONS(164),
    [anon_sym_any] = ACTIONS(164),
    [anon_sym_all] = ACTIONS(164),
    [anon_sym_seq] = ACTIONS(164),
    [anon_sym_when] = ACTIONS(164),
    [anon_sym_quote] = ACTIONS(164),
    [anon_sym_list] = ACTIONS(164),
    [anon_sym_range] = ACTIONS(164),
    [anon_sym_some] = ACTIONS(164),
    [anon_sym_every_QMARK] = ACTIONS(164),
    [anon_sym_for] = ACTIONS(164),
    [anon_sym_doseq] = ACTIONS(164),
    [anon_sym_success] = ACTIONS(164),
    [anon_sym_blocked] = ACTIONS(164),
    [anon_sym_redirect] = ACTIONS(164),
    [anon_sym_outcome] = ACTIONS(164),
    [anon_sym_go] = ACTIONS(164),
    [anon_sym_do] = ACTIONS(164),
    [anon_sym_tell] = ACTIONS(164),
    [anon_sym_random] = ACTIONS(164),
    [anon_sym_first_DASHchild] = ACTIONS(164),
    [anon_sym_next_DASHsibling] = ACTIONS(164),
    [anon_sym_first_DASHin] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(162),
    [anon_sym_mod] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_GT_EQ] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(162),
    [anon_sym_has_DASHflag] = ACTIONS(164),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(164),
    [anon_sym_loc] = ACTIONS(164),
    [anon_sym_prop] = ACTIONS(164),
    [anon_sym_desc] = ACTIONS(164),
    [anon_sym_flags] = ACTIONS(164),
    [anon_sym_visible_QMARK] = ACTIONS(164),
    [anon_sym_held_QMARK] = ACTIONS(164),
    [anon_sym_here_QMARK] = ACTIONS(164),
    [anon_sym_in_QMARK] = ACTIONS(164),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(164),
    [anon_sym_inside_QMARK] = ACTIONS(164),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(164),
    [anon_sym_at_QMARK] = ACTIONS(164),
    [anon_sym_room_QMARK] = ACTIONS(164),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(164),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(164),
    [anon_sym_inventory] = ACTIONS(164),
    [anon_sym_contents] = ACTIONS(164),
    [anon_sym_exit_QMARK] = ACTIONS(164),
    [anon_sym_exit_DASHto] = ACTIONS(164),
    [anon_sym_exit_DASHvia] = ACTIONS(164),
    [anon_sym_queued_QMARK] = ACTIONS(164),
    [anon_sym_eq_QMARK] = ACTIONS(164),
    [anon_sym_nil_QMARK] = ACTIONS(164),
    [anon_sym_empty_QMARK] = ACTIONS(164),
    [anon_sym_str] = ACTIONS(164),
    [anon_sym_join] = ACTIONS(164),
    [anon_sym_nth] = ACTIONS(164),
    [anon_sym_list_DASHset] = ACTIONS(164),
    [anon_sym_first] = ACTIONS(164),
    [anon_sym_rest] = ACTIONS(164),
    [anon_sym_count] = ACTIONS(164),
    [anon_sym_cons] = ACTIONS(164),
    [anon_sym_concat] = ACTIONS(164),
    [anon_sym_map] = ACTIONS(164),
    [anon_sym_filter] = ACTIONS(164),
    [anon_sym_remove] = ACTIONS(164),
    [anon_sym_keep] = ACTIONS(164),
    [anon_sym_reduce] = ACTIONS(164),
    [anon_sym_outcome_QMARK] = ACTIONS(164),
    [anon_sym_reason_QMARK] = ACTIONS(164),
    [anon_sym_context_QMARK] = ACTIONS(164),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(164),
    [anon_sym_loc_QMARK] = ACTIONS(164),
    [anon_sym_prop_QMARK] = ACTIONS(164),
    [anon_sym_global_QMARK] = ACTIONS(164),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(164),
    [anon_sym_move_BANG] = ACTIONS(164),
    [anon_sym_take_BANG] = ACTIONS(164),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(164),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(164),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(164),
    [anon_sym_set_BANG] = ACTIONS(164),
    [anon_sym_inc_BANG] = ACTIONS(164),
    [anon_sym_queue_BANG] = ACTIONS(164),
    [anon_sym_dequeue_BANG] = ACTIONS(164),
    [anon_sym_get_DASHprop] = ACTIONS(164),
    [anon_sym_put_DASHprop] = ACTIONS(164),
    [anon_sym_test] = ACTIONS(164),
    [anon_sym_test_DASHsequence] = ACTIONS(164),
    [anon_sym_test_DASHgroup] = ACTIONS(164),
    [anon_sym_step] = ACTIONS(164),
    [anon_sym_north] = ACTIONS(164),
    [anon_sym_south] = ACTIONS(164),
    [anon_sym_east] = ACTIONS(164),
    [anon_sym_west] = ACTIONS(164),
    [anon_sym_up] = ACTIONS(164),
    [anon_sym_down] = ACTIONS(164),
    [anon_sym_northeast] = ACTIONS(164),
    [anon_sym_northwest] = ACTIONS(164),
    [anon_sym_southeast] = ACTIONS(164),
    [anon_sym_southwest] = ACTIONS(164),
    [anon_sym_in] = ACTIONS(164),
    [anon_sym_out] = ACTIONS(164),
    [anon_sym_land] = ACTIONS(164),
    [sym_flag] = ACTIONS(164),
    [anon_sym_enter] = ACTIONS(164),
    [anon_sym_leave] = ACTIONS(164),
    [anon_sym_through] = ACTIONS(164),
    [anon_sym_take] = ACTIONS(164),
    [anon_sym_drop] = ACTIONS(164),
    [anon_sym_examine] = ACTIONS(164),
    [anon_sym_open] = ACTIONS(164),
    [anon_sym_close] = ACTIONS(164),
    [anon_sym_lock] = ACTIONS(164),
    [anon_sym_unlock] = ACTIONS(164),
    [anon_sym_read] = ACTIONS(164),
    [anon_sym_turn_DASHon] = ACTIONS(164),
    [anon_sym_turn_DASHoff] = ACTIONS(164),
    [anon_sym_plug] = ACTIONS(164),
    [anon_sym_unplug] = ACTIONS(164),
    [anon_sym_attack] = ACTIONS(164),
    [anon_sym_push] = ACTIONS(164),
    [anon_sym_pull] = ACTIONS(164),
    [anon_sym_touch] = ACTIONS(164),
    [anon_sym_rub] = ACTIONS(164),
    [anon_sym_click] = ACTIONS(164),
    [anon_sym_point] = ACTIONS(164),
    [anon_sym_eat] = ACTIONS(164),
    [anon_sym_drink] = ACTIONS(164),
    [anon_sym_wear] = ACTIONS(164),
    [anon_sym_climb] = ACTIONS(164),
    [anon_sym_sit] = ACTIONS(164),
    [anon_sym_stand] = ACTIONS(164),
    [anon_sym_smell] = ACTIONS(164),
    [anon_sym_listen] = ACTIONS(164),
    [anon_sym_ask_DASHabout] = ACTIONS(164),
    [anon_sym_tell_DASHabout] = ACTIONS(164),
    [anon_sym_give] = ACTIONS(164),
    [anon_sym_trade] = ACTIONS(164),
    [anon_sym_ask_DASHfor] = ACTIONS(164),
    [anon_sym_help] = ACTIONS(164),
    [anon_sym_put_DASHon] = ACTIONS(164),
    [anon_sym_put_DASHin] = ACTIONS(164),
    [anon_sym_on_DASHenter] = ACTIONS(164),
    [anon_sym_before_DASHaction] = ACTIONS(164),
    [anon_sym_process_DASHevents] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [anon_sym_nil] = ACTIONS(164),
    [sym_identifier] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [sym_number] = ACTIONS(162),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [sym_entity_ref] = ACTIONS(166),
    [sym_binding_ref] = ACTIONS(166),
    [sym_keyword] = ACTIONS(166),
    [anon_sym_world] = ACTIONS(168),
    [anon_sym_room] = ACTIONS(168),
    [anon_sym_object] = ACTIONS(168),
    [anon_sym_event] = ACTIONS(168),
    [anon_sym_victory] = ACTIONS(168),
    [anon_sym_defeat] = ACTIONS(168),
    [anon_sym_default] = ACTIONS(168),
    [anon_sym_globals] = ACTIONS(168),
    [anon_sym_defsyntax] = ACTIONS(168),
    [anon_sym_defglobal] = ACTIONS(168),
    [anon_sym_defroutine] = ACTIONS(168),
    [anon_sym_fn] = ACTIONS(168),
    [anon_sym_lambda] = ACTIONS(168),
    [anon_sym_defn] = ACTIONS(168),
    [anon_sym_def] = ACTIONS(168),
    [anon_sym_cond] = ACTIONS(168),
    [anon_sym_if] = ACTIONS(168),
    [anon_sym_let] = ACTIONS(168),
    [anon_sym_match] = ACTIONS(168),
    [anon_sym_condp] = ACTIONS(168),
    [anon_sym_cond_DASH_GT] = ACTIONS(168),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(166),
    [anon_sym_and] = ACTIONS(168),
    [anon_sym_or] = ACTIONS(168),
    [anon_sym_not] = ACTIONS(168),
    [anon_sym_any] = ACTIONS(168),
    [anon_sym_all] = ACTIONS(168),
    [anon_sym_seq] = ACTIONS(168),
    [anon_sym_when] = ACTIONS(168),
    [anon_sym_quote] = ACTIONS(168),
    [anon_sym_list] = ACTIONS(168),
    [anon_sym_range] = ACTIONS(168),
    [anon_sym_some] = ACTIONS(168),
    [anon_sym_every_QMARK] = ACTIONS(168),
    [anon_sym_for] = ACTIONS(168),
    [anon_sym_doseq] = ACTIONS(168),
    [anon_sym_success] = ACTIONS(168),
    [anon_sym_blocked] = ACTIONS(168),
    [anon_sym_redirect] = ACTIONS(168),
    [anon_sym_outcome] = ACTIONS(168),
    [anon_sym_go] = ACTIONS(168),
    [anon_sym_do] = ACTIONS(168),
    [anon_sym_tell] = ACTIONS(168),
    [anon_sym_random] = ACTIONS(168),
    [anon_sym_first_DASHchild] = ACTIONS(168),
    [anon_sym_next_DASHsibling] = ACTIONS(168),
    [anon_sym_first_DASHin] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [anon_sym_mod] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_GT_EQ] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(166),
    [anon_sym_has_DASHflag] = ACTIONS(168),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(168),
    [anon_sym_loc] = ACTIONS(168),
    [anon_sym_prop] = ACTIONS(168),
    [anon_sym_desc] = ACTIONS(168),
    [anon_sym_flags] = ACTIONS(168),
    [anon_sym_visible_QMARK] = ACTIONS(168),
    [anon_sym_held_QMARK] = ACTIONS(168),
    [anon_sym_here_QMARK] = ACTIONS(168),
    [anon_sym_in_QMARK] = ACTIONS(168),
    [anon_sym_contained_DASHin_QMARK] = ACTIONS(168),
    [anon_sym_inside_QMARK] = ACTIONS(168),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(168),
    [anon_sym_at_QMARK] = ACTIONS(168),
    [anon_sym_room_QMARK] = ACTIONS(168),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(168),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(168),
    [anon_sym_inventory] = ACTIONS(168),
    [anon_sym_contents] = ACTIONS(168),
    [anon_sym_exit_QMARK] = ACTIONS(168),
    [anon_sym_exit_DASHto] = ACTIONS(168),
    [anon_sym_exit_DASHvia] = ACTIONS(168),
    [anon_sym_queued_QMARK] = ACTIONS(168),
    [anon_sym_eq_QMARK] = ACTIONS(168),
    [anon_sym_nil_QMARK] = ACTIONS(168),
    [anon_sym_empty_QMARK] = ACTIONS(168),
    [anon_sym_str] = ACTIONS(168),
    [anon_sym_join] = ACTIONS(168),
    [anon_sym_nth] = ACTIONS(168),
    [anon_sym_list_DASHset] = ACTIONS(168),
    [anon_sym_first] = ACTIONS(168),
    [anon_sym_rest] = ACTIONS(168),
    [anon_sym_count] = ACTIONS(168),
    [anon_sym_cons] = ACTIONS(168),
    [anon_sym_concat] = ACTIONS(168),
    [anon_sym_map] = ACTIONS(168),
    [anon_sym_filter] = ACTIONS(168),
    [anon_sym_remove] = ACTIONS(168),
    [anon_sym_keep] = ACTIONS(168),
    [anon_sym_reduce] = ACTIONS(168),
    [anon_sym_outcome_QMARK] = ACTIONS(168),
    [anon_sym_reason_QMARK] = ACTIONS(168),
    [anon_sym_context_QMARK] = ACTIONS(168),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(168),
    [anon_sym_loc_QMARK] = ACTIONS(168),
    [anon_sym_prop_QMARK] = ACTIONS(168),
    [anon_sym_global_QMARK] = ACTIONS(168),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(168),
    [anon_sym_move_BANG] = ACTIONS(168),
    [anon_sym_take_BANG] = ACTIONS(168),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(168),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(168),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(168),
    [anon_sym_set_BANG] = ACTIONS(168),
    [anon_sym_inc_BANG] = ACTIONS(168),
    [anon_sym_queue_BANG] = ACTIONS(168),
    [anon_sym_dequeue_BANG] = ACTIONS(168),
    [anon_sym_get_DASHprop] = ACTIONS(168),
    [anon_sym_put_DASHprop] = ACTIONS(168),
    [anon_sym_test] = ACTIONS(168),
    [anon_sym_test_DASHsequence] = ACTIONS(168),
    [anon_sym_test_DASHgroup] = ACTIONS(168),
    [anon_sym_step] = ACTIONS(168),
    [anon_sym_north] = ACTIONS(168),
    [anon_sym_south] = ACTIONS(168),
    [anon_sym_east] = ACTIONS(168),
    [anon_sym_west] = ACTIONS(168),
    [anon_sym_up] = ACTIONS(168),
    [anon_sym_down] = ACTIONS(168),
    [anon_sym_northeast] = ACTIONS(168),
    [anon_sym_northwest] = ACTIONS(168),
    [anon_sym_southeast] = ACTIONS(168),
    [anon_sym_southwest] = ACTIONS(168),
    [anon_sym_in] = ACTIONS(168),
    [anon_sym_out] = ACTIONS(168),
    [anon_sym_land] = ACTIONS(168),
    [sym_flag] = ACTIONS(168),
    [anon_sym_enter] = ACTIONS(168),
    [anon_sym_leave] = ACTIONS(168),
    [anon_sym_through] = ACTIONS(168),
    [anon_sym_take] = ACTIONS(168),
    [anon_sym_drop] = ACTIONS(168),
    [anon_sym_examine] = ACTIONS(168),
    [anon_sym_open] = ACTIONS(168),
    [anon_sym_close] = ACTIONS(168),
    [anon_sym_lock] = ACTIONS(168),
    [anon_sym_unlock] = ACTIONS(168),
    [anon_sym_read] = ACTIONS(168),
    [anon_sym_turn_DASHon] = ACTIONS(168),
    [anon_sym_turn_DASHoff] = ACTIONS(168),
    [anon_sym_plug] = ACTIONS(168),
    [anon_sym_unplug] = ACTIONS(168),
    [anon_sym_attack] = ACTIONS(168),
    [anon_sym_push] = ACTIONS(168),
    [anon_sym_pull] = ACTIONS(168),
    [anon_sym_touch] = ACTIONS(168),
    [anon_sym_rub] = ACTIONS(168),
    [anon_sym_click] = ACTIONS(168),
    [anon_sym_point] = ACTIONS(168),
    [anon_sym_eat] = ACTIONS(168),
    [anon_sym_drink] = ACTIONS(168),
    [anon_sym_wear] = ACTIONS(168),
    [anon_sym_climb] = ACTIONS(168),
    [anon_sym_sit] = ACTIONS(168),
    [anon_sym_stand] = ACTIONS(168),
    [anon_sym_smell] = ACTIONS(168),
    [anon_sym_listen] = ACTIONS(168),
    [anon_sym_ask_DASHabout] = ACTIONS(168),
    [anon_sym_tell_DASHabout] = ACTIONS(168),
    [anon_sym_give] = ACTIONS(168),
    [anon_sym_trade] = ACTIONS(168),
    [anon_sym_ask_DASHfor] = ACTIONS(168),
    [anon_sym_help] = ACTIONS(168),
    [anon_sym_put_DASHon] = ACTIONS(168),
    [anon_sym_put_DASHin] = ACTIONS(168),
    [anon_sym_on_DASHenter] = ACTIONS(168),
    [anon_sym_before_DASHaction] = ACTIONS(168),
    [anon_sym_process_DASHevents] = ACTIONS(168),
    [anon_sym_true] = ACTIONS(168),
    [anon_sym_false] = ACTIONS(168),
    [anon_sym_nil] = ACTIONS(168),
    [sym_identifier] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [sym_number] = ACTIONS(166),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(170), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      aux_sym_string_token1,
    ACTIONS(176), 1,
      anon_sym_BSLASH,
    STATE(25), 1,
      aux_sym_string_repeat1,
  [16] = 5,
    ACTIONS(170), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_BSLASH,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      aux_sym_string_token1,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [32] = 5,
    ACTIONS(170), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      aux_sym_string_token1,
    ACTIONS(187), 1,
      anon_sym_BSLASH,
    STATE(25), 1,
      aux_sym_string_repeat1,
  [48] = 2,
    ACTIONS(170), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [57] = 2,
    ACTIONS(170), 1,
      sym_comment,
    ACTIONS(190), 1,
      aux_sym_string_token2,
  [64] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 16,
  [SMALL_STATE(25)] = 32,
  [SMALL_STATE(26)] = 48,
  [SMALL_STATE(27)] = 57,
  [SMALL_STATE(28)] = 64,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_form, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_form, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_behavior_name, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_behavior_name, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defform, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defform, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_grue(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
