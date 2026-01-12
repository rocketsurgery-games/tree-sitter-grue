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
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 174
#define ALIAS_COUNT 0
#define TOKEN_COUNT 157
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  sym_entity_ref = 4,
  sym_binding_ref = 5,
  sym_keyword = 6,
  anon_sym_world = 7,
  anon_sym_room = 8,
  anon_sym_object = 9,
  anon_sym_event = 10,
  anon_sym_victory = 11,
  anon_sym_defeat = 12,
  anon_sym_default = 13,
  anon_sym_globals = 14,
  anon_sym_defsyntax = 15,
  anon_sym_defglobal = 16,
  anon_sym_defroutine = 17,
  anon_sym_fn = 18,
  anon_sym_lambda = 19,
  anon_sym_defn = 20,
  anon_sym_cond = 21,
  anon_sym_if = 22,
  anon_sym_let = 23,
  anon_sym_and = 24,
  anon_sym_or = 25,
  anon_sym_not = 26,
  anon_sym_any = 27,
  anon_sym_all = 28,
  anon_sym_seq = 29,
  anon_sym_when = 30,
  anon_sym_success = 31,
  anon_sym_blocked = 32,
  anon_sym_redirect = 33,
  anon_sym_outcome = 34,
  anon_sym_go = 35,
  anon_sym_do = 36,
  anon_sym_tell = 37,
  anon_sym_random = 38,
  anon_sym_first_DASHchild = 39,
  anon_sym_next_DASHsibling = 40,
  anon_sym_first_DASHin = 41,
  anon_sym_PLUS = 42,
  anon_sym_DASH = 43,
  anon_sym_STAR = 44,
  anon_sym_SLASH = 45,
  anon_sym_PERCENT = 46,
  anon_sym_EQ = 47,
  anon_sym_GT = 48,
  anon_sym_LT = 49,
  anon_sym_GT_EQ = 50,
  anon_sym_LT_EQ = 51,
  anon_sym_has_DASHflag = 52,
  anon_sym_has_DASHflag_QMARK = 53,
  anon_sym_loc = 54,
  anon_sym_prop = 55,
  anon_sym_flags = 56,
  anon_sym_visible_QMARK = 57,
  anon_sym_held_QMARK = 58,
  anon_sym_here_QMARK = 59,
  anon_sym_in_QMARK = 60,
  anon_sym_held_DASHby_QMARK = 61,
  anon_sym_at_QMARK = 62,
  anon_sym_room_QMARK = 63,
  anon_sym_in_DASHroom_QMARK = 64,
  anon_sym_room_DASHhas_DASHflag_QMARK = 65,
  anon_sym_inventory = 66,
  anon_sym_contents = 67,
  anon_sym_exit_QMARK = 68,
  anon_sym_exit_DASHto = 69,
  anon_sym_exit_DASHvia = 70,
  anon_sym_queued_QMARK = 71,
  anon_sym_eq_QMARK = 72,
  anon_sym_outcome_QMARK = 73,
  anon_sym_reason_QMARK = 74,
  anon_sym_context_QMARK = 75,
  anon_sym_player_DASHat_QMARK = 76,
  anon_sym_global_QMARK = 77,
  anon_sym_not_DASHqueued_QMARK = 78,
  anon_sym_move_BANG = 79,
  anon_sym_set_DASHflag_BANG = 80,
  anon_sym_clear_DASHflag_BANG = 81,
  anon_sym_set_DASHprop_BANG = 82,
  anon_sym_set_BANG = 83,
  anon_sym_inc_BANG = 84,
  anon_sym_queue_BANG = 85,
  anon_sym_dequeue_BANG = 86,
  anon_sym_get_DASHprop = 87,
  anon_sym_put_DASHprop = 88,
  anon_sym_test = 89,
  anon_sym_test_DASHsequence = 90,
  anon_sym_step = 91,
  anon_sym_north = 92,
  anon_sym_south = 93,
  anon_sym_east = 94,
  anon_sym_west = 95,
  anon_sym_up = 96,
  anon_sym_down = 97,
  anon_sym_northeast = 98,
  anon_sym_northwest = 99,
  anon_sym_southeast = 100,
  anon_sym_southwest = 101,
  anon_sym_in = 102,
  anon_sym_out = 103,
  anon_sym_land = 104,
  sym_flag = 105,
  anon_sym_enter = 106,
  anon_sym_leave = 107,
  anon_sym_through = 108,
  anon_sym_take = 109,
  anon_sym_drop = 110,
  anon_sym_examine = 111,
  anon_sym_open = 112,
  anon_sym_close = 113,
  anon_sym_lock = 114,
  anon_sym_unlock = 115,
  anon_sym_read = 116,
  anon_sym_turn_DASHon = 117,
  anon_sym_turn_DASHoff = 118,
  anon_sym_plug = 119,
  anon_sym_unplug = 120,
  anon_sym_attack = 121,
  anon_sym_push = 122,
  anon_sym_pull = 123,
  anon_sym_touch = 124,
  anon_sym_rub = 125,
  anon_sym_click = 126,
  anon_sym_point = 127,
  anon_sym_eat = 128,
  anon_sym_drink = 129,
  anon_sym_wear = 130,
  anon_sym_remove = 131,
  anon_sym_climb = 132,
  anon_sym_sit = 133,
  anon_sym_stand = 134,
  anon_sym_smell = 135,
  anon_sym_listen = 136,
  anon_sym_ask_DASHabout = 137,
  anon_sym_tell_DASHabout = 138,
  anon_sym_give = 139,
  anon_sym_trade = 140,
  anon_sym_ask_DASHfor = 141,
  anon_sym_help = 142,
  anon_sym_put_DASHon = 143,
  anon_sym_put_DASHin = 144,
  anon_sym_on_DASHenter = 145,
  anon_sym_before_DASHaction = 146,
  anon_sym_process_DASHevents = 147,
  anon_sym_true = 148,
  anon_sym_false = 149,
  anon_sym_nil = 150,
  sym_identifier = 151,
  anon_sym_DQUOTE = 152,
  aux_sym_string_token1 = 153,
  anon_sym_BSLASH = 154,
  aux_sym_string_token2 = 155,
  sym_number = 156,
  sym_source_file = 157,
  sym__form = 158,
  sym_list = 159,
  sym_symbol = 160,
  sym_defform = 161,
  sym_special_form = 162,
  sym_builtin = 163,
  sym_operator = 164,
  sym_predicate = 165,
  sym_effect = 166,
  sym_test_form = 167,
  sym_direction = 168,
  sym_behavior_name = 169,
  sym_boolean = 170,
  sym_string = 171,
  aux_sym_source_file_repeat1 = 172,
  aux_sym_string_repeat1 = 173,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_cond] = "cond",
  [anon_sym_if] = "if",
  [anon_sym_let] = "let",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_any] = "any",
  [anon_sym_all] = "all",
  [anon_sym_seq] = "seq",
  [anon_sym_when] = "when",
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
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_has_DASHflag] = "has-flag",
  [anon_sym_has_DASHflag_QMARK] = "has-flag\?",
  [anon_sym_loc] = "loc",
  [anon_sym_prop] = "prop",
  [anon_sym_flags] = "flags",
  [anon_sym_visible_QMARK] = "visible\?",
  [anon_sym_held_QMARK] = "held\?",
  [anon_sym_here_QMARK] = "here\?",
  [anon_sym_in_QMARK] = "in\?",
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
  [anon_sym_outcome_QMARK] = "outcome\?",
  [anon_sym_reason_QMARK] = "reason\?",
  [anon_sym_context_QMARK] = "context\?",
  [anon_sym_player_DASHat_QMARK] = "player-at\?",
  [anon_sym_global_QMARK] = "global\?",
  [anon_sym_not_DASHqueued_QMARK] = "not-queued\?",
  [anon_sym_move_BANG] = "move!",
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
  [anon_sym_remove] = "remove",
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
  [anon_sym_cond] = anon_sym_cond,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_when] = anon_sym_when,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_has_DASHflag] = anon_sym_has_DASHflag,
  [anon_sym_has_DASHflag_QMARK] = anon_sym_has_DASHflag_QMARK,
  [anon_sym_loc] = anon_sym_loc,
  [anon_sym_prop] = anon_sym_prop,
  [anon_sym_flags] = anon_sym_flags,
  [anon_sym_visible_QMARK] = anon_sym_visible_QMARK,
  [anon_sym_held_QMARK] = anon_sym_held_QMARK,
  [anon_sym_here_QMARK] = anon_sym_here_QMARK,
  [anon_sym_in_QMARK] = anon_sym_in_QMARK,
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
  [anon_sym_outcome_QMARK] = anon_sym_outcome_QMARK,
  [anon_sym_reason_QMARK] = anon_sym_reason_QMARK,
  [anon_sym_context_QMARK] = anon_sym_context_QMARK,
  [anon_sym_player_DASHat_QMARK] = anon_sym_player_DASHat_QMARK,
  [anon_sym_global_QMARK] = anon_sym_global_QMARK,
  [anon_sym_not_DASHqueued_QMARK] = anon_sym_not_DASHqueued_QMARK,
  [anon_sym_move_BANG] = anon_sym_move_BANG,
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
  [anon_sym_remove] = anon_sym_remove,
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
  [anon_sym_remove] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '"', 655,
        '%', 53,
        '(', 9,
        ')', 10,
        '*', 51,
        '+', 49,
        '-', 50,
        '/', 52,
        ':', 3,
        ';', 8,
        '<', 56,
        '=', 54,
        '>', 55,
        '?', 4,
        '@', 5,
        'A', 208,
        'C', 247,
        'D', 194,
        'F', 233,
        'I', 252,
        'L', 234,
        'N', 215,
        'O', 253,
        'P', 221,
        'R', 223,
        'S', 225,
        'T', 196,
        'V', 219,
        'W', 227,
        '\\', 658,
        'a', 457,
        'b', 360,
        'c', 467,
        'd', 361,
        'e', 287,
        'f', 296,
        'g', 379,
        'h', 288,
        'i', 411,
        'l', 289,
        'm', 537,
        'n', 362,
        'o', 321,
        'p', 458,
        'q', 627,
        'r', 298,
        's', 363,
        't', 297,
        'u', 490,
        'v', 436,
        'w', 364,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == ';') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(660);
      if (lookahead != 0) ADVANCE(659);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(655);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(658);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(656);
      if (lookahead != 0) ADVANCE(657);
      END_STATE();
    case 3:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 4:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 5:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(657);
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
      ACCEPT_TOKEN(sym_entity_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_binding_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_world);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_room);
      if (lookahead == '-') ADVANCE(435);
      if (lookahead == '?') ADVANCE(70);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_event);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_victory);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_defeat);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_globals);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_defsyntax);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_defglobal);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_defroutine);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-') ADVANCE(551);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_seq);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_success);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_blocked);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_redirect);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_outcome);
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_go);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'w') ADVANCE(492);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_tell);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_random);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_first_DASHchild);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_next_DASHsibling);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_first_DASHin);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_has_DASHflag);
      if (lookahead == '?') ADVANCE(60);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_has_DASHflag_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_loc);
      if (lookahead == 'k') ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_prop);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_flags);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_visible_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_held_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_here_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_in_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_held_DASHby_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_at_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_room_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_in_DASHroom_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_room_DASHhas_DASHflag_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_inventory);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_contents);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_exit_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_exit_DASHto);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_exit_DASHvia);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_queued_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_eq_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_outcome_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_reason_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_context_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_player_DASHat_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_global_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_not_DASHqueued_QMARK);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_move_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_set_DASHflag_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_clear_DASHflag_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_set_DASHprop_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_set_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_inc_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_queue_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_dequeue_BANG);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_get_DASHprop);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_put_DASHprop);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == '-') ADVANCE(584);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_test_DASHsequence);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_step);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_north);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'w') ADVANCE(405);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_south);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == 'w') ADVANCE(409);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_east);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_west);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_up);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_down);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_northeast);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_northwest);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_southeast);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_southwest);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(563);
      if (lookahead == '?') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'v') ADVANCE(407);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_land);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_enter);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_leave);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_through);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_take);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_drop);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_examine);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_close);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_lock);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_unlock);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_turn_DASHon);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_turn_DASHoff);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_plug);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_unplug);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_attack);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_pull);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_touch);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_rub);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_point);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_eat);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_drink);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_wear);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_climb);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_sit);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_stand);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_smell);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_listen);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ask_DASHabout);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_tell_DASHabout);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_give);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_trade);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_ask_DASHfor);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_help);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_put_DASHon);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_put_DASHin);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_on_DASHenter);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_before_DASHaction);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_process_DASHevents);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '-') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(589);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(396);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(79);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(78);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(72);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(284);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(282);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(250);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(211);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(206);
      if (lookahead == 'B') ADVANCE(241);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(264);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'Y') ADVANCE(281);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(266);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(248);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(241);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(277);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(231);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(218);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(245);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(220);
      if (lookahead == 'O') ADVANCE(195);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(217);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(272);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(268);
      if (lookahead == 'O') ADVANCE(285);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'M') ADVANCE(283);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(255);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == 'U') ADVANCE(265);
      if (lookahead == 'W') ADVANCE(240);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(263);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(202);
      if (lookahead == 'O') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(200);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(232);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(278);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(286);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'O') ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(230);
      if (lookahead == 'O') ADVANCE(212);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(249);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(211);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(216);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(276);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(222);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(218);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(235);
      if (lookahead == 'O') ADVANCE(257);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(205);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(273);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(207);
      if (lookahead == 'P') ADVANCE(224);
      if (lookahead == 'U') ADVANCE(280);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(229);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(278);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(244);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(270);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(214);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(264);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(228);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(210);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(243);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(254);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(262);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(209);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(239);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(239);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(261);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(210);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(274);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(197);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(210);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(256);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(237);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(226);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(222);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead == 'q') ADVANCE(182);
      if (lookahead == 'v') ADVANCE(386);
      if (lookahead == 'x') ADVANCE(290);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(586);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == 'd') ADVANCE(446);
      if (lookahead == 'm') ADVANCE(540);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == 'h') ADVANCE(559);
      if (lookahead == 'o') ADVANCE(630);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == 'u') ADVANCE(560);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(367);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == 'g') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead == 's') ADVANCE(653);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 's') ADVANCE(596);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'f') ADVANCE(532);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(617);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'p') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(591);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(651);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(356);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(311);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(475);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(481);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(539);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(541);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead == 'm') ADVANCE(323);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(342);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(432);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(452);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(434);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(622);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(600);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(602);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(615);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(456);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(294);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(524);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(631);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == 'u') ADVANCE(334);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(391);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 'l') ADVANCE(519);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(578);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(301);
      if (lookahead == 'q') ADVANCE(640);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(528);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(476);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(479);
      if (lookahead == 'p') ADVANCE(567);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(480);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(571);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(433);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(115);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(443);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(320);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(510);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(505);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(507);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(512);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(389);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(366);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(390);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(468);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(380);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(462);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(629);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == 's') ADVANCE(595);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(601);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(580);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(542);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(325);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(376);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(439);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(597);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(619);
      if (lookahead == 'x') ADVANCE(613);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(618);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(625);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(485);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(628);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(568);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(635);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(645);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(638);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(36);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(639);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(641);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(649);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(650);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(609);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(471);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(523);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(398);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(593);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(572);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(604);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(605);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(606);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(607);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(616);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(430);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(573);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(574);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(517);
      if (lookahead == 'v') ADVANCE(440);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(533);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(399);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(402);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(427);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(421);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(335);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(611);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(474);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(623);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(603);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(384);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(608);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(365);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(382);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(371);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(374);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(410);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(614);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(18);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(397);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(509);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(657);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(660);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(659);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
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
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_has_DASHflag] = ACTIONS(1),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(1),
    [anon_sym_loc] = ACTIONS(1),
    [anon_sym_prop] = ACTIONS(1),
    [anon_sym_flags] = ACTIONS(1),
    [anon_sym_visible_QMARK] = ACTIONS(1),
    [anon_sym_held_QMARK] = ACTIONS(1),
    [anon_sym_here_QMARK] = ACTIONS(1),
    [anon_sym_in_QMARK] = ACTIONS(1),
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
    [anon_sym_outcome_QMARK] = ACTIONS(1),
    [anon_sym_reason_QMARK] = ACTIONS(1),
    [anon_sym_context_QMARK] = ACTIONS(1),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(1),
    [anon_sym_global_QMARK] = ACTIONS(1),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(1),
    [anon_sym_move_BANG] = ACTIONS(1),
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
    [anon_sym_remove] = ACTIONS(1),
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
    [sym_source_file] = STATE(25),
    [sym__form] = STATE(5),
    [sym_list] = STATE(5),
    [sym_symbol] = STATE(5),
    [sym_defform] = STATE(11),
    [sym_special_form] = STATE(11),
    [sym_builtin] = STATE(11),
    [sym_operator] = STATE(11),
    [sym_predicate] = STATE(11),
    [sym_effect] = STATE(11),
    [sym_test_form] = STATE(11),
    [sym_direction] = STATE(11),
    [sym_behavior_name] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_entity_ref] = ACTIONS(9),
    [sym_binding_ref] = ACTIONS(9),
    [sym_keyword] = ACTIONS(9),
    [anon_sym_world] = ACTIONS(11),
    [anon_sym_room] = ACTIONS(11),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_event] = ACTIONS(11),
    [anon_sym_victory] = ACTIONS(11),
    [anon_sym_defeat] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_globals] = ACTIONS(11),
    [anon_sym_defsyntax] = ACTIONS(11),
    [anon_sym_defglobal] = ACTIONS(11),
    [anon_sym_defroutine] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_lambda] = ACTIONS(13),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_cond] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_all] = ACTIONS(13),
    [anon_sym_seq] = ACTIONS(13),
    [anon_sym_when] = ACTIONS(13),
    [anon_sym_success] = ACTIONS(15),
    [anon_sym_blocked] = ACTIONS(15),
    [anon_sym_redirect] = ACTIONS(15),
    [anon_sym_outcome] = ACTIONS(15),
    [anon_sym_go] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_tell] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_first_DASHchild] = ACTIONS(15),
    [anon_sym_next_DASHsibling] = ACTIONS(15),
    [anon_sym_first_DASHin] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_has_DASHflag] = ACTIONS(21),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(21),
    [anon_sym_loc] = ACTIONS(21),
    [anon_sym_prop] = ACTIONS(21),
    [anon_sym_flags] = ACTIONS(21),
    [anon_sym_visible_QMARK] = ACTIONS(21),
    [anon_sym_held_QMARK] = ACTIONS(21),
    [anon_sym_here_QMARK] = ACTIONS(21),
    [anon_sym_in_QMARK] = ACTIONS(21),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(21),
    [anon_sym_at_QMARK] = ACTIONS(21),
    [anon_sym_room_QMARK] = ACTIONS(21),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(21),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(21),
    [anon_sym_inventory] = ACTIONS(21),
    [anon_sym_contents] = ACTIONS(21),
    [anon_sym_exit_QMARK] = ACTIONS(21),
    [anon_sym_exit_DASHto] = ACTIONS(21),
    [anon_sym_exit_DASHvia] = ACTIONS(21),
    [anon_sym_queued_QMARK] = ACTIONS(21),
    [anon_sym_eq_QMARK] = ACTIONS(21),
    [anon_sym_outcome_QMARK] = ACTIONS(21),
    [anon_sym_reason_QMARK] = ACTIONS(21),
    [anon_sym_context_QMARK] = ACTIONS(21),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(21),
    [anon_sym_global_QMARK] = ACTIONS(21),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(21),
    [anon_sym_move_BANG] = ACTIONS(23),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(23),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(23),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(23),
    [anon_sym_set_BANG] = ACTIONS(23),
    [anon_sym_inc_BANG] = ACTIONS(23),
    [anon_sym_queue_BANG] = ACTIONS(23),
    [anon_sym_dequeue_BANG] = ACTIONS(23),
    [anon_sym_get_DASHprop] = ACTIONS(23),
    [anon_sym_put_DASHprop] = ACTIONS(23),
    [anon_sym_test] = ACTIONS(25),
    [anon_sym_test_DASHsequence] = ACTIONS(25),
    [anon_sym_step] = ACTIONS(25),
    [anon_sym_north] = ACTIONS(27),
    [anon_sym_south] = ACTIONS(27),
    [anon_sym_east] = ACTIONS(27),
    [anon_sym_west] = ACTIONS(27),
    [anon_sym_up] = ACTIONS(27),
    [anon_sym_down] = ACTIONS(27),
    [anon_sym_northeast] = ACTIONS(27),
    [anon_sym_northwest] = ACTIONS(27),
    [anon_sym_southeast] = ACTIONS(27),
    [anon_sym_southwest] = ACTIONS(27),
    [anon_sym_in] = ACTIONS(27),
    [anon_sym_out] = ACTIONS(27),
    [anon_sym_land] = ACTIONS(27),
    [sym_flag] = ACTIONS(29),
    [anon_sym_enter] = ACTIONS(31),
    [anon_sym_leave] = ACTIONS(31),
    [anon_sym_through] = ACTIONS(31),
    [anon_sym_take] = ACTIONS(31),
    [anon_sym_drop] = ACTIONS(31),
    [anon_sym_examine] = ACTIONS(31),
    [anon_sym_open] = ACTIONS(31),
    [anon_sym_close] = ACTIONS(31),
    [anon_sym_lock] = ACTIONS(31),
    [anon_sym_unlock] = ACTIONS(31),
    [anon_sym_read] = ACTIONS(31),
    [anon_sym_turn_DASHon] = ACTIONS(31),
    [anon_sym_turn_DASHoff] = ACTIONS(31),
    [anon_sym_plug] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_attack] = ACTIONS(31),
    [anon_sym_push] = ACTIONS(31),
    [anon_sym_pull] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_rub] = ACTIONS(31),
    [anon_sym_click] = ACTIONS(31),
    [anon_sym_point] = ACTIONS(31),
    [anon_sym_eat] = ACTIONS(31),
    [anon_sym_drink] = ACTIONS(31),
    [anon_sym_wear] = ACTIONS(31),
    [anon_sym_remove] = ACTIONS(31),
    [anon_sym_climb] = ACTIONS(31),
    [anon_sym_sit] = ACTIONS(31),
    [anon_sym_stand] = ACTIONS(31),
    [anon_sym_smell] = ACTIONS(31),
    [anon_sym_listen] = ACTIONS(31),
    [anon_sym_ask_DASHabout] = ACTIONS(31),
    [anon_sym_tell_DASHabout] = ACTIONS(31),
    [anon_sym_give] = ACTIONS(31),
    [anon_sym_trade] = ACTIONS(31),
    [anon_sym_ask_DASHfor] = ACTIONS(31),
    [anon_sym_help] = ACTIONS(31),
    [anon_sym_put_DASHon] = ACTIONS(31),
    [anon_sym_put_DASHin] = ACTIONS(31),
    [anon_sym_on_DASHenter] = ACTIONS(31),
    [anon_sym_before_DASHaction] = ACTIONS(31),
    [anon_sym_process_DASHevents] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_nil] = ACTIONS(33),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_number] = ACTIONS(9),
  },
  [2] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_defform] = STATE(11),
    [sym_special_form] = STATE(11),
    [sym_builtin] = STATE(11),
    [sym_operator] = STATE(11),
    [sym_predicate] = STATE(11),
    [sym_effect] = STATE(11),
    [sym_test_form] = STATE(11),
    [sym_direction] = STATE(11),
    [sym_behavior_name] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(37),
    [sym_entity_ref] = ACTIONS(42),
    [sym_binding_ref] = ACTIONS(42),
    [sym_keyword] = ACTIONS(42),
    [anon_sym_world] = ACTIONS(45),
    [anon_sym_room] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(45),
    [anon_sym_event] = ACTIONS(45),
    [anon_sym_victory] = ACTIONS(45),
    [anon_sym_defeat] = ACTIONS(45),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_globals] = ACTIONS(45),
    [anon_sym_defsyntax] = ACTIONS(45),
    [anon_sym_defglobal] = ACTIONS(45),
    [anon_sym_defroutine] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(48),
    [anon_sym_lambda] = ACTIONS(48),
    [anon_sym_defn] = ACTIONS(48),
    [anon_sym_cond] = ACTIONS(48),
    [anon_sym_if] = ACTIONS(48),
    [anon_sym_let] = ACTIONS(48),
    [anon_sym_and] = ACTIONS(48),
    [anon_sym_or] = ACTIONS(48),
    [anon_sym_not] = ACTIONS(48),
    [anon_sym_any] = ACTIONS(48),
    [anon_sym_all] = ACTIONS(48),
    [anon_sym_seq] = ACTIONS(48),
    [anon_sym_when] = ACTIONS(48),
    [anon_sym_success] = ACTIONS(51),
    [anon_sym_blocked] = ACTIONS(51),
    [anon_sym_redirect] = ACTIONS(51),
    [anon_sym_outcome] = ACTIONS(51),
    [anon_sym_go] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_tell] = ACTIONS(51),
    [anon_sym_random] = ACTIONS(51),
    [anon_sym_first_DASHchild] = ACTIONS(51),
    [anon_sym_next_DASHsibling] = ACTIONS(51),
    [anon_sym_first_DASHin] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(54),
    [anon_sym_PERCENT] = ACTIONS(54),
    [anon_sym_EQ] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(54),
    [anon_sym_LT_EQ] = ACTIONS(54),
    [anon_sym_has_DASHflag] = ACTIONS(60),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(60),
    [anon_sym_loc] = ACTIONS(60),
    [anon_sym_prop] = ACTIONS(60),
    [anon_sym_flags] = ACTIONS(60),
    [anon_sym_visible_QMARK] = ACTIONS(60),
    [anon_sym_held_QMARK] = ACTIONS(60),
    [anon_sym_here_QMARK] = ACTIONS(60),
    [anon_sym_in_QMARK] = ACTIONS(60),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(60),
    [anon_sym_at_QMARK] = ACTIONS(60),
    [anon_sym_room_QMARK] = ACTIONS(60),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(60),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(60),
    [anon_sym_inventory] = ACTIONS(60),
    [anon_sym_contents] = ACTIONS(60),
    [anon_sym_exit_QMARK] = ACTIONS(60),
    [anon_sym_exit_DASHto] = ACTIONS(60),
    [anon_sym_exit_DASHvia] = ACTIONS(60),
    [anon_sym_queued_QMARK] = ACTIONS(60),
    [anon_sym_eq_QMARK] = ACTIONS(60),
    [anon_sym_outcome_QMARK] = ACTIONS(60),
    [anon_sym_reason_QMARK] = ACTIONS(60),
    [anon_sym_context_QMARK] = ACTIONS(60),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(60),
    [anon_sym_global_QMARK] = ACTIONS(60),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(60),
    [anon_sym_move_BANG] = ACTIONS(63),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(63),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(63),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(63),
    [anon_sym_set_BANG] = ACTIONS(63),
    [anon_sym_inc_BANG] = ACTIONS(63),
    [anon_sym_queue_BANG] = ACTIONS(63),
    [anon_sym_dequeue_BANG] = ACTIONS(63),
    [anon_sym_get_DASHprop] = ACTIONS(63),
    [anon_sym_put_DASHprop] = ACTIONS(63),
    [anon_sym_test] = ACTIONS(66),
    [anon_sym_test_DASHsequence] = ACTIONS(66),
    [anon_sym_step] = ACTIONS(66),
    [anon_sym_north] = ACTIONS(69),
    [anon_sym_south] = ACTIONS(69),
    [anon_sym_east] = ACTIONS(69),
    [anon_sym_west] = ACTIONS(69),
    [anon_sym_up] = ACTIONS(69),
    [anon_sym_down] = ACTIONS(69),
    [anon_sym_northeast] = ACTIONS(69),
    [anon_sym_northwest] = ACTIONS(69),
    [anon_sym_southeast] = ACTIONS(69),
    [anon_sym_southwest] = ACTIONS(69),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_out] = ACTIONS(69),
    [anon_sym_land] = ACTIONS(69),
    [sym_flag] = ACTIONS(72),
    [anon_sym_enter] = ACTIONS(75),
    [anon_sym_leave] = ACTIONS(75),
    [anon_sym_through] = ACTIONS(75),
    [anon_sym_take] = ACTIONS(75),
    [anon_sym_drop] = ACTIONS(75),
    [anon_sym_examine] = ACTIONS(75),
    [anon_sym_open] = ACTIONS(75),
    [anon_sym_close] = ACTIONS(75),
    [anon_sym_lock] = ACTIONS(75),
    [anon_sym_unlock] = ACTIONS(75),
    [anon_sym_read] = ACTIONS(75),
    [anon_sym_turn_DASHon] = ACTIONS(75),
    [anon_sym_turn_DASHoff] = ACTIONS(75),
    [anon_sym_plug] = ACTIONS(75),
    [anon_sym_unplug] = ACTIONS(75),
    [anon_sym_attack] = ACTIONS(75),
    [anon_sym_push] = ACTIONS(75),
    [anon_sym_pull] = ACTIONS(75),
    [anon_sym_touch] = ACTIONS(75),
    [anon_sym_rub] = ACTIONS(75),
    [anon_sym_click] = ACTIONS(75),
    [anon_sym_point] = ACTIONS(75),
    [anon_sym_eat] = ACTIONS(75),
    [anon_sym_drink] = ACTIONS(75),
    [anon_sym_wear] = ACTIONS(75),
    [anon_sym_remove] = ACTIONS(75),
    [anon_sym_climb] = ACTIONS(75),
    [anon_sym_sit] = ACTIONS(75),
    [anon_sym_stand] = ACTIONS(75),
    [anon_sym_smell] = ACTIONS(75),
    [anon_sym_listen] = ACTIONS(75),
    [anon_sym_ask_DASHabout] = ACTIONS(75),
    [anon_sym_tell_DASHabout] = ACTIONS(75),
    [anon_sym_give] = ACTIONS(75),
    [anon_sym_trade] = ACTIONS(75),
    [anon_sym_ask_DASHfor] = ACTIONS(75),
    [anon_sym_help] = ACTIONS(75),
    [anon_sym_put_DASHon] = ACTIONS(75),
    [anon_sym_put_DASHin] = ACTIONS(75),
    [anon_sym_on_DASHenter] = ACTIONS(75),
    [anon_sym_before_DASHaction] = ACTIONS(75),
    [anon_sym_process_DASHevents] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(78),
    [anon_sym_false] = ACTIONS(78),
    [anon_sym_nil] = ACTIONS(78),
    [sym_identifier] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(42),
  },
  [3] = {
    [sym__form] = STATE(4),
    [sym_list] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_defform] = STATE(11),
    [sym_special_form] = STATE(11),
    [sym_builtin] = STATE(11),
    [sym_operator] = STATE(11),
    [sym_predicate] = STATE(11),
    [sym_effect] = STATE(11),
    [sym_test_form] = STATE(11),
    [sym_direction] = STATE(11),
    [sym_behavior_name] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(84),
    [sym_entity_ref] = ACTIONS(86),
    [sym_binding_ref] = ACTIONS(86),
    [sym_keyword] = ACTIONS(86),
    [anon_sym_world] = ACTIONS(11),
    [anon_sym_room] = ACTIONS(11),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_event] = ACTIONS(11),
    [anon_sym_victory] = ACTIONS(11),
    [anon_sym_defeat] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_globals] = ACTIONS(11),
    [anon_sym_defsyntax] = ACTIONS(11),
    [anon_sym_defglobal] = ACTIONS(11),
    [anon_sym_defroutine] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_lambda] = ACTIONS(13),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_cond] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_all] = ACTIONS(13),
    [anon_sym_seq] = ACTIONS(13),
    [anon_sym_when] = ACTIONS(13),
    [anon_sym_success] = ACTIONS(15),
    [anon_sym_blocked] = ACTIONS(15),
    [anon_sym_redirect] = ACTIONS(15),
    [anon_sym_outcome] = ACTIONS(15),
    [anon_sym_go] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_tell] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_first_DASHchild] = ACTIONS(15),
    [anon_sym_next_DASHsibling] = ACTIONS(15),
    [anon_sym_first_DASHin] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_has_DASHflag] = ACTIONS(21),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(21),
    [anon_sym_loc] = ACTIONS(21),
    [anon_sym_prop] = ACTIONS(21),
    [anon_sym_flags] = ACTIONS(21),
    [anon_sym_visible_QMARK] = ACTIONS(21),
    [anon_sym_held_QMARK] = ACTIONS(21),
    [anon_sym_here_QMARK] = ACTIONS(21),
    [anon_sym_in_QMARK] = ACTIONS(21),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(21),
    [anon_sym_at_QMARK] = ACTIONS(21),
    [anon_sym_room_QMARK] = ACTIONS(21),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(21),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(21),
    [anon_sym_inventory] = ACTIONS(21),
    [anon_sym_contents] = ACTIONS(21),
    [anon_sym_exit_QMARK] = ACTIONS(21),
    [anon_sym_exit_DASHto] = ACTIONS(21),
    [anon_sym_exit_DASHvia] = ACTIONS(21),
    [anon_sym_queued_QMARK] = ACTIONS(21),
    [anon_sym_eq_QMARK] = ACTIONS(21),
    [anon_sym_outcome_QMARK] = ACTIONS(21),
    [anon_sym_reason_QMARK] = ACTIONS(21),
    [anon_sym_context_QMARK] = ACTIONS(21),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(21),
    [anon_sym_global_QMARK] = ACTIONS(21),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(21),
    [anon_sym_move_BANG] = ACTIONS(23),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(23),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(23),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(23),
    [anon_sym_set_BANG] = ACTIONS(23),
    [anon_sym_inc_BANG] = ACTIONS(23),
    [anon_sym_queue_BANG] = ACTIONS(23),
    [anon_sym_dequeue_BANG] = ACTIONS(23),
    [anon_sym_get_DASHprop] = ACTIONS(23),
    [anon_sym_put_DASHprop] = ACTIONS(23),
    [anon_sym_test] = ACTIONS(25),
    [anon_sym_test_DASHsequence] = ACTIONS(25),
    [anon_sym_step] = ACTIONS(25),
    [anon_sym_north] = ACTIONS(27),
    [anon_sym_south] = ACTIONS(27),
    [anon_sym_east] = ACTIONS(27),
    [anon_sym_west] = ACTIONS(27),
    [anon_sym_up] = ACTIONS(27),
    [anon_sym_down] = ACTIONS(27),
    [anon_sym_northeast] = ACTIONS(27),
    [anon_sym_northwest] = ACTIONS(27),
    [anon_sym_southeast] = ACTIONS(27),
    [anon_sym_southwest] = ACTIONS(27),
    [anon_sym_in] = ACTIONS(27),
    [anon_sym_out] = ACTIONS(27),
    [anon_sym_land] = ACTIONS(27),
    [sym_flag] = ACTIONS(29),
    [anon_sym_enter] = ACTIONS(31),
    [anon_sym_leave] = ACTIONS(31),
    [anon_sym_through] = ACTIONS(31),
    [anon_sym_take] = ACTIONS(31),
    [anon_sym_drop] = ACTIONS(31),
    [anon_sym_examine] = ACTIONS(31),
    [anon_sym_open] = ACTIONS(31),
    [anon_sym_close] = ACTIONS(31),
    [anon_sym_lock] = ACTIONS(31),
    [anon_sym_unlock] = ACTIONS(31),
    [anon_sym_read] = ACTIONS(31),
    [anon_sym_turn_DASHon] = ACTIONS(31),
    [anon_sym_turn_DASHoff] = ACTIONS(31),
    [anon_sym_plug] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_attack] = ACTIONS(31),
    [anon_sym_push] = ACTIONS(31),
    [anon_sym_pull] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_rub] = ACTIONS(31),
    [anon_sym_click] = ACTIONS(31),
    [anon_sym_point] = ACTIONS(31),
    [anon_sym_eat] = ACTIONS(31),
    [anon_sym_drink] = ACTIONS(31),
    [anon_sym_wear] = ACTIONS(31),
    [anon_sym_remove] = ACTIONS(31),
    [anon_sym_climb] = ACTIONS(31),
    [anon_sym_sit] = ACTIONS(31),
    [anon_sym_stand] = ACTIONS(31),
    [anon_sym_smell] = ACTIONS(31),
    [anon_sym_listen] = ACTIONS(31),
    [anon_sym_ask_DASHabout] = ACTIONS(31),
    [anon_sym_tell_DASHabout] = ACTIONS(31),
    [anon_sym_give] = ACTIONS(31),
    [anon_sym_trade] = ACTIONS(31),
    [anon_sym_ask_DASHfor] = ACTIONS(31),
    [anon_sym_help] = ACTIONS(31),
    [anon_sym_put_DASHon] = ACTIONS(31),
    [anon_sym_put_DASHin] = ACTIONS(31),
    [anon_sym_on_DASHenter] = ACTIONS(31),
    [anon_sym_before_DASHaction] = ACTIONS(31),
    [anon_sym_process_DASHevents] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_nil] = ACTIONS(33),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_number] = ACTIONS(86),
  },
  [4] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_defform] = STATE(11),
    [sym_special_form] = STATE(11),
    [sym_builtin] = STATE(11),
    [sym_operator] = STATE(11),
    [sym_predicate] = STATE(11),
    [sym_effect] = STATE(11),
    [sym_test_form] = STATE(11),
    [sym_direction] = STATE(11),
    [sym_behavior_name] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(88),
    [sym_entity_ref] = ACTIONS(90),
    [sym_binding_ref] = ACTIONS(90),
    [sym_keyword] = ACTIONS(90),
    [anon_sym_world] = ACTIONS(11),
    [anon_sym_room] = ACTIONS(11),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_event] = ACTIONS(11),
    [anon_sym_victory] = ACTIONS(11),
    [anon_sym_defeat] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_globals] = ACTIONS(11),
    [anon_sym_defsyntax] = ACTIONS(11),
    [anon_sym_defglobal] = ACTIONS(11),
    [anon_sym_defroutine] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_lambda] = ACTIONS(13),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_cond] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_all] = ACTIONS(13),
    [anon_sym_seq] = ACTIONS(13),
    [anon_sym_when] = ACTIONS(13),
    [anon_sym_success] = ACTIONS(15),
    [anon_sym_blocked] = ACTIONS(15),
    [anon_sym_redirect] = ACTIONS(15),
    [anon_sym_outcome] = ACTIONS(15),
    [anon_sym_go] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_tell] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_first_DASHchild] = ACTIONS(15),
    [anon_sym_next_DASHsibling] = ACTIONS(15),
    [anon_sym_first_DASHin] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_has_DASHflag] = ACTIONS(21),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(21),
    [anon_sym_loc] = ACTIONS(21),
    [anon_sym_prop] = ACTIONS(21),
    [anon_sym_flags] = ACTIONS(21),
    [anon_sym_visible_QMARK] = ACTIONS(21),
    [anon_sym_held_QMARK] = ACTIONS(21),
    [anon_sym_here_QMARK] = ACTIONS(21),
    [anon_sym_in_QMARK] = ACTIONS(21),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(21),
    [anon_sym_at_QMARK] = ACTIONS(21),
    [anon_sym_room_QMARK] = ACTIONS(21),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(21),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(21),
    [anon_sym_inventory] = ACTIONS(21),
    [anon_sym_contents] = ACTIONS(21),
    [anon_sym_exit_QMARK] = ACTIONS(21),
    [anon_sym_exit_DASHto] = ACTIONS(21),
    [anon_sym_exit_DASHvia] = ACTIONS(21),
    [anon_sym_queued_QMARK] = ACTIONS(21),
    [anon_sym_eq_QMARK] = ACTIONS(21),
    [anon_sym_outcome_QMARK] = ACTIONS(21),
    [anon_sym_reason_QMARK] = ACTIONS(21),
    [anon_sym_context_QMARK] = ACTIONS(21),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(21),
    [anon_sym_global_QMARK] = ACTIONS(21),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(21),
    [anon_sym_move_BANG] = ACTIONS(23),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(23),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(23),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(23),
    [anon_sym_set_BANG] = ACTIONS(23),
    [anon_sym_inc_BANG] = ACTIONS(23),
    [anon_sym_queue_BANG] = ACTIONS(23),
    [anon_sym_dequeue_BANG] = ACTIONS(23),
    [anon_sym_get_DASHprop] = ACTIONS(23),
    [anon_sym_put_DASHprop] = ACTIONS(23),
    [anon_sym_test] = ACTIONS(25),
    [anon_sym_test_DASHsequence] = ACTIONS(25),
    [anon_sym_step] = ACTIONS(25),
    [anon_sym_north] = ACTIONS(27),
    [anon_sym_south] = ACTIONS(27),
    [anon_sym_east] = ACTIONS(27),
    [anon_sym_west] = ACTIONS(27),
    [anon_sym_up] = ACTIONS(27),
    [anon_sym_down] = ACTIONS(27),
    [anon_sym_northeast] = ACTIONS(27),
    [anon_sym_northwest] = ACTIONS(27),
    [anon_sym_southeast] = ACTIONS(27),
    [anon_sym_southwest] = ACTIONS(27),
    [anon_sym_in] = ACTIONS(27),
    [anon_sym_out] = ACTIONS(27),
    [anon_sym_land] = ACTIONS(27),
    [sym_flag] = ACTIONS(29),
    [anon_sym_enter] = ACTIONS(31),
    [anon_sym_leave] = ACTIONS(31),
    [anon_sym_through] = ACTIONS(31),
    [anon_sym_take] = ACTIONS(31),
    [anon_sym_drop] = ACTIONS(31),
    [anon_sym_examine] = ACTIONS(31),
    [anon_sym_open] = ACTIONS(31),
    [anon_sym_close] = ACTIONS(31),
    [anon_sym_lock] = ACTIONS(31),
    [anon_sym_unlock] = ACTIONS(31),
    [anon_sym_read] = ACTIONS(31),
    [anon_sym_turn_DASHon] = ACTIONS(31),
    [anon_sym_turn_DASHoff] = ACTIONS(31),
    [anon_sym_plug] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_attack] = ACTIONS(31),
    [anon_sym_push] = ACTIONS(31),
    [anon_sym_pull] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_rub] = ACTIONS(31),
    [anon_sym_click] = ACTIONS(31),
    [anon_sym_point] = ACTIONS(31),
    [anon_sym_eat] = ACTIONS(31),
    [anon_sym_drink] = ACTIONS(31),
    [anon_sym_wear] = ACTIONS(31),
    [anon_sym_remove] = ACTIONS(31),
    [anon_sym_climb] = ACTIONS(31),
    [anon_sym_sit] = ACTIONS(31),
    [anon_sym_stand] = ACTIONS(31),
    [anon_sym_smell] = ACTIONS(31),
    [anon_sym_listen] = ACTIONS(31),
    [anon_sym_ask_DASHabout] = ACTIONS(31),
    [anon_sym_tell_DASHabout] = ACTIONS(31),
    [anon_sym_give] = ACTIONS(31),
    [anon_sym_trade] = ACTIONS(31),
    [anon_sym_ask_DASHfor] = ACTIONS(31),
    [anon_sym_help] = ACTIONS(31),
    [anon_sym_put_DASHon] = ACTIONS(31),
    [anon_sym_put_DASHin] = ACTIONS(31),
    [anon_sym_on_DASHenter] = ACTIONS(31),
    [anon_sym_before_DASHaction] = ACTIONS(31),
    [anon_sym_process_DASHevents] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_nil] = ACTIONS(33),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_number] = ACTIONS(90),
  },
  [5] = {
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_defform] = STATE(11),
    [sym_special_form] = STATE(11),
    [sym_builtin] = STATE(11),
    [sym_operator] = STATE(11),
    [sym_predicate] = STATE(11),
    [sym_effect] = STATE(11),
    [sym_test_form] = STATE(11),
    [sym_direction] = STATE(11),
    [sym_behavior_name] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_entity_ref] = ACTIONS(90),
    [sym_binding_ref] = ACTIONS(90),
    [sym_keyword] = ACTIONS(90),
    [anon_sym_world] = ACTIONS(11),
    [anon_sym_room] = ACTIONS(11),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_event] = ACTIONS(11),
    [anon_sym_victory] = ACTIONS(11),
    [anon_sym_defeat] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_globals] = ACTIONS(11),
    [anon_sym_defsyntax] = ACTIONS(11),
    [anon_sym_defglobal] = ACTIONS(11),
    [anon_sym_defroutine] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_lambda] = ACTIONS(13),
    [anon_sym_defn] = ACTIONS(13),
    [anon_sym_cond] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_all] = ACTIONS(13),
    [anon_sym_seq] = ACTIONS(13),
    [anon_sym_when] = ACTIONS(13),
    [anon_sym_success] = ACTIONS(15),
    [anon_sym_blocked] = ACTIONS(15),
    [anon_sym_redirect] = ACTIONS(15),
    [anon_sym_outcome] = ACTIONS(15),
    [anon_sym_go] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_tell] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_first_DASHchild] = ACTIONS(15),
    [anon_sym_next_DASHsibling] = ACTIONS(15),
    [anon_sym_first_DASHin] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_has_DASHflag] = ACTIONS(21),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(21),
    [anon_sym_loc] = ACTIONS(21),
    [anon_sym_prop] = ACTIONS(21),
    [anon_sym_flags] = ACTIONS(21),
    [anon_sym_visible_QMARK] = ACTIONS(21),
    [anon_sym_held_QMARK] = ACTIONS(21),
    [anon_sym_here_QMARK] = ACTIONS(21),
    [anon_sym_in_QMARK] = ACTIONS(21),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(21),
    [anon_sym_at_QMARK] = ACTIONS(21),
    [anon_sym_room_QMARK] = ACTIONS(21),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(21),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(21),
    [anon_sym_inventory] = ACTIONS(21),
    [anon_sym_contents] = ACTIONS(21),
    [anon_sym_exit_QMARK] = ACTIONS(21),
    [anon_sym_exit_DASHto] = ACTIONS(21),
    [anon_sym_exit_DASHvia] = ACTIONS(21),
    [anon_sym_queued_QMARK] = ACTIONS(21),
    [anon_sym_eq_QMARK] = ACTIONS(21),
    [anon_sym_outcome_QMARK] = ACTIONS(21),
    [anon_sym_reason_QMARK] = ACTIONS(21),
    [anon_sym_context_QMARK] = ACTIONS(21),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(21),
    [anon_sym_global_QMARK] = ACTIONS(21),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(21),
    [anon_sym_move_BANG] = ACTIONS(23),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(23),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(23),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(23),
    [anon_sym_set_BANG] = ACTIONS(23),
    [anon_sym_inc_BANG] = ACTIONS(23),
    [anon_sym_queue_BANG] = ACTIONS(23),
    [anon_sym_dequeue_BANG] = ACTIONS(23),
    [anon_sym_get_DASHprop] = ACTIONS(23),
    [anon_sym_put_DASHprop] = ACTIONS(23),
    [anon_sym_test] = ACTIONS(25),
    [anon_sym_test_DASHsequence] = ACTIONS(25),
    [anon_sym_step] = ACTIONS(25),
    [anon_sym_north] = ACTIONS(27),
    [anon_sym_south] = ACTIONS(27),
    [anon_sym_east] = ACTIONS(27),
    [anon_sym_west] = ACTIONS(27),
    [anon_sym_up] = ACTIONS(27),
    [anon_sym_down] = ACTIONS(27),
    [anon_sym_northeast] = ACTIONS(27),
    [anon_sym_northwest] = ACTIONS(27),
    [anon_sym_southeast] = ACTIONS(27),
    [anon_sym_southwest] = ACTIONS(27),
    [anon_sym_in] = ACTIONS(27),
    [anon_sym_out] = ACTIONS(27),
    [anon_sym_land] = ACTIONS(27),
    [sym_flag] = ACTIONS(29),
    [anon_sym_enter] = ACTIONS(31),
    [anon_sym_leave] = ACTIONS(31),
    [anon_sym_through] = ACTIONS(31),
    [anon_sym_take] = ACTIONS(31),
    [anon_sym_drop] = ACTIONS(31),
    [anon_sym_examine] = ACTIONS(31),
    [anon_sym_open] = ACTIONS(31),
    [anon_sym_close] = ACTIONS(31),
    [anon_sym_lock] = ACTIONS(31),
    [anon_sym_unlock] = ACTIONS(31),
    [anon_sym_read] = ACTIONS(31),
    [anon_sym_turn_DASHon] = ACTIONS(31),
    [anon_sym_turn_DASHoff] = ACTIONS(31),
    [anon_sym_plug] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_attack] = ACTIONS(31),
    [anon_sym_push] = ACTIONS(31),
    [anon_sym_pull] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_rub] = ACTIONS(31),
    [anon_sym_click] = ACTIONS(31),
    [anon_sym_point] = ACTIONS(31),
    [anon_sym_eat] = ACTIONS(31),
    [anon_sym_drink] = ACTIONS(31),
    [anon_sym_wear] = ACTIONS(31),
    [anon_sym_remove] = ACTIONS(31),
    [anon_sym_climb] = ACTIONS(31),
    [anon_sym_sit] = ACTIONS(31),
    [anon_sym_stand] = ACTIONS(31),
    [anon_sym_smell] = ACTIONS(31),
    [anon_sym_listen] = ACTIONS(31),
    [anon_sym_ask_DASHabout] = ACTIONS(31),
    [anon_sym_tell_DASHabout] = ACTIONS(31),
    [anon_sym_give] = ACTIONS(31),
    [anon_sym_trade] = ACTIONS(31),
    [anon_sym_ask_DASHfor] = ACTIONS(31),
    [anon_sym_help] = ACTIONS(31),
    [anon_sym_put_DASHon] = ACTIONS(31),
    [anon_sym_put_DASHin] = ACTIONS(31),
    [anon_sym_on_DASHenter] = ACTIONS(31),
    [anon_sym_before_DASHaction] = ACTIONS(31),
    [anon_sym_process_DASHevents] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_nil] = ACTIONS(33),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_number] = ACTIONS(90),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [sym_entity_ref] = ACTIONS(94),
    [sym_binding_ref] = ACTIONS(94),
    [sym_keyword] = ACTIONS(94),
    [anon_sym_world] = ACTIONS(96),
    [anon_sym_room] = ACTIONS(96),
    [anon_sym_object] = ACTIONS(96),
    [anon_sym_event] = ACTIONS(96),
    [anon_sym_victory] = ACTIONS(96),
    [anon_sym_defeat] = ACTIONS(96),
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_globals] = ACTIONS(96),
    [anon_sym_defsyntax] = ACTIONS(96),
    [anon_sym_defglobal] = ACTIONS(96),
    [anon_sym_defroutine] = ACTIONS(96),
    [anon_sym_fn] = ACTIONS(96),
    [anon_sym_lambda] = ACTIONS(96),
    [anon_sym_defn] = ACTIONS(96),
    [anon_sym_cond] = ACTIONS(96),
    [anon_sym_if] = ACTIONS(96),
    [anon_sym_let] = ACTIONS(96),
    [anon_sym_and] = ACTIONS(96),
    [anon_sym_or] = ACTIONS(96),
    [anon_sym_not] = ACTIONS(96),
    [anon_sym_any] = ACTIONS(96),
    [anon_sym_all] = ACTIONS(96),
    [anon_sym_seq] = ACTIONS(96),
    [anon_sym_when] = ACTIONS(96),
    [anon_sym_success] = ACTIONS(96),
    [anon_sym_blocked] = ACTIONS(96),
    [anon_sym_redirect] = ACTIONS(96),
    [anon_sym_outcome] = ACTIONS(96),
    [anon_sym_go] = ACTIONS(96),
    [anon_sym_do] = ACTIONS(96),
    [anon_sym_tell] = ACTIONS(96),
    [anon_sym_random] = ACTIONS(96),
    [anon_sym_first_DASHchild] = ACTIONS(96),
    [anon_sym_next_DASHsibling] = ACTIONS(96),
    [anon_sym_first_DASHin] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_PERCENT] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_has_DASHflag] = ACTIONS(96),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(96),
    [anon_sym_loc] = ACTIONS(96),
    [anon_sym_prop] = ACTIONS(96),
    [anon_sym_flags] = ACTIONS(96),
    [anon_sym_visible_QMARK] = ACTIONS(96),
    [anon_sym_held_QMARK] = ACTIONS(96),
    [anon_sym_here_QMARK] = ACTIONS(96),
    [anon_sym_in_QMARK] = ACTIONS(96),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(96),
    [anon_sym_at_QMARK] = ACTIONS(96),
    [anon_sym_room_QMARK] = ACTIONS(96),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(96),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(96),
    [anon_sym_inventory] = ACTIONS(96),
    [anon_sym_contents] = ACTIONS(96),
    [anon_sym_exit_QMARK] = ACTIONS(96),
    [anon_sym_exit_DASHto] = ACTIONS(96),
    [anon_sym_exit_DASHvia] = ACTIONS(96),
    [anon_sym_queued_QMARK] = ACTIONS(96),
    [anon_sym_eq_QMARK] = ACTIONS(96),
    [anon_sym_outcome_QMARK] = ACTIONS(96),
    [anon_sym_reason_QMARK] = ACTIONS(96),
    [anon_sym_context_QMARK] = ACTIONS(96),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(96),
    [anon_sym_global_QMARK] = ACTIONS(96),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(96),
    [anon_sym_move_BANG] = ACTIONS(96),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(96),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(96),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(96),
    [anon_sym_set_BANG] = ACTIONS(96),
    [anon_sym_inc_BANG] = ACTIONS(96),
    [anon_sym_queue_BANG] = ACTIONS(96),
    [anon_sym_dequeue_BANG] = ACTIONS(96),
    [anon_sym_get_DASHprop] = ACTIONS(96),
    [anon_sym_put_DASHprop] = ACTIONS(96),
    [anon_sym_test] = ACTIONS(96),
    [anon_sym_test_DASHsequence] = ACTIONS(96),
    [anon_sym_step] = ACTIONS(96),
    [anon_sym_north] = ACTIONS(96),
    [anon_sym_south] = ACTIONS(96),
    [anon_sym_east] = ACTIONS(96),
    [anon_sym_west] = ACTIONS(96),
    [anon_sym_up] = ACTIONS(96),
    [anon_sym_down] = ACTIONS(96),
    [anon_sym_northeast] = ACTIONS(96),
    [anon_sym_northwest] = ACTIONS(96),
    [anon_sym_southeast] = ACTIONS(96),
    [anon_sym_southwest] = ACTIONS(96),
    [anon_sym_in] = ACTIONS(96),
    [anon_sym_out] = ACTIONS(96),
    [anon_sym_land] = ACTIONS(96),
    [sym_flag] = ACTIONS(96),
    [anon_sym_enter] = ACTIONS(96),
    [anon_sym_leave] = ACTIONS(96),
    [anon_sym_through] = ACTIONS(96),
    [anon_sym_take] = ACTIONS(96),
    [anon_sym_drop] = ACTIONS(96),
    [anon_sym_examine] = ACTIONS(96),
    [anon_sym_open] = ACTIONS(96),
    [anon_sym_close] = ACTIONS(96),
    [anon_sym_lock] = ACTIONS(96),
    [anon_sym_unlock] = ACTIONS(96),
    [anon_sym_read] = ACTIONS(96),
    [anon_sym_turn_DASHon] = ACTIONS(96),
    [anon_sym_turn_DASHoff] = ACTIONS(96),
    [anon_sym_plug] = ACTIONS(96),
    [anon_sym_unplug] = ACTIONS(96),
    [anon_sym_attack] = ACTIONS(96),
    [anon_sym_push] = ACTIONS(96),
    [anon_sym_pull] = ACTIONS(96),
    [anon_sym_touch] = ACTIONS(96),
    [anon_sym_rub] = ACTIONS(96),
    [anon_sym_click] = ACTIONS(96),
    [anon_sym_point] = ACTIONS(96),
    [anon_sym_eat] = ACTIONS(96),
    [anon_sym_drink] = ACTIONS(96),
    [anon_sym_wear] = ACTIONS(96),
    [anon_sym_remove] = ACTIONS(96),
    [anon_sym_climb] = ACTIONS(96),
    [anon_sym_sit] = ACTIONS(96),
    [anon_sym_stand] = ACTIONS(96),
    [anon_sym_smell] = ACTIONS(96),
    [anon_sym_listen] = ACTIONS(96),
    [anon_sym_ask_DASHabout] = ACTIONS(96),
    [anon_sym_tell_DASHabout] = ACTIONS(96),
    [anon_sym_give] = ACTIONS(96),
    [anon_sym_trade] = ACTIONS(96),
    [anon_sym_ask_DASHfor] = ACTIONS(96),
    [anon_sym_help] = ACTIONS(96),
    [anon_sym_put_DASHon] = ACTIONS(96),
    [anon_sym_put_DASHin] = ACTIONS(96),
    [anon_sym_on_DASHenter] = ACTIONS(96),
    [anon_sym_before_DASHaction] = ACTIONS(96),
    [anon_sym_process_DASHevents] = ACTIONS(96),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [anon_sym_nil] = ACTIONS(96),
    [sym_identifier] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_number] = ACTIONS(94),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [sym_entity_ref] = ACTIONS(98),
    [sym_binding_ref] = ACTIONS(98),
    [sym_keyword] = ACTIONS(98),
    [anon_sym_world] = ACTIONS(100),
    [anon_sym_room] = ACTIONS(100),
    [anon_sym_object] = ACTIONS(100),
    [anon_sym_event] = ACTIONS(100),
    [anon_sym_victory] = ACTIONS(100),
    [anon_sym_defeat] = ACTIONS(100),
    [anon_sym_default] = ACTIONS(100),
    [anon_sym_globals] = ACTIONS(100),
    [anon_sym_defsyntax] = ACTIONS(100),
    [anon_sym_defglobal] = ACTIONS(100),
    [anon_sym_defroutine] = ACTIONS(100),
    [anon_sym_fn] = ACTIONS(100),
    [anon_sym_lambda] = ACTIONS(100),
    [anon_sym_defn] = ACTIONS(100),
    [anon_sym_cond] = ACTIONS(100),
    [anon_sym_if] = ACTIONS(100),
    [anon_sym_let] = ACTIONS(100),
    [anon_sym_and] = ACTIONS(100),
    [anon_sym_or] = ACTIONS(100),
    [anon_sym_not] = ACTIONS(100),
    [anon_sym_any] = ACTIONS(100),
    [anon_sym_all] = ACTIONS(100),
    [anon_sym_seq] = ACTIONS(100),
    [anon_sym_when] = ACTIONS(100),
    [anon_sym_success] = ACTIONS(100),
    [anon_sym_blocked] = ACTIONS(100),
    [anon_sym_redirect] = ACTIONS(100),
    [anon_sym_outcome] = ACTIONS(100),
    [anon_sym_go] = ACTIONS(100),
    [anon_sym_do] = ACTIONS(100),
    [anon_sym_tell] = ACTIONS(100),
    [anon_sym_random] = ACTIONS(100),
    [anon_sym_first_DASHchild] = ACTIONS(100),
    [anon_sym_next_DASHsibling] = ACTIONS(100),
    [anon_sym_first_DASHin] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(100),
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_GT_EQ] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(98),
    [anon_sym_has_DASHflag] = ACTIONS(100),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(100),
    [anon_sym_loc] = ACTIONS(100),
    [anon_sym_prop] = ACTIONS(100),
    [anon_sym_flags] = ACTIONS(100),
    [anon_sym_visible_QMARK] = ACTIONS(100),
    [anon_sym_held_QMARK] = ACTIONS(100),
    [anon_sym_here_QMARK] = ACTIONS(100),
    [anon_sym_in_QMARK] = ACTIONS(100),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(100),
    [anon_sym_at_QMARK] = ACTIONS(100),
    [anon_sym_room_QMARK] = ACTIONS(100),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(100),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(100),
    [anon_sym_inventory] = ACTIONS(100),
    [anon_sym_contents] = ACTIONS(100),
    [anon_sym_exit_QMARK] = ACTIONS(100),
    [anon_sym_exit_DASHto] = ACTIONS(100),
    [anon_sym_exit_DASHvia] = ACTIONS(100),
    [anon_sym_queued_QMARK] = ACTIONS(100),
    [anon_sym_eq_QMARK] = ACTIONS(100),
    [anon_sym_outcome_QMARK] = ACTIONS(100),
    [anon_sym_reason_QMARK] = ACTIONS(100),
    [anon_sym_context_QMARK] = ACTIONS(100),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(100),
    [anon_sym_global_QMARK] = ACTIONS(100),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(100),
    [anon_sym_move_BANG] = ACTIONS(100),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(100),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(100),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(100),
    [anon_sym_set_BANG] = ACTIONS(100),
    [anon_sym_inc_BANG] = ACTIONS(100),
    [anon_sym_queue_BANG] = ACTIONS(100),
    [anon_sym_dequeue_BANG] = ACTIONS(100),
    [anon_sym_get_DASHprop] = ACTIONS(100),
    [anon_sym_put_DASHprop] = ACTIONS(100),
    [anon_sym_test] = ACTIONS(100),
    [anon_sym_test_DASHsequence] = ACTIONS(100),
    [anon_sym_step] = ACTIONS(100),
    [anon_sym_north] = ACTIONS(100),
    [anon_sym_south] = ACTIONS(100),
    [anon_sym_east] = ACTIONS(100),
    [anon_sym_west] = ACTIONS(100),
    [anon_sym_up] = ACTIONS(100),
    [anon_sym_down] = ACTIONS(100),
    [anon_sym_northeast] = ACTIONS(100),
    [anon_sym_northwest] = ACTIONS(100),
    [anon_sym_southeast] = ACTIONS(100),
    [anon_sym_southwest] = ACTIONS(100),
    [anon_sym_in] = ACTIONS(100),
    [anon_sym_out] = ACTIONS(100),
    [anon_sym_land] = ACTIONS(100),
    [sym_flag] = ACTIONS(100),
    [anon_sym_enter] = ACTIONS(100),
    [anon_sym_leave] = ACTIONS(100),
    [anon_sym_through] = ACTIONS(100),
    [anon_sym_take] = ACTIONS(100),
    [anon_sym_drop] = ACTIONS(100),
    [anon_sym_examine] = ACTIONS(100),
    [anon_sym_open] = ACTIONS(100),
    [anon_sym_close] = ACTIONS(100),
    [anon_sym_lock] = ACTIONS(100),
    [anon_sym_unlock] = ACTIONS(100),
    [anon_sym_read] = ACTIONS(100),
    [anon_sym_turn_DASHon] = ACTIONS(100),
    [anon_sym_turn_DASHoff] = ACTIONS(100),
    [anon_sym_plug] = ACTIONS(100),
    [anon_sym_unplug] = ACTIONS(100),
    [anon_sym_attack] = ACTIONS(100),
    [anon_sym_push] = ACTIONS(100),
    [anon_sym_pull] = ACTIONS(100),
    [anon_sym_touch] = ACTIONS(100),
    [anon_sym_rub] = ACTIONS(100),
    [anon_sym_click] = ACTIONS(100),
    [anon_sym_point] = ACTIONS(100),
    [anon_sym_eat] = ACTIONS(100),
    [anon_sym_drink] = ACTIONS(100),
    [anon_sym_wear] = ACTIONS(100),
    [anon_sym_remove] = ACTIONS(100),
    [anon_sym_climb] = ACTIONS(100),
    [anon_sym_sit] = ACTIONS(100),
    [anon_sym_stand] = ACTIONS(100),
    [anon_sym_smell] = ACTIONS(100),
    [anon_sym_listen] = ACTIONS(100),
    [anon_sym_ask_DASHabout] = ACTIONS(100),
    [anon_sym_tell_DASHabout] = ACTIONS(100),
    [anon_sym_give] = ACTIONS(100),
    [anon_sym_trade] = ACTIONS(100),
    [anon_sym_ask_DASHfor] = ACTIONS(100),
    [anon_sym_help] = ACTIONS(100),
    [anon_sym_put_DASHon] = ACTIONS(100),
    [anon_sym_put_DASHin] = ACTIONS(100),
    [anon_sym_on_DASHenter] = ACTIONS(100),
    [anon_sym_before_DASHaction] = ACTIONS(100),
    [anon_sym_process_DASHevents] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [anon_sym_nil] = ACTIONS(100),
    [sym_identifier] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym_number] = ACTIONS(98),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [sym_entity_ref] = ACTIONS(102),
    [sym_binding_ref] = ACTIONS(102),
    [sym_keyword] = ACTIONS(102),
    [anon_sym_world] = ACTIONS(104),
    [anon_sym_room] = ACTIONS(104),
    [anon_sym_object] = ACTIONS(104),
    [anon_sym_event] = ACTIONS(104),
    [anon_sym_victory] = ACTIONS(104),
    [anon_sym_defeat] = ACTIONS(104),
    [anon_sym_default] = ACTIONS(104),
    [anon_sym_globals] = ACTIONS(104),
    [anon_sym_defsyntax] = ACTIONS(104),
    [anon_sym_defglobal] = ACTIONS(104),
    [anon_sym_defroutine] = ACTIONS(104),
    [anon_sym_fn] = ACTIONS(104),
    [anon_sym_lambda] = ACTIONS(104),
    [anon_sym_defn] = ACTIONS(104),
    [anon_sym_cond] = ACTIONS(104),
    [anon_sym_if] = ACTIONS(104),
    [anon_sym_let] = ACTIONS(104),
    [anon_sym_and] = ACTIONS(104),
    [anon_sym_or] = ACTIONS(104),
    [anon_sym_not] = ACTIONS(104),
    [anon_sym_any] = ACTIONS(104),
    [anon_sym_all] = ACTIONS(104),
    [anon_sym_seq] = ACTIONS(104),
    [anon_sym_when] = ACTIONS(104),
    [anon_sym_success] = ACTIONS(104),
    [anon_sym_blocked] = ACTIONS(104),
    [anon_sym_redirect] = ACTIONS(104),
    [anon_sym_outcome] = ACTIONS(104),
    [anon_sym_go] = ACTIONS(104),
    [anon_sym_do] = ACTIONS(104),
    [anon_sym_tell] = ACTIONS(104),
    [anon_sym_random] = ACTIONS(104),
    [anon_sym_first_DASHchild] = ACTIONS(104),
    [anon_sym_next_DASHsibling] = ACTIONS(104),
    [anon_sym_first_DASHin] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(104),
    [anon_sym_GT_EQ] = ACTIONS(102),
    [anon_sym_LT_EQ] = ACTIONS(102),
    [anon_sym_has_DASHflag] = ACTIONS(104),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(104),
    [anon_sym_loc] = ACTIONS(104),
    [anon_sym_prop] = ACTIONS(104),
    [anon_sym_flags] = ACTIONS(104),
    [anon_sym_visible_QMARK] = ACTIONS(104),
    [anon_sym_held_QMARK] = ACTIONS(104),
    [anon_sym_here_QMARK] = ACTIONS(104),
    [anon_sym_in_QMARK] = ACTIONS(104),
    [anon_sym_held_DASHby_QMARK] = ACTIONS(104),
    [anon_sym_at_QMARK] = ACTIONS(104),
    [anon_sym_room_QMARK] = ACTIONS(104),
    [anon_sym_in_DASHroom_QMARK] = ACTIONS(104),
    [anon_sym_room_DASHhas_DASHflag_QMARK] = ACTIONS(104),
    [anon_sym_inventory] = ACTIONS(104),
    [anon_sym_contents] = ACTIONS(104),
    [anon_sym_exit_QMARK] = ACTIONS(104),
    [anon_sym_exit_DASHto] = ACTIONS(104),
    [anon_sym_exit_DASHvia] = ACTIONS(104),
    [anon_sym_queued_QMARK] = ACTIONS(104),
    [anon_sym_eq_QMARK] = ACTIONS(104),
    [anon_sym_outcome_QMARK] = ACTIONS(104),
    [anon_sym_reason_QMARK] = ACTIONS(104),
    [anon_sym_context_QMARK] = ACTIONS(104),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(104),
    [anon_sym_global_QMARK] = ACTIONS(104),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(104),
    [anon_sym_move_BANG] = ACTIONS(104),
    [anon_sym_set_DASHflag_BANG] = ACTIONS(104),
    [anon_sym_clear_DASHflag_BANG] = ACTIONS(104),
    [anon_sym_set_DASHprop_BANG] = ACTIONS(104),
    [anon_sym_set_BANG] = ACTIONS(104),
    [anon_sym_inc_BANG] = ACTIONS(104),
    [anon_sym_queue_BANG] = ACTIONS(104),
    [anon_sym_dequeue_BANG] = ACTIONS(104),
    [anon_sym_get_DASHprop] = ACTIONS(104),
    [anon_sym_put_DASHprop] = ACTIONS(104),
    [anon_sym_test] = ACTIONS(104),
    [anon_sym_test_DASHsequence] = ACTIONS(104),
    [anon_sym_step] = ACTIONS(104),
    [anon_sym_north] = ACTIONS(104),
    [anon_sym_south] = ACTIONS(104),
    [anon_sym_east] = ACTIONS(104),
    [anon_sym_west] = ACTIONS(104),
    [anon_sym_up] = ACTIONS(104),
    [anon_sym_down] = ACTIONS(104),
    [anon_sym_northeast] = ACTIONS(104),
    [anon_sym_northwest] = ACTIONS(104),
    [anon_sym_southeast] = ACTIONS(104),
    [anon_sym_southwest] = ACTIONS(104),
    [anon_sym_in] = ACTIONS(104),
    [anon_sym_out] = ACTIONS(104),
    [anon_sym_land] = ACTIONS(104),
    [sym_flag] = ACTIONS(104),
    [anon_sym_enter] = ACTIONS(104),
    [anon_sym_leave] = ACTIONS(104),
    [anon_sym_through] = ACTIONS(104),
    [anon_sym_take] = ACTIONS(104),
    [anon_sym_drop] = ACTIONS(104),
    [anon_sym_examine] = ACTIONS(104),
    [anon_sym_open] = ACTIONS(104),
    [anon_sym_close] = ACTIONS(104),
    [anon_sym_lock] = ACTIONS(104),
    [anon_sym_unlock] = ACTIONS(104),
    [anon_sym_read] = ACTIONS(104),
    [anon_sym_turn_DASHon] = ACTIONS(104),
    [anon_sym_turn_DASHoff] = ACTIONS(104),
    [anon_sym_plug] = ACTIONS(104),
    [anon_sym_unplug] = ACTIONS(104),
    [anon_sym_attack] = ACTIONS(104),
    [anon_sym_push] = ACTIONS(104),
    [anon_sym_pull] = ACTIONS(104),
    [anon_sym_touch] = ACTIONS(104),
    [anon_sym_rub] = ACTIONS(104),
    [anon_sym_click] = ACTIONS(104),
    [anon_sym_point] = ACTIONS(104),
    [anon_sym_eat] = ACTIONS(104),
    [anon_sym_drink] = ACTIONS(104),
    [anon_sym_wear] = ACTIONS(104),
    [anon_sym_remove] = ACTIONS(104),
    [anon_sym_climb] = ACTIONS(104),
    [anon_sym_sit] = ACTIONS(104),
    [anon_sym_stand] = ACTIONS(104),
    [anon_sym_smell] = ACTIONS(104),
    [anon_sym_listen] = ACTIONS(104),
    [anon_sym_ask_DASHabout] = ACTIONS(104),
    [anon_sym_tell_DASHabout] = ACTIONS(104),
    [anon_sym_give] = ACTIONS(104),
    [anon_sym_trade] = ACTIONS(104),
    [anon_sym_ask_DASHfor] = ACTIONS(104),
    [anon_sym_help] = ACTIONS(104),
    [anon_sym_put_DASHon] = ACTIONS(104),
    [anon_sym_put_DASHin] = ACTIONS(104),
    [anon_sym_on_DASHenter] = ACTIONS(104),
    [anon_sym_before_DASHaction] = ACTIONS(104),
    [anon_sym_process_DASHevents] = ACTIONS(104),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_nil] = ACTIONS(104),
    [sym_identifier] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [sym_number] = ACTIONS(102),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
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
    [anon_sym_cond] = ACTIONS(108),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_let] = ACTIONS(108),
    [anon_sym_and] = ACTIONS(108),
    [anon_sym_or] = ACTIONS(108),
    [anon_sym_not] = ACTIONS(108),
    [anon_sym_any] = ACTIONS(108),
    [anon_sym_all] = ACTIONS(108),
    [anon_sym_seq] = ACTIONS(108),
    [anon_sym_when] = ACTIONS(108),
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
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_GT_EQ] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(106),
    [anon_sym_has_DASHflag] = ACTIONS(108),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(108),
    [anon_sym_loc] = ACTIONS(108),
    [anon_sym_prop] = ACTIONS(108),
    [anon_sym_flags] = ACTIONS(108),
    [anon_sym_visible_QMARK] = ACTIONS(108),
    [anon_sym_held_QMARK] = ACTIONS(108),
    [anon_sym_here_QMARK] = ACTIONS(108),
    [anon_sym_in_QMARK] = ACTIONS(108),
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
    [anon_sym_outcome_QMARK] = ACTIONS(108),
    [anon_sym_reason_QMARK] = ACTIONS(108),
    [anon_sym_context_QMARK] = ACTIONS(108),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(108),
    [anon_sym_global_QMARK] = ACTIONS(108),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(108),
    [anon_sym_move_BANG] = ACTIONS(108),
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
    [anon_sym_remove] = ACTIONS(108),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
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
    [anon_sym_cond] = ACTIONS(112),
    [anon_sym_if] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(112),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_or] = ACTIONS(112),
    [anon_sym_not] = ACTIONS(112),
    [anon_sym_any] = ACTIONS(112),
    [anon_sym_all] = ACTIONS(112),
    [anon_sym_seq] = ACTIONS(112),
    [anon_sym_when] = ACTIONS(112),
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
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_GT] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(110),
    [anon_sym_LT_EQ] = ACTIONS(110),
    [anon_sym_has_DASHflag] = ACTIONS(112),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(112),
    [anon_sym_loc] = ACTIONS(112),
    [anon_sym_prop] = ACTIONS(112),
    [anon_sym_flags] = ACTIONS(112),
    [anon_sym_visible_QMARK] = ACTIONS(112),
    [anon_sym_held_QMARK] = ACTIONS(112),
    [anon_sym_here_QMARK] = ACTIONS(112),
    [anon_sym_in_QMARK] = ACTIONS(112),
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
    [anon_sym_outcome_QMARK] = ACTIONS(112),
    [anon_sym_reason_QMARK] = ACTIONS(112),
    [anon_sym_context_QMARK] = ACTIONS(112),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(112),
    [anon_sym_global_QMARK] = ACTIONS(112),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(112),
    [anon_sym_move_BANG] = ACTIONS(112),
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
    [anon_sym_remove] = ACTIONS(112),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
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
    [anon_sym_cond] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(116),
    [anon_sym_let] = ACTIONS(116),
    [anon_sym_and] = ACTIONS(116),
    [anon_sym_or] = ACTIONS(116),
    [anon_sym_not] = ACTIONS(116),
    [anon_sym_any] = ACTIONS(116),
    [anon_sym_all] = ACTIONS(116),
    [anon_sym_seq] = ACTIONS(116),
    [anon_sym_when] = ACTIONS(116),
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
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(114),
    [anon_sym_has_DASHflag] = ACTIONS(116),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(116),
    [anon_sym_loc] = ACTIONS(116),
    [anon_sym_prop] = ACTIONS(116),
    [anon_sym_flags] = ACTIONS(116),
    [anon_sym_visible_QMARK] = ACTIONS(116),
    [anon_sym_held_QMARK] = ACTIONS(116),
    [anon_sym_here_QMARK] = ACTIONS(116),
    [anon_sym_in_QMARK] = ACTIONS(116),
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
    [anon_sym_outcome_QMARK] = ACTIONS(116),
    [anon_sym_reason_QMARK] = ACTIONS(116),
    [anon_sym_context_QMARK] = ACTIONS(116),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(116),
    [anon_sym_global_QMARK] = ACTIONS(116),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(116),
    [anon_sym_move_BANG] = ACTIONS(116),
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
    [anon_sym_remove] = ACTIONS(116),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
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
    [anon_sym_cond] = ACTIONS(120),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_let] = ACTIONS(120),
    [anon_sym_and] = ACTIONS(120),
    [anon_sym_or] = ACTIONS(120),
    [anon_sym_not] = ACTIONS(120),
    [anon_sym_any] = ACTIONS(120),
    [anon_sym_all] = ACTIONS(120),
    [anon_sym_seq] = ACTIONS(120),
    [anon_sym_when] = ACTIONS(120),
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
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [anon_sym_has_DASHflag] = ACTIONS(120),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(120),
    [anon_sym_loc] = ACTIONS(120),
    [anon_sym_prop] = ACTIONS(120),
    [anon_sym_flags] = ACTIONS(120),
    [anon_sym_visible_QMARK] = ACTIONS(120),
    [anon_sym_held_QMARK] = ACTIONS(120),
    [anon_sym_here_QMARK] = ACTIONS(120),
    [anon_sym_in_QMARK] = ACTIONS(120),
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
    [anon_sym_outcome_QMARK] = ACTIONS(120),
    [anon_sym_reason_QMARK] = ACTIONS(120),
    [anon_sym_context_QMARK] = ACTIONS(120),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(120),
    [anon_sym_global_QMARK] = ACTIONS(120),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(120),
    [anon_sym_move_BANG] = ACTIONS(120),
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
    [anon_sym_remove] = ACTIONS(120),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
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
    [anon_sym_cond] = ACTIONS(124),
    [anon_sym_if] = ACTIONS(124),
    [anon_sym_let] = ACTIONS(124),
    [anon_sym_and] = ACTIONS(124),
    [anon_sym_or] = ACTIONS(124),
    [anon_sym_not] = ACTIONS(124),
    [anon_sym_any] = ACTIONS(124),
    [anon_sym_all] = ACTIONS(124),
    [anon_sym_seq] = ACTIONS(124),
    [anon_sym_when] = ACTIONS(124),
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
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(122),
    [anon_sym_has_DASHflag] = ACTIONS(124),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(124),
    [anon_sym_loc] = ACTIONS(124),
    [anon_sym_prop] = ACTIONS(124),
    [anon_sym_flags] = ACTIONS(124),
    [anon_sym_visible_QMARK] = ACTIONS(124),
    [anon_sym_held_QMARK] = ACTIONS(124),
    [anon_sym_here_QMARK] = ACTIONS(124),
    [anon_sym_in_QMARK] = ACTIONS(124),
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
    [anon_sym_outcome_QMARK] = ACTIONS(124),
    [anon_sym_reason_QMARK] = ACTIONS(124),
    [anon_sym_context_QMARK] = ACTIONS(124),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(124),
    [anon_sym_global_QMARK] = ACTIONS(124),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(124),
    [anon_sym_move_BANG] = ACTIONS(124),
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
    [anon_sym_remove] = ACTIONS(124),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
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
    [anon_sym_cond] = ACTIONS(128),
    [anon_sym_if] = ACTIONS(128),
    [anon_sym_let] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(128),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_not] = ACTIONS(128),
    [anon_sym_any] = ACTIONS(128),
    [anon_sym_all] = ACTIONS(128),
    [anon_sym_seq] = ACTIONS(128),
    [anon_sym_when] = ACTIONS(128),
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
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_has_DASHflag] = ACTIONS(128),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(128),
    [anon_sym_loc] = ACTIONS(128),
    [anon_sym_prop] = ACTIONS(128),
    [anon_sym_flags] = ACTIONS(128),
    [anon_sym_visible_QMARK] = ACTIONS(128),
    [anon_sym_held_QMARK] = ACTIONS(128),
    [anon_sym_here_QMARK] = ACTIONS(128),
    [anon_sym_in_QMARK] = ACTIONS(128),
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
    [anon_sym_outcome_QMARK] = ACTIONS(128),
    [anon_sym_reason_QMARK] = ACTIONS(128),
    [anon_sym_context_QMARK] = ACTIONS(128),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(128),
    [anon_sym_global_QMARK] = ACTIONS(128),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(128),
    [anon_sym_move_BANG] = ACTIONS(128),
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
    [anon_sym_remove] = ACTIONS(128),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
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
    [anon_sym_cond] = ACTIONS(132),
    [anon_sym_if] = ACTIONS(132),
    [anon_sym_let] = ACTIONS(132),
    [anon_sym_and] = ACTIONS(132),
    [anon_sym_or] = ACTIONS(132),
    [anon_sym_not] = ACTIONS(132),
    [anon_sym_any] = ACTIONS(132),
    [anon_sym_all] = ACTIONS(132),
    [anon_sym_seq] = ACTIONS(132),
    [anon_sym_when] = ACTIONS(132),
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
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_has_DASHflag] = ACTIONS(132),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(132),
    [anon_sym_loc] = ACTIONS(132),
    [anon_sym_prop] = ACTIONS(132),
    [anon_sym_flags] = ACTIONS(132),
    [anon_sym_visible_QMARK] = ACTIONS(132),
    [anon_sym_held_QMARK] = ACTIONS(132),
    [anon_sym_here_QMARK] = ACTIONS(132),
    [anon_sym_in_QMARK] = ACTIONS(132),
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
    [anon_sym_outcome_QMARK] = ACTIONS(132),
    [anon_sym_reason_QMARK] = ACTIONS(132),
    [anon_sym_context_QMARK] = ACTIONS(132),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(132),
    [anon_sym_global_QMARK] = ACTIONS(132),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(132),
    [anon_sym_move_BANG] = ACTIONS(132),
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
    [anon_sym_remove] = ACTIONS(132),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
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
    [anon_sym_cond] = ACTIONS(136),
    [anon_sym_if] = ACTIONS(136),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_and] = ACTIONS(136),
    [anon_sym_or] = ACTIONS(136),
    [anon_sym_not] = ACTIONS(136),
    [anon_sym_any] = ACTIONS(136),
    [anon_sym_all] = ACTIONS(136),
    [anon_sym_seq] = ACTIONS(136),
    [anon_sym_when] = ACTIONS(136),
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
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_GT_EQ] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(134),
    [anon_sym_has_DASHflag] = ACTIONS(136),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(136),
    [anon_sym_loc] = ACTIONS(136),
    [anon_sym_prop] = ACTIONS(136),
    [anon_sym_flags] = ACTIONS(136),
    [anon_sym_visible_QMARK] = ACTIONS(136),
    [anon_sym_held_QMARK] = ACTIONS(136),
    [anon_sym_here_QMARK] = ACTIONS(136),
    [anon_sym_in_QMARK] = ACTIONS(136),
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
    [anon_sym_outcome_QMARK] = ACTIONS(136),
    [anon_sym_reason_QMARK] = ACTIONS(136),
    [anon_sym_context_QMARK] = ACTIONS(136),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(136),
    [anon_sym_global_QMARK] = ACTIONS(136),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(136),
    [anon_sym_move_BANG] = ACTIONS(136),
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
    [anon_sym_remove] = ACTIONS(136),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
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
    [anon_sym_cond] = ACTIONS(140),
    [anon_sym_if] = ACTIONS(140),
    [anon_sym_let] = ACTIONS(140),
    [anon_sym_and] = ACTIONS(140),
    [anon_sym_or] = ACTIONS(140),
    [anon_sym_not] = ACTIONS(140),
    [anon_sym_any] = ACTIONS(140),
    [anon_sym_all] = ACTIONS(140),
    [anon_sym_seq] = ACTIONS(140),
    [anon_sym_when] = ACTIONS(140),
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
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_has_DASHflag] = ACTIONS(140),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(140),
    [anon_sym_loc] = ACTIONS(140),
    [anon_sym_prop] = ACTIONS(140),
    [anon_sym_flags] = ACTIONS(140),
    [anon_sym_visible_QMARK] = ACTIONS(140),
    [anon_sym_held_QMARK] = ACTIONS(140),
    [anon_sym_here_QMARK] = ACTIONS(140),
    [anon_sym_in_QMARK] = ACTIONS(140),
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
    [anon_sym_outcome_QMARK] = ACTIONS(140),
    [anon_sym_reason_QMARK] = ACTIONS(140),
    [anon_sym_context_QMARK] = ACTIONS(140),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(140),
    [anon_sym_global_QMARK] = ACTIONS(140),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(140),
    [anon_sym_move_BANG] = ACTIONS(140),
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
    [anon_sym_remove] = ACTIONS(140),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
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
    [anon_sym_cond] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(144),
    [anon_sym_let] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(144),
    [anon_sym_or] = ACTIONS(144),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_any] = ACTIONS(144),
    [anon_sym_all] = ACTIONS(144),
    [anon_sym_seq] = ACTIONS(144),
    [anon_sym_when] = ACTIONS(144),
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
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(142),
    [anon_sym_LT_EQ] = ACTIONS(142),
    [anon_sym_has_DASHflag] = ACTIONS(144),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(144),
    [anon_sym_loc] = ACTIONS(144),
    [anon_sym_prop] = ACTIONS(144),
    [anon_sym_flags] = ACTIONS(144),
    [anon_sym_visible_QMARK] = ACTIONS(144),
    [anon_sym_held_QMARK] = ACTIONS(144),
    [anon_sym_here_QMARK] = ACTIONS(144),
    [anon_sym_in_QMARK] = ACTIONS(144),
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
    [anon_sym_outcome_QMARK] = ACTIONS(144),
    [anon_sym_reason_QMARK] = ACTIONS(144),
    [anon_sym_context_QMARK] = ACTIONS(144),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(144),
    [anon_sym_global_QMARK] = ACTIONS(144),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(144),
    [anon_sym_move_BANG] = ACTIONS(144),
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
    [anon_sym_remove] = ACTIONS(144),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
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
    [anon_sym_cond] = ACTIONS(148),
    [anon_sym_if] = ACTIONS(148),
    [anon_sym_let] = ACTIONS(148),
    [anon_sym_and] = ACTIONS(148),
    [anon_sym_or] = ACTIONS(148),
    [anon_sym_not] = ACTIONS(148),
    [anon_sym_any] = ACTIONS(148),
    [anon_sym_all] = ACTIONS(148),
    [anon_sym_seq] = ACTIONS(148),
    [anon_sym_when] = ACTIONS(148),
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
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [anon_sym_has_DASHflag] = ACTIONS(148),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(148),
    [anon_sym_loc] = ACTIONS(148),
    [anon_sym_prop] = ACTIONS(148),
    [anon_sym_flags] = ACTIONS(148),
    [anon_sym_visible_QMARK] = ACTIONS(148),
    [anon_sym_held_QMARK] = ACTIONS(148),
    [anon_sym_here_QMARK] = ACTIONS(148),
    [anon_sym_in_QMARK] = ACTIONS(148),
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
    [anon_sym_outcome_QMARK] = ACTIONS(148),
    [anon_sym_reason_QMARK] = ACTIONS(148),
    [anon_sym_context_QMARK] = ACTIONS(148),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(148),
    [anon_sym_global_QMARK] = ACTIONS(148),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(148),
    [anon_sym_move_BANG] = ACTIONS(148),
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
    [anon_sym_remove] = ACTIONS(148),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
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
    [anon_sym_cond] = ACTIONS(152),
    [anon_sym_if] = ACTIONS(152),
    [anon_sym_let] = ACTIONS(152),
    [anon_sym_and] = ACTIONS(152),
    [anon_sym_or] = ACTIONS(152),
    [anon_sym_not] = ACTIONS(152),
    [anon_sym_any] = ACTIONS(152),
    [anon_sym_all] = ACTIONS(152),
    [anon_sym_seq] = ACTIONS(152),
    [anon_sym_when] = ACTIONS(152),
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
    [anon_sym_EQ] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_LT] = ACTIONS(152),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT_EQ] = ACTIONS(150),
    [anon_sym_has_DASHflag] = ACTIONS(152),
    [anon_sym_has_DASHflag_QMARK] = ACTIONS(152),
    [anon_sym_loc] = ACTIONS(152),
    [anon_sym_prop] = ACTIONS(152),
    [anon_sym_flags] = ACTIONS(152),
    [anon_sym_visible_QMARK] = ACTIONS(152),
    [anon_sym_held_QMARK] = ACTIONS(152),
    [anon_sym_here_QMARK] = ACTIONS(152),
    [anon_sym_in_QMARK] = ACTIONS(152),
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
    [anon_sym_outcome_QMARK] = ACTIONS(152),
    [anon_sym_reason_QMARK] = ACTIONS(152),
    [anon_sym_context_QMARK] = ACTIONS(152),
    [anon_sym_player_DASHat_QMARK] = ACTIONS(152),
    [anon_sym_global_QMARK] = ACTIONS(152),
    [anon_sym_not_DASHqueued_QMARK] = ACTIONS(152),
    [anon_sym_move_BANG] = ACTIONS(152),
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
    [anon_sym_remove] = ACTIONS(152),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(154), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      aux_sym_string_token1,
    ACTIONS(160), 1,
      anon_sym_BSLASH,
    STATE(22), 1,
      aux_sym_string_repeat1,
  [16] = 5,
    ACTIONS(154), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_BSLASH,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      aux_sym_string_token1,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [32] = 5,
    ACTIONS(154), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      aux_sym_string_token1,
    ACTIONS(171), 1,
      anon_sym_BSLASH,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [48] = 2,
    ACTIONS(154), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [57] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
  [64] = 2,
    ACTIONS(154), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 16,
  [SMALL_STATE(23)] = 32,
  [SMALL_STATE(24)] = 48,
  [SMALL_STATE(25)] = 57,
  [SMALL_STATE(26)] = 64,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_form, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_form, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_behavior_name, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_behavior_name, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defform, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defform, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
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
