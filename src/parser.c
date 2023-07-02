#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  sym_comment = 1,
  anon_sym_BANG = 2,
  anon_sym_macro = 3,
  anon_sym_COLON = 4,
  anon_sym_SEMI = 5,
  anon_sym_DOT = 6,
  anon_sym_COMMA = 7,
  anon_sym_PERCENT = 8,
  anon_sym_DOLLAR = 9,
  sym_identifier = 10,
  sym_number = 11,
  sym_string = 12,
  sym_char = 13,
  sym_newline = 14,
  sym_source_file = 15,
  sym_macro = 16,
  sym_macro_args = 17,
  sym_macro_body = 18,
  sym_label_define = 19,
  sym_instruction = 20,
  sym_instruction_args = 21,
  sym_instruction_arg = 22,
  sym_label_ref = 23,
  sym_register = 24,
  sym_macro_arg_ref = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_macro_args_repeat1 = 27,
  aux_sym_macro_body_repeat1 = 28,
  aux_sym_instruction_args_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_BANG] = "!",
  [anon_sym_macro] = "macro",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOLLAR] = "$",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_char] = "char",
  [sym_newline] = "newline",
  [sym_source_file] = "source_file",
  [sym_macro] = "macro",
  [sym_macro_args] = "macro_args",
  [sym_macro_body] = "macro_body",
  [sym_label_define] = "label_define",
  [sym_instruction] = "instruction",
  [sym_instruction_args] = "instruction_args",
  [sym_instruction_arg] = "instruction_arg",
  [sym_label_ref] = "label_ref",
  [sym_register] = "register",
  [sym_macro_arg_ref] = "macro_arg_ref",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_macro_args_repeat1] = "macro_args_repeat1",
  [aux_sym_macro_body_repeat1] = "macro_body_repeat1",
  [aux_sym_instruction_args_repeat1] = "instruction_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_char] = sym_char,
  [sym_newline] = sym_newline,
  [sym_source_file] = sym_source_file,
  [sym_macro] = sym_macro,
  [sym_macro_args] = sym_macro_args,
  [sym_macro_body] = sym_macro_body,
  [sym_label_define] = sym_label_define,
  [sym_instruction] = sym_instruction,
  [sym_instruction_args] = sym_instruction_args,
  [sym_instruction_arg] = sym_instruction_arg,
  [sym_label_ref] = sym_label_ref,
  [sym_register] = sym_register,
  [sym_macro_arg_ref] = sym_macro_arg_ref,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_macro_args_repeat1] = aux_sym_macro_args_repeat1,
  [aux_sym_macro_body_repeat1] = aux_sym_macro_body_repeat1,
  [aux_sym_instruction_args_repeat1] = aux_sym_instruction_args_repeat1,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_args] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_body] = {
    .visible = true,
    .named = true,
  },
  [sym_label_define] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_args] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_label_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_arg_ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 2},
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
  [27] = 13,
  [28] = 12,
  [29] = 14,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '0') ADVANCE(23);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '0') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(24);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(3);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '0') ADVANCE(23);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_macro] = STATE(15),
    [sym_label_define] = STATE(15),
    [sym_instruction] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
  [2] = {
    [sym_label_define] = STATE(2),
    [sym_instruction] = STATE(2),
    [sym_instruction_arg] = STATE(2),
    [sym_label_ref] = STATE(14),
    [sym_register] = STATE(14),
    [sym_macro_arg_ref] = STATE(14),
    [aux_sym_macro_body_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(21),
    [sym_identifier] = ACTIONS(24),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
  },
  [3] = {
    [sym_macro_body] = STATE(40),
    [sym_label_define] = STATE(4),
    [sym_instruction] = STATE(4),
    [sym_instruction_arg] = STATE(4),
    [sym_label_ref] = STATE(14),
    [sym_register] = STATE(14),
    [sym_macro_arg_ref] = STATE(14),
    [aux_sym_macro_body_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_PERCENT] = ACTIONS(32),
    [anon_sym_DOLLAR] = ACTIONS(34),
    [sym_identifier] = ACTIONS(11),
    [sym_number] = ACTIONS(36),
    [sym_string] = ACTIONS(36),
    [sym_char] = ACTIONS(36),
  },
  [4] = {
    [sym_label_define] = STATE(2),
    [sym_instruction] = STATE(2),
    [sym_instruction_arg] = STATE(2),
    [sym_label_ref] = STATE(14),
    [sym_register] = STATE(14),
    [sym_macro_arg_ref] = STATE(14),
    [aux_sym_macro_body_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(38),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_PERCENT] = ACTIONS(32),
    [anon_sym_DOLLAR] = ACTIONS(34),
    [sym_identifier] = ACTIONS(11),
    [sym_number] = ACTIONS(36),
    [sym_string] = ACTIONS(36),
    [sym_char] = ACTIONS(36),
  },
  [5] = {
    [sym_macro_body] = STATE(34),
    [sym_label_define] = STATE(4),
    [sym_instruction] = STATE(4),
    [sym_instruction_arg] = STATE(4),
    [sym_label_ref] = STATE(14),
    [sym_register] = STATE(14),
    [sym_macro_arg_ref] = STATE(14),
    [aux_sym_macro_body_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_PERCENT] = ACTIONS(32),
    [anon_sym_DOLLAR] = ACTIONS(34),
    [sym_identifier] = ACTIONS(11),
    [sym_number] = ACTIONS(36),
    [sym_string] = ACTIONS(36),
    [sym_char] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_DOT,
    ACTIONS(44), 1,
      anon_sym_PERCENT,
    ACTIONS(46), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      sym_newline,
    STATE(24), 1,
      sym_instruction_arg,
    STATE(37), 1,
      sym_instruction_args,
    ACTIONS(48), 3,
      sym_number,
      sym_string,
      sym_char,
    STATE(29), 3,
      sym_label_ref,
      sym_register,
      sym_macro_arg_ref,
  [32] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_number,
      sym_string,
      sym_char,
  [48] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DOT,
    ACTIONS(56), 1,
      anon_sym_PERCENT,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_instruction_arg,
    ACTIONS(60), 3,
      sym_number,
      sym_string,
      sym_char,
    STATE(29), 3,
      sym_label_ref,
      sym_register,
      sym_macro_arg_ref,
  [74] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_number,
      sym_string,
      sym_char,
  [90] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_number,
      sym_string,
      sym_char,
  [106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_COLON,
    ACTIONS(68), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_number,
      sym_string,
      sym_char,
  [123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_number,
      sym_string,
      sym_char,
  [137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_number,
      sym_string,
      sym_char,
  [151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_number,
      sym_string,
      sym_char,
  [165] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_BANG,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(16), 4,
      sym_macro,
      sym_label_define,
      sym_instruction,
      aux_sym_source_file_repeat1,
  [187] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      anon_sym_BANG,
    ACTIONS(83), 1,
      anon_sym_DOT,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(16), 4,
      sym_macro,
      sym_label_define,
      sym_instruction,
      aux_sym_source_file_repeat1,
  [209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_macro_args_repeat1,
    STATE(32), 1,
      sym_macro_args,
  [225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DOT,
      sym_identifier,
  [235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DOT,
      sym_identifier,
  [245] = 4,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      sym_newline,
    STATE(23), 1,
      aux_sym_instruction_args_repeat1,
  [258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COLON,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym_macro_args_repeat1,
  [271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym_macro_args_repeat1,
  [284] = 4,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      sym_newline,
    STATE(23), 1,
      aux_sym_instruction_args_repeat1,
  [297] = 4,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      sym_newline,
    STATE(20), 1,
      aux_sym_instruction_args_repeat1,
  [310] = 3,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym_newline,
    ACTIONS(117), 1,
      anon_sym_COMMA,
  [320] = 3,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_newline,
    ACTIONS(119), 1,
      anon_sym_COMMA,
  [330] = 3,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_newline,
    ACTIONS(121), 1,
      anon_sym_COMMA,
  [340] = 3,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_newline,
    ACTIONS(123), 1,
      anon_sym_COMMA,
  [350] = 3,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_newline,
    ACTIONS(125), 1,
      anon_sym_COMMA,
  [360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_macro,
  [367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_identifier,
  [374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COLON,
  [381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_identifier,
  [388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SEMI,
  [395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_identifier,
  [402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
  [409] = 2,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_newline,
  [416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_COLON,
  [423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_identifier,
  [430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_SEMI,
  [437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_identifier,
  [451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_identifier,
  [458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 32,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 74,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 123,
  [SMALL_STATE(13)] = 137,
  [SMALL_STATE(14)] = 151,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 187,
  [SMALL_STATE(17)] = 209,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 258,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 284,
  [SMALL_STATE(24)] = 297,
  [SMALL_STATE(25)] = 310,
  [SMALL_STATE(26)] = 320,
  [SMALL_STATE(27)] = 330,
  [SMALL_STATE(28)] = 340,
  [SMALL_STATE(29)] = 350,
  [SMALL_STATE(30)] = 360,
  [SMALL_STATE(31)] = 367,
  [SMALL_STATE(32)] = 374,
  [SMALL_STATE(33)] = 381,
  [SMALL_STATE(34)] = 388,
  [SMALL_STATE(35)] = 395,
  [SMALL_STATE(36)] = 402,
  [SMALL_STATE(37)] = 409,
  [SMALL_STATE(38)] = 416,
  [SMALL_STATE(39)] = 423,
  [SMALL_STATE(40)] = 430,
  [SMALL_STATE(41)] = 437,
  [SMALL_STATE(42)] = 444,
  [SMALL_STATE(43)] = 451,
  [SMALL_STATE(44)] = 458,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_body_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_body_repeat1, 2), SHIFT_REPEAT(33),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_body_repeat1, 2), SHIFT_REPEAT(43),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_body_repeat1, 2), SHIFT_REPEAT(44),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_body_repeat1, 2), SHIFT_REPEAT(6),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_body_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_body, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_define, 3, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_ref, 2, .production_id = 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_arg_ref, 2, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_arg, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 6, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 7, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_args, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_args, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_args_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_args_repeat1, 2), SHIFT_REPEAT(22),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_args_repeat1, 2), SHIFT_REPEAT(8),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_args_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_args, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_ref, 2, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_args_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 2, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_arg_ref, 2, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_arg, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_weave(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
