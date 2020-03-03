#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  aux_sym_text_token1 = 1,
  aux_sym_text_token2 = 2,
  sym__start = 3,
  sym__indent = 4,
  sym__dedent = 5,
  sym__newline = 6,
  sym_outline = 7,
  sym_item = 8,
  sym_text = 9,
  aux_sym_outline_repeat1 = 10,
  aux_sym_outline_repeat2 = 11,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_token2] = "text_token2",
  [sym__start] = "_start",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym_outline] = "outline",
  [sym_item] = "item",
  [sym_text] = "text",
  [aux_sym_outline_repeat1] = "outline_repeat1",
  [aux_sym_outline_repeat2] = "outline_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [sym__start] = sym__start,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym_outline] = sym_outline,
  [sym_item] = sym_item,
  [sym_text] = sym_text,
  [aux_sym_outline_repeat1] = aux_sym_outline_repeat1,
  [aux_sym_outline_repeat2] = aux_sym_outline_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token2] = {
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
  [sym_text] = {
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
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_text_token2);
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
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0, .external_lex_state = 4},
  [13] = {.lex_state = 0, .external_lex_state = 5},
  [14] = {.lex_state = 0, .external_lex_state = 6},
  [15] = {.lex_state = 0, .external_lex_state = 7},
  [16] = {.lex_state = 0, .external_lex_state = 6},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 7},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
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
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token__newline] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
  },
  [7] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [sym__start] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_outline] = STATE(24),
    [aux_sym_outline_repeat1] = STATE(19),
    [sym__start] = ACTIONS(3),
    [sym__newline] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      aux_sym_text_token1,
    ACTIONS(9), 1,
      sym__dedent,
    STATE(15), 1,
      sym_text,
    STATE(6), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [14] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_text_token1,
    STATE(14), 1,
      sym_text,
    STATE(7), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [28] = 4,
    ACTIONS(7), 1,
      aux_sym_text_token1,
    ACTIONS(15), 1,
      sym__dedent,
    STATE(15), 1,
      sym_text,
    STATE(6), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [42] = 4,
    ACTIONS(7), 1,
      aux_sym_text_token1,
    ACTIONS(17), 1,
      sym__dedent,
    STATE(15), 1,
      sym_text,
    STATE(4), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [56] = 4,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(22), 1,
      sym__dedent,
    STATE(15), 1,
      sym_text,
    STATE(6), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [70] = 4,
    ACTIONS(13), 1,
      aux_sym_text_token1,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_text,
    STATE(10), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [84] = 4,
    ACTIONS(13), 1,
      aux_sym_text_token1,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_text,
    STATE(11), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [98] = 4,
    ACTIONS(7), 1,
      aux_sym_text_token1,
    ACTIONS(26), 1,
      sym__dedent,
    STATE(15), 1,
      sym_text,
    STATE(2), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [112] = 4,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      aux_sym_text_token1,
    STATE(14), 1,
      sym_text,
    STATE(10), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [126] = 4,
    ACTIONS(13), 1,
      aux_sym_text_token1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_text,
    STATE(10), 2,
      sym_item,
      aux_sym_outline_repeat2,
  [140] = 2,
    ACTIONS(35), 1,
      sym__newline,
    ACTIONS(33), 3,
      sym__indent,
      sym__dedent,
      aux_sym_text_token1,
  [149] = 2,
    ACTIONS(37), 1,
      sym__newline,
    ACTIONS(33), 3,
      sym__indent,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [158] = 2,
    ACTIONS(41), 1,
      sym__indent,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [166] = 2,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(39), 2,
      sym__dedent,
      aux_sym_text_token1,
  [174] = 1,
    ACTIONS(45), 3,
      sym__indent,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [180] = 3,
    ACTIONS(47), 1,
      sym__start,
    ACTIONS(49), 1,
      sym__newline,
    STATE(17), 1,
      aux_sym_outline_repeat1,
  [190] = 1,
    ACTIONS(45), 3,
      sym__indent,
      sym__dedent,
      aux_sym_text_token1,
  [196] = 3,
    ACTIONS(52), 1,
      sym__start,
    ACTIONS(54), 1,
      sym__newline,
    STATE(17), 1,
      aux_sym_outline_repeat1,
  [206] = 1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [211] = 1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [216] = 1,
    ACTIONS(56), 2,
      sym__dedent,
      aux_sym_text_token1,
  [221] = 1,
    ACTIONS(58), 2,
      sym__dedent,
      aux_sym_text_token1,
  [226] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
  [230] = 1,
    ACTIONS(62), 1,
      aux_sym_text_token2,
  [234] = 1,
    ACTIONS(64), 1,
      aux_sym_text_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 70,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 126,
  [SMALL_STATE(12)] = 140,
  [SMALL_STATE(13)] = 149,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 166,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 190,
  [SMALL_STATE(19)] = 196,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 211,
  [SMALL_STATE(22)] = 216,
  [SMALL_STATE(23)] = 221,
  [SMALL_STATE(24)] = 226,
  [SMALL_STATE(25)] = 230,
  [SMALL_STATE(26)] = 234,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(3),
  [5] = {.count = 1, .reusable = true}, SHIFT(19),
  [7] = {.count = 1, .reusable = true}, SHIFT(25),
  [9] = {.count = 1, .reusable = true}, SHIFT(21),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_outline, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(26),
  [15] = {.count = 1, .reusable = true}, SHIFT(23),
  [17] = {.count = 1, .reusable = true}, SHIFT(22),
  [19] = {.count = 2, .reusable = true}, REDUCE(aux_sym_outline_repeat2, 2), SHIFT_REPEAT(25),
  [22] = {.count = 1, .reusable = true}, REDUCE(aux_sym_outline_repeat2, 2),
  [24] = {.count = 1, .reusable = true}, REDUCE(sym_outline, 2),
  [26] = {.count = 1, .reusable = true}, SHIFT(20),
  [28] = {.count = 2, .reusable = true}, REDUCE(aux_sym_outline_repeat2, 2), SHIFT_REPEAT(26),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_outline, 3),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_text, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_item, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(9),
  [43] = {.count = 1, .reusable = true}, SHIFT(5),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_text, 3),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_outline_repeat1, 2),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_outline_repeat1, 2), SHIFT_REPEAT(17),
  [52] = {.count = 1, .reusable = true}, SHIFT(8),
  [54] = {.count = 1, .reusable = true}, SHIFT(17),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4),
  [60] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [62] = {.count = 1, .reusable = true}, SHIFT(12),
  [64] = {.count = 1, .reusable = true}, SHIFT(13),
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
