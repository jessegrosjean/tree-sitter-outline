#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  aux_sym_item_token1 = 1,
  aux_sym_item_token2 = 2,
  sym__start = 3,
  sym__indent = 4,
  sym__dedent = 5,
  sym__newline = 6,
  sym_outline = 7,
  sym_item = 8,
  aux_sym_outline_repeat1 = 9,
  aux_sym_outline_repeat2 = 10,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_item_token1] = "item_token1",
  [aux_sym_item_token2] = "item_token2",
  [sym__start] = "_start",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym_outline] = "outline",
  [sym_item] = "item",
  [aux_sym_outline_repeat1] = "outline_repeat1",
  [aux_sym_outline_repeat2] = "outline_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_item_token1] = aux_sym_item_token1,
  [aux_sym_item_token2] = aux_sym_item_token2,
  [sym__start] = sym__start,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym_outline] = sym_outline,
  [sym_item] = sym_item,
  [aux_sym_outline_repeat1] = aux_sym_outline_repeat1,
  [aux_sym_outline_repeat2] = aux_sym_outline_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_item_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_item_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__start] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_outline] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_outline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_outline_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_item_token1);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_item_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0, .external_lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 6},
  [19] = {.lex_state = 0, .external_lex_state = 7},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
};

enum {
  ts_external_token__start = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__newline = 3,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start] = sym__start,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__newline] = sym__newline,
};

static bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
  },
  [2] = {
    [ts_external_token__start] = true,
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token__newline] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [7] = {
    [ts_external_token__indent] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_item_token1] = ACTIONS(1),
    [sym__start] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_outline] = STATE(28),
    [aux_sym_outline_repeat1] = STATE(21),
    [sym__start] = ACTIONS(3),
    [sym__newline] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      aux_sym_item_token1,
    ACTIONS(10), 1,
      sym__dedent,
    STATE(2), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [11] = 3,
    ACTIONS(12), 1,
      aux_sym_item_token1,
    ACTIONS(14), 1,
      sym__dedent,
    STATE(2), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [22] = 3,
    ACTIONS(12), 1,
      aux_sym_item_token1,
    ACTIONS(16), 1,
      sym__dedent,
    STATE(2), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [33] = 3,
    ACTIONS(12), 1,
      aux_sym_item_token1,
    ACTIONS(18), 1,
      sym__dedent,
    STATE(4), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [44] = 3,
    ACTIONS(12), 1,
      aux_sym_item_token1,
    ACTIONS(14), 1,
      sym__dedent,
    STATE(17), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [55] = 3,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      aux_sym_item_token1,
    STATE(11), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [66] = 3,
    ACTIONS(12), 1,
      aux_sym_item_token1,
    ACTIONS(18), 1,
      sym__dedent,
    STATE(2), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [77] = 3,
    ACTIONS(26), 1,
      sym__indent,
    ACTIONS(28), 1,
      sym__newline,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      aux_sym_item_token1,
  [88] = 3,
    ACTIONS(10), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      aux_sym_item_token1,
    STATE(10), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [99] = 3,
    ACTIONS(22), 1,
      aux_sym_item_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [110] = 3,
    ACTIONS(12), 1,
      aux_sym_item_token1,
    ACTIONS(35), 1,
      sym__dedent,
    STATE(3), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [121] = 3,
    ACTIONS(12), 1,
      aux_sym_item_token1,
    ACTIONS(37), 1,
      sym__dedent,
    STATE(8), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [132] = 3,
    ACTIONS(22), 1,
      aux_sym_item_token1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [143] = 3,
    ACTIONS(41), 1,
      sym__indent,
    ACTIONS(43), 1,
      sym__newline,
    ACTIONS(24), 2,
      sym__dedent,
      aux_sym_item_token1,
  [154] = 3,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      aux_sym_item_token1,
    STATE(10), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [165] = 3,
    ACTIONS(12), 1,
      aux_sym_item_token1,
    ACTIONS(45), 1,
      sym__dedent,
    STATE(2), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [176] = 2,
    ACTIONS(49), 1,
      sym__indent,
    ACTIONS(47), 2,
      sym__dedent,
      aux_sym_item_token1,
  [184] = 2,
    ACTIONS(51), 1,
      sym__indent,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      aux_sym_item_token1,
  [192] = 3,
    ACTIONS(53), 1,
      sym__start,
    ACTIONS(55), 1,
      sym__newline,
    STATE(20), 1,
      aux_sym_outline_repeat1,
  [202] = 3,
    ACTIONS(58), 1,
      sym__start,
    ACTIONS(60), 1,
      sym__newline,
    STATE(20), 1,
      aux_sym_outline_repeat1,
  [212] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      aux_sym_item_token1,
  [217] = 1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      aux_sym_item_token1,
  [222] = 1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym_item_token1,
  [227] = 1,
    ACTIONS(66), 2,
      sym__dedent,
      aux_sym_item_token1,
  [232] = 1,
    ACTIONS(64), 2,
      sym__dedent,
      aux_sym_item_token1,
  [237] = 1,
    ACTIONS(62), 2,
      sym__dedent,
      aux_sym_item_token1,
  [242] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [246] = 1,
    ACTIONS(70), 1,
      aux_sym_item_token2,
  [250] = 1,
    ACTIONS(72), 1,
      aux_sym_item_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 99,
  [SMALL_STATE(12)] = 110,
  [SMALL_STATE(13)] = 121,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 143,
  [SMALL_STATE(16)] = 154,
  [SMALL_STATE(17)] = 165,
  [SMALL_STATE(18)] = 176,
  [SMALL_STATE(19)] = 184,
  [SMALL_STATE(20)] = 192,
  [SMALL_STATE(21)] = 202,
  [SMALL_STATE(22)] = 212,
  [SMALL_STATE(23)] = 217,
  [SMALL_STATE(24)] = 222,
  [SMALL_STATE(25)] = 227,
  [SMALL_STATE(26)] = 232,
  [SMALL_STATE(27)] = 237,
  [SMALL_STATE(28)] = 242,
  [SMALL_STATE(29)] = 246,
  [SMALL_STATE(30)] = 250,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(14),
  [5] = {.count = 1, .reusable = true}, SHIFT(21),
  [7] = {.count = 2, .reusable = true}, REDUCE(aux_sym_outline_repeat2, 2), SHIFT_REPEAT(29),
  [10] = {.count = 1, .reusable = true}, REDUCE(aux_sym_outline_repeat2, 2),
  [12] = {.count = 1, .reusable = true}, SHIFT(29),
  [14] = {.count = 1, .reusable = true}, SHIFT(23),
  [16] = {.count = 1, .reusable = true}, SHIFT(27),
  [18] = {.count = 1, .reusable = true}, SHIFT(26),
  [20] = {.count = 1, .reusable = true}, REDUCE(sym_outline, 2),
  [22] = {.count = 1, .reusable = true}, SHIFT(30),
  [24] = {.count = 1, .reusable = true}, REDUCE(sym_item, 2),
  [26] = {.count = 1, .reusable = true}, SHIFT(12),
  [28] = {.count = 1, .reusable = true}, SHIFT(19),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_outline_repeat2, 2), SHIFT_REPEAT(30),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_outline, 3),
  [35] = {.count = 1, .reusable = true}, SHIFT(24),
  [37] = {.count = 1, .reusable = true}, SHIFT(25),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_outline, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(13),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3),
  [49] = {.count = 1, .reusable = true}, SHIFT(5),
  [51] = {.count = 1, .reusable = true}, SHIFT(6),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_outline_repeat1, 2),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_outline_repeat1, 2), SHIFT_REPEAT(20),
  [58] = {.count = 1, .reusable = true}, SHIFT(7),
  [60] = {.count = 1, .reusable = true}, SHIFT(20),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_item, 6),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_item, 5),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4),
  [68] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [70] = {.count = 1, .reusable = true}, SHIFT(15),
  [72] = {.count = 1, .reusable = true}, SHIFT(9),
};

void *tree_sitter_outline_external_scanner_create(void);
void tree_sitter_outline_external_scanner_destroy(void *);
bool tree_sitter_outline_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_outline_external_scanner_serialize(void *, char *);
void tree_sitter_outline_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_outline(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_outline_external_scanner_create,
      tree_sitter_outline_external_scanner_destroy,
      tree_sitter_outline_external_scanner_scan,
      tree_sitter_outline_external_scanner_serialize,
      tree_sitter_outline_external_scanner_deserialize,
    },
  };
  return &language;
}
