#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  aux_sym_outline_token1 = 1,
  aux_sym_text_token1 = 2,
  aux_sym_text_token2 = 3,
  sym__indent = 4,
  sym__dedent = 5,
  sym__newline = 6,
  sym_outline = 7,
  sym_item = 8,
  sym_text = 9,
  aux_sym_outline_repeat1 = 10,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_outline_token1] = "outline_token1",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_token2] = "text_token2",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym_outline] = "outline",
  [sym_item] = "item",
  [sym_text] = "text",
  [aux_sym_outline_repeat1] = "outline_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_outline_token1] = aux_sym_outline_token1,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym_outline] = sym_outline,
  [sym_item] = sym_item,
  [sym_text] = sym_text,
  [aux_sym_outline_repeat1] = aux_sym_outline_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_outline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = false,
    .named = false,
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
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_outline_token1);
      if (eof) ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_outline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 4},
  [14] = {.lex_state = 0, .external_lex_state = 4},
  [15] = {.lex_state = 0, .external_lex_state = 5},
  [16] = {.lex_state = 0, .external_lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__newline = 2,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__newline] = sym__newline,
};

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_outline_token1] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_outline] = STATE(23),
    [sym_item] = STATE(6),
    [sym_text] = STATE(16),
    [aux_sym_outline_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_outline_token1] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      aux_sym_text_token1,
    ACTIONS(11), 1,
      sym__dedent,
    STATE(14), 1,
      sym_text,
    STATE(10), 2,
      sym_item,
      aux_sym_outline_repeat1,
  [14] = 4,
    ACTIONS(7), 1,
      aux_sym_text_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_text,
    STATE(7), 2,
      sym_item,
      aux_sym_outline_repeat1,
  [28] = 4,
    ACTIONS(9), 1,
      aux_sym_text_token1,
    ACTIONS(15), 1,
      sym__dedent,
    STATE(14), 1,
      sym_text,
    STATE(10), 2,
      sym_item,
      aux_sym_outline_repeat1,
  [42] = 4,
    ACTIONS(9), 1,
      aux_sym_text_token1,
    ACTIONS(17), 1,
      sym__dedent,
    STATE(14), 1,
      sym_text,
    STATE(4), 2,
      sym_item,
      aux_sym_outline_repeat1,
  [56] = 4,
    ACTIONS(7), 1,
      aux_sym_text_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_text,
    STATE(9), 2,
      sym_item,
      aux_sym_outline_repeat1,
  [70] = 4,
    ACTIONS(7), 1,
      aux_sym_text_token1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_text,
    STATE(9), 2,
      sym_item,
      aux_sym_outline_repeat1,
  [84] = 4,
    ACTIONS(9), 1,
      aux_sym_text_token1,
    ACTIONS(21), 1,
      sym__dedent,
    STATE(14), 1,
      sym_text,
    STATE(2), 2,
      sym_item,
      aux_sym_outline_repeat1,
  [98] = 4,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym_text_token1,
    STATE(16), 1,
      sym_text,
    STATE(9), 2,
      sym_item,
      aux_sym_outline_repeat1,
  [112] = 4,
    ACTIONS(23), 1,
      sym__dedent,
    ACTIONS(28), 1,
      aux_sym_text_token1,
    STATE(14), 1,
      sym_text,
    STATE(10), 2,
      sym_item,
      aux_sym_outline_repeat1,
  [126] = 2,
    ACTIONS(33), 1,
      sym__newline,
    ACTIONS(31), 3,
      sym__indent,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [135] = 2,
    ACTIONS(35), 1,
      sym__newline,
    ACTIONS(31), 3,
      sym__indent,
      sym__dedent,
      aux_sym_text_token1,
  [144] = 1,
    ACTIONS(37), 3,
      sym__indent,
      sym__dedent,
      aux_sym_text_token1,
  [150] = 2,
    ACTIONS(41), 1,
      sym__indent,
    ACTIONS(39), 2,
      sym__dedent,
      aux_sym_text_token1,
  [158] = 1,
    ACTIONS(37), 3,
      sym__indent,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [164] = 2,
    ACTIONS(43), 1,
      sym__indent,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [172] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [177] = 1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [182] = 1,
    ACTIONS(47), 2,
      sym__dedent,
      aux_sym_text_token1,
  [187] = 1,
    ACTIONS(45), 2,
      sym__dedent,
      aux_sym_text_token1,
  [192] = 1,
    ACTIONS(49), 1,
      aux_sym_text_token2,
  [196] = 1,
    ACTIONS(51), 1,
      aux_sym_text_token2,
  [200] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(12)] = 135,
  [SMALL_STATE(13)] = 144,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 158,
  [SMALL_STATE(16)] = 164,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 177,
  [SMALL_STATE(19)] = 182,
  [SMALL_STATE(20)] = 187,
  [SMALL_STATE(21)] = 192,
  [SMALL_STATE(22)] = 196,
  [SMALL_STATE(23)] = 200,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_outline, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(21),
  [9] = {.count = 1, .reusable = true}, SHIFT(22),
  [11] = {.count = 1, .reusable = true}, SHIFT(17),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_outline, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(20),
  [17] = {.count = 1, .reusable = true}, SHIFT(19),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_outline, 2),
  [21] = {.count = 1, .reusable = true}, SHIFT(18),
  [23] = {.count = 1, .reusable = true}, REDUCE(aux_sym_outline_repeat1, 2),
  [25] = {.count = 2, .reusable = true}, REDUCE(aux_sym_outline_repeat1, 2), SHIFT_REPEAT(21),
  [28] = {.count = 2, .reusable = true}, REDUCE(aux_sym_outline_repeat1, 2), SHIFT_REPEAT(22),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_text, 2),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(13),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_text, 3),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_item, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(5),
  [43] = {.count = 1, .reusable = true}, SHIFT(8),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3),
  [49] = {.count = 1, .reusable = true}, SHIFT(11),
  [51] = {.count = 1, .reusable = true}, SHIFT(12),
  [53] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
