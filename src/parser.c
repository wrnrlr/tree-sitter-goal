#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  sym_V = 3,
  sym_A = 4,
  aux_sym_a_token1 = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_LBRACK2 = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  sym_nil = 13,
  sym_infinity = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_string_token1 = 16,
  anon_sym_BSLASH = 17,
  aux_sym_string_token2 = 18,
  anon_sym_qq = 19,
  anon_sym_SLASH = 20,
  aux_sym_qq_token1 = 21,
  anon_sym_SLASH2 = 22,
  anon_sym_POUND = 23,
  aux_sym_qq_token2 = 24,
  anon_sym_POUND2 = 25,
  anon_sym_BQUOTE = 26,
  aux_sym_qq_token3 = 27,
  anon_sym_BQUOTE2 = 28,
  anon_sym_DQUOTE2 = 29,
  aux_sym_qq_token4 = 30,
  anon_sym_SQUOTE = 31,
  aux_sym_qq_token5 = 32,
  anon_sym_SQUOTE2 = 33,
  anon_sym_PERCENT = 34,
  aux_sym_qq_token6 = 35,
  anon_sym_PERCENT2 = 36,
  anon_sym_rq = 37,
  anon_sym_rx = 38,
  sym_binairy = 39,
  sym_int = 40,
  sym_number = 41,
  sym_hex = 42,
  sym_exponential = 43,
  sym_name = 44,
  sym_duration = 45,
  sym_inline_comment = 46,
  sym_block_comment = 47,
  sym_line_comment = 48,
  sym_S = 49,
  sym_E = 50,
  sym_e = 51,
  sym_nve = 52,
  sym_te = 53,
  sym_t = 54,
  sym_v = 55,
  sym_n = 56,
  sym_N = 57,
  sym_a = 58,
  sym_atom = 59,
  sym_strand = 60,
  sym_block = 61,
  sym_apply = 62,
  sym_group = 63,
  sym_lambda = 64,
  sym_args = 65,
  sym_string = 66,
  sym_qq = 67,
  sym_rq = 68,
  sym_rx = 69,
  aux_sym_E_repeat1 = 70,
  aux_sym_strand_repeat1 = 71,
  aux_sym_args_repeat1 = 72,
  aux_sym_string_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [sym_V] = "V",
  [sym_A] = "A",
  [aux_sym_a_token1] = "a_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_nil] = "nil",
  [sym_infinity] = "infinity",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_qq] = "qq",
  [anon_sym_SLASH] = "/",
  [aux_sym_qq_token1] = "qq_token1",
  [anon_sym_SLASH2] = "/",
  [anon_sym_POUND] = "#",
  [aux_sym_qq_token2] = "qq_token2",
  [anon_sym_POUND2] = "#",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_qq_token3] = "qq_token3",
  [anon_sym_BQUOTE2] = "`",
  [anon_sym_DQUOTE2] = "\"",
  [aux_sym_qq_token4] = "qq_token4",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_qq_token5] = "qq_token5",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_PERCENT] = "%",
  [aux_sym_qq_token6] = "qq_token6",
  [anon_sym_PERCENT2] = "%",
  [anon_sym_rq] = "rq",
  [anon_sym_rx] = "rx",
  [sym_binairy] = "binairy",
  [sym_int] = "int",
  [sym_number] = "number",
  [sym_hex] = "hex",
  [sym_exponential] = "exponential",
  [sym_name] = "name",
  [sym_duration] = "duration",
  [sym_inline_comment] = "inline_comment",
  [sym_block_comment] = "block_comment",
  [sym_line_comment] = "line_comment",
  [sym_S] = "S",
  [sym_E] = "E",
  [sym_e] = "e",
  [sym_nve] = "nve",
  [sym_te] = "te",
  [sym_t] = "t",
  [sym_v] = "v",
  [sym_n] = "n",
  [sym_N] = "N",
  [sym_a] = "a",
  [sym_atom] = "atom",
  [sym_strand] = "strand",
  [sym_block] = "block",
  [sym_apply] = "apply",
  [sym_group] = "group",
  [sym_lambda] = "lambda",
  [sym_args] = "args",
  [sym_string] = "string",
  [sym_qq] = "qq",
  [sym_rq] = "rq",
  [sym_rx] = "rx",
  [aux_sym_E_repeat1] = "E_repeat1",
  [aux_sym_strand_repeat1] = "strand_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_V] = sym_V,
  [sym_A] = sym_A,
  [aux_sym_a_token1] = aux_sym_a_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_nil] = sym_nil,
  [sym_infinity] = sym_infinity,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_qq] = anon_sym_qq,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_qq_token1] = aux_sym_qq_token1,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_qq_token2] = aux_sym_qq_token2,
  [anon_sym_POUND2] = anon_sym_POUND,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_qq_token3] = aux_sym_qq_token3,
  [anon_sym_BQUOTE2] = anon_sym_BQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [aux_sym_qq_token4] = aux_sym_qq_token4,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_qq_token5] = aux_sym_qq_token5,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_qq_token6] = aux_sym_qq_token6,
  [anon_sym_PERCENT2] = anon_sym_PERCENT,
  [anon_sym_rq] = anon_sym_rq,
  [anon_sym_rx] = anon_sym_rx,
  [sym_binairy] = sym_binairy,
  [sym_int] = sym_int,
  [sym_number] = sym_number,
  [sym_hex] = sym_hex,
  [sym_exponential] = sym_exponential,
  [sym_name] = sym_name,
  [sym_duration] = sym_duration,
  [sym_inline_comment] = sym_inline_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_S] = sym_S,
  [sym_E] = sym_E,
  [sym_e] = sym_e,
  [sym_nve] = sym_nve,
  [sym_te] = sym_te,
  [sym_t] = sym_t,
  [sym_v] = sym_v,
  [sym_n] = sym_n,
  [sym_N] = sym_N,
  [sym_a] = sym_a,
  [sym_atom] = sym_atom,
  [sym_strand] = sym_strand,
  [sym_block] = sym_block,
  [sym_apply] = sym_apply,
  [sym_group] = sym_group,
  [sym_lambda] = sym_lambda,
  [sym_args] = sym_args,
  [sym_string] = sym_string,
  [sym_qq] = sym_qq,
  [sym_rq] = sym_rq,
  [sym_rx] = sym_rx,
  [aux_sym_E_repeat1] = aux_sym_E_repeat1,
  [aux_sym_strand_repeat1] = aux_sym_strand_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_V] = {
    .visible = true,
    .named = true,
  },
  [sym_A] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_a_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_infinity] = {
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
  [anon_sym_qq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qq_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qq_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qq_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qq_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qq_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qq_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rx] = {
    .visible = true,
    .named = false,
  },
  [sym_binairy] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_exponential] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_S] = {
    .visible = true,
    .named = true,
  },
  [sym_E] = {
    .visible = true,
    .named = true,
  },
  [sym_e] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_nve] = {
    .visible = true,
    .named = true,
  },
  [sym_te] = {
    .visible = true,
    .named = true,
  },
  [sym_t] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_v] = {
    .visible = true,
    .named = true,
  },
  [sym_n] = {
    .visible = true,
    .named = true,
  },
  [sym_N] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_a] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_strand] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_apply] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_args] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_qq] = {
    .visible = true,
    .named = true,
  },
  [sym_rq] = {
    .visible = true,
    .named = true,
  },
  [sym_rx] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_E_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_strand_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_args_repeat1] = {
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
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 18,
  [35] = 16,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '"', 88,
        '#', 68,
        '%', 107,
        '\'', 97,
        '(', 46,
        ')', 47,
        ',', 34,
        '-', 35,
        '/', 63,
        '0', 120,
        ':', 36,
        ';', 33,
        '[', 45,
        '\\', 57,
        ']', 44,
        '_', 37,
        '`', 78,
        'q', 127,
        'r', 128,
        '{', 48,
        '}', 49,
        '\t', 1,
        ' ', 1,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 32,
        '"', 52,
        '#', 77,
        '%', 116,
        '\'', 106,
        '(', 46,
        ')', 47,
        ',', 34,
        '-', 35,
        '/', 67,
        '0', 120,
        ':', 36,
        ';', 33,
        '[', 43,
        '\\', 57,
        ']', 44,
        '_', 37,
        '`', 87,
        'q', 127,
        'r', 128,
        '{', 48,
        '}', 49,
        '\t', 1,
        ' ', 1,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 32,
        '"', 52,
        '(', 46,
        ')', 47,
        ',', 34,
        '-', 35,
        '/', 39,
        '0', 120,
        ':', 36,
        ';', 33,
        '[', 43,
        ']', 44,
        '_', 37,
        'q', 127,
        'r', 128,
        '{', 48,
        '}', 49,
        '\t', 2,
        ' ', 2,
        '\'', 38,
        '\\', 38,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 52,
        '#', 77,
        '%', 116,
        '\'', 106,
        '/', 131,
        '`', 87,
        '\t', 6,
        ' ', 6,
      );
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 52,
        '#', 77,
        '%', 116,
        '\'', 106,
        '/', 3,
        '`', 87,
        '\t', 6,
        ' ', 6,
      );
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 17:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 19:
      if (lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 26:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '"', 52,
        '(', 46,
        ')', 47,
        ',', 34,
        '-', 35,
        '/', 40,
        '0', 120,
        ':', 36,
        ';', 33,
        '[', 45,
        ']', 44,
        '_', 37,
        'q', 127,
        'r', 128,
        '{', 48,
        '}', 49,
        '\t', 2,
        ' ', 2,
        '\'', 38,
        '\\', 38,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 27:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '"', 52,
        '(', 46,
        ')', 47,
        ',', 34,
        '-', 35,
        '/', 40,
        '0', 120,
        ':', 36,
        ';', 33,
        '[', 43,
        ']', 44,
        '_', 37,
        'q', 127,
        'r', 128,
        '{', 48,
        '}', 49,
        '\t', 2,
        ' ', 2,
        '\'', 38,
        '\\', 38,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 28:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '"', 52,
        '(', 46,
        ')', 47,
        ',', 34,
        '-', 35,
        '/', 42,
        '0', 120,
        ':', 36,
        ';', 33,
        '[', 45,
        ']', 44,
        '_', 37,
        'q', 127,
        'r', 128,
        '{', 48,
        '}', 49,
        '\t', 2,
        ' ', 2,
        '\'', 41,
        '\\', 41,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '"', 52,
        '(', 46,
        ')', 47,
        ',', 34,
        '-', 35,
        '/', 42,
        '0', 120,
        ':', 36,
        ';', 33,
        '[', 43,
        ']', 44,
        '_', 37,
        'q', 127,
        'r', 128,
        '{', 48,
        '}', 49,
        '\t', 2,
        ' ', 2,
        '\'', 41,
        '\\', 41,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '"', 88,
        '#', 68,
        '%', 107,
        '\'', 97,
        ')', 47,
        '/', 63,
        ';', 33,
        ']', 44,
        '`', 78,
        '}', 49,
        '\t', 9,
        ' ', 9,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_V);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_V);
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_V);
      if (lookahead == ':') ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_V);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_A);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_A);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_A);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_a_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_a_token1);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_infinity);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_qq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_qq_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_qq_token1);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_qq_token2);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_qq_token2);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_qq_token2);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_qq_token2);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_qq_token2);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_qq_token2);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_qq_token2);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_qq_token2);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_qq_token3);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_qq_token3);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '`') ADVANCE(5);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_qq_token3);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '`') ADVANCE(5);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_qq_token3);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_qq_token3);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_qq_token3);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_qq_token3);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_qq_token3);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_qq_token4);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_qq_token4);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_qq_token4);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_qq_token4);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_qq_token4);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_qq_token4);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_qq_token4);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_qq_token4);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_qq_token5);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_qq_token5);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_qq_token5);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_qq_token5);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_qq_token5);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_qq_token5);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_qq_token5);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_qq_token5);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_qq_token6);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_qq_token6);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_qq_token6);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_qq_token6);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_qq_token6);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_qq_token6);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_qq_token6);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_qq_token6);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_rq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_rx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_binairy);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_int);
      ADVANCE_MAP(
        '.', 20,
        'E', 15,
        'b', 18,
        'e', 16,
        'W', 51,
        'w', 51,
        'X', 25,
        'x', 25,
        'i', 50,
        'n', 50,
        'h', 130,
        'm', 130,
        's', 130,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_int);
      ADVANCE_MAP(
        '.', 20,
        'E', 15,
        'e', 16,
        'W', 51,
        'w', 51,
        'X', 25,
        'x', 25,
        'h', 130,
        'm', 130,
        's', 130,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_exponential);
      if (lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_exponential);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3c0) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_duration);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 30},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 30},
  [53] = {.lex_state = 30},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 30},
  [56] = {.lex_state = 64},
  [57] = {.lex_state = 74},
  [58] = {.lex_state = 84},
  [59] = {.lex_state = 30},
  [60] = {.lex_state = 30},
  [61] = {.lex_state = 94},
  [62] = {.lex_state = 30},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 103},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 113},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 103},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 113},
  [84] = {.lex_state = 64},
  [85] = {.lex_state = 30},
  [86] = {.lex_state = 74},
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 84},
  [89] = {.lex_state = 94},
  [90] = {.lex_state = 103},
  [91] = {.lex_state = 113},
  [92] = {.lex_state = 64},
  [93] = {.lex_state = 30},
  [94] = {.lex_state = 74},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 84},
  [97] = {.lex_state = 94},
  [98] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_V] = ACTIONS(1),
    [sym_A] = ACTIONS(1),
    [aux_sym_a_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_infinity] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_qq] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT2] = ACTIONS(1),
    [anon_sym_rq] = ACTIONS(1),
    [anon_sym_rx] = ACTIONS(1),
    [sym_binairy] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_exponential] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_duration] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_S] = STATE(55),
    [sym_E] = STATE(62),
    [sym_e] = STATE(2),
    [sym_nve] = STATE(38),
    [sym_te] = STATE(38),
    [sym_t] = STATE(4),
    [sym_v] = STATE(17),
    [sym_n] = STATE(15),
    [sym_N] = STATE(12),
    [sym_a] = STATE(18),
    [sym_atom] = STATE(23),
    [sym_strand] = STATE(19),
    [sym_block] = STATE(38),
    [sym_apply] = STATE(19),
    [sym_group] = STATE(23),
    [sym_lambda] = STATE(23),
    [sym_string] = STATE(30),
    [sym_qq] = STATE(30),
    [sym_rq] = STATE(30),
    [sym_rx] = STATE(30),
    [aux_sym_E_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_V] = ACTIONS(11),
    [sym_A] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(19),
    [sym_infinity] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_qq] = ACTIONS(23),
    [anon_sym_rq] = ACTIONS(25),
    [anon_sym_rx] = ACTIONS(27),
    [sym_binairy] = ACTIONS(19),
    [sym_int] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_hex] = ACTIONS(19),
    [sym_exponential] = ACTIONS(29),
    [sym_name] = ACTIONS(29),
    [sym_duration] = ACTIONS(19),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(31),
  },
  [2] = {
    [sym_e] = STATE(5),
    [sym_nve] = STATE(38),
    [sym_te] = STATE(38),
    [sym_t] = STATE(4),
    [sym_v] = STATE(17),
    [sym_n] = STATE(15),
    [sym_N] = STATE(12),
    [sym_a] = STATE(18),
    [sym_atom] = STATE(23),
    [sym_strand] = STATE(19),
    [sym_block] = STATE(38),
    [sym_apply] = STATE(19),
    [sym_group] = STATE(23),
    [sym_lambda] = STATE(23),
    [sym_string] = STATE(30),
    [sym_qq] = STATE(30),
    [sym_rq] = STATE(30),
    [sym_rx] = STATE(30),
    [aux_sym_E_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(35),
    [sym_V] = ACTIONS(11),
    [sym_A] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(33),
    [sym_nil] = ACTIONS(19),
    [sym_infinity] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_qq] = ACTIONS(23),
    [anon_sym_rq] = ACTIONS(25),
    [anon_sym_rx] = ACTIONS(27),
    [sym_binairy] = ACTIONS(19),
    [sym_int] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_hex] = ACTIONS(19),
    [sym_exponential] = ACTIONS(29),
    [sym_name] = ACTIONS(29),
    [sym_duration] = ACTIONS(19),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(37),
  },
  [3] = {
    [sym_e] = STATE(40),
    [sym_nve] = STATE(38),
    [sym_te] = STATE(38),
    [sym_t] = STATE(4),
    [sym_v] = STATE(17),
    [sym_n] = STATE(15),
    [sym_N] = STATE(12),
    [sym_a] = STATE(18),
    [sym_atom] = STATE(23),
    [sym_strand] = STATE(19),
    [sym_block] = STATE(38),
    [sym_apply] = STATE(19),
    [sym_group] = STATE(23),
    [sym_lambda] = STATE(23),
    [sym_string] = STATE(30),
    [sym_qq] = STATE(30),
    [sym_rq] = STATE(30),
    [sym_rx] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [sym_V] = ACTIONS(11),
    [sym_A] = ACTIONS(11),
    [aux_sym_a_token1] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(39),
    [sym_nil] = ACTIONS(19),
    [sym_infinity] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_qq] = ACTIONS(23),
    [anon_sym_rq] = ACTIONS(25),
    [anon_sym_rx] = ACTIONS(27),
    [sym_binairy] = ACTIONS(19),
    [sym_int] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_hex] = ACTIONS(19),
    [sym_exponential] = ACTIONS(29),
    [sym_name] = ACTIONS(29),
    [sym_duration] = ACTIONS(19),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(43),
  },
  [4] = {
    [sym_e] = STATE(36),
    [sym_nve] = STATE(38),
    [sym_te] = STATE(38),
    [sym_t] = STATE(4),
    [sym_v] = STATE(17),
    [sym_n] = STATE(15),
    [sym_N] = STATE(12),
    [sym_a] = STATE(18),
    [sym_atom] = STATE(23),
    [sym_strand] = STATE(19),
    [sym_block] = STATE(38),
    [sym_apply] = STATE(19),
    [sym_group] = STATE(23),
    [sym_lambda] = STATE(23),
    [sym_string] = STATE(30),
    [sym_qq] = STATE(30),
    [sym_rq] = STATE(30),
    [sym_rx] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LF] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_V] = ACTIONS(47),
    [sym_A] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACK2] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(45),
    [sym_nil] = ACTIONS(61),
    [sym_infinity] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_qq] = ACTIONS(67),
    [anon_sym_rq] = ACTIONS(70),
    [anon_sym_rx] = ACTIONS(73),
    [sym_binairy] = ACTIONS(61),
    [sym_int] = ACTIONS(76),
    [sym_number] = ACTIONS(76),
    [sym_hex] = ACTIONS(61),
    [sym_exponential] = ACTIONS(76),
    [sym_name] = ACTIONS(76),
    [sym_duration] = ACTIONS(61),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(79),
  },
  [5] = {
    [sym_e] = STATE(5),
    [sym_nve] = STATE(38),
    [sym_te] = STATE(38),
    [sym_t] = STATE(4),
    [sym_v] = STATE(17),
    [sym_n] = STATE(15),
    [sym_N] = STATE(12),
    [sym_a] = STATE(18),
    [sym_atom] = STATE(23),
    [sym_strand] = STATE(19),
    [sym_block] = STATE(38),
    [sym_apply] = STATE(19),
    [sym_group] = STATE(23),
    [sym_lambda] = STATE(23),
    [sym_string] = STATE(30),
    [sym_qq] = STATE(30),
    [sym_rq] = STATE(30),
    [sym_rx] = STATE(30),
    [aux_sym_E_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_LF] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_V] = ACTIONS(86),
    [sym_A] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(81),
    [sym_nil] = ACTIONS(98),
    [sym_infinity] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_qq] = ACTIONS(104),
    [anon_sym_rq] = ACTIONS(107),
    [anon_sym_rx] = ACTIONS(110),
    [sym_binairy] = ACTIONS(98),
    [sym_int] = ACTIONS(113),
    [sym_number] = ACTIONS(113),
    [sym_hex] = ACTIONS(98),
    [sym_exponential] = ACTIONS(113),
    [sym_name] = ACTIONS(113),
    [sym_duration] = ACTIONS(98),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(116),
  },
  [6] = {
    [sym_E] = STATE(60),
    [sym_e] = STATE(2),
    [sym_nve] = STATE(38),
    [sym_te] = STATE(38),
    [sym_t] = STATE(4),
    [sym_v] = STATE(17),
    [sym_n] = STATE(15),
    [sym_N] = STATE(12),
    [sym_a] = STATE(18),
    [sym_atom] = STATE(23),
    [sym_strand] = STATE(19),
    [sym_block] = STATE(38),
    [sym_apply] = STATE(19),
    [sym_group] = STATE(23),
    [sym_lambda] = STATE(23),
    [sym_args] = STATE(10),
    [sym_string] = STATE(30),
    [sym_qq] = STATE(30),
    [sym_rq] = STATE(30),
    [sym_rx] = STATE(30),
    [aux_sym_E_repeat1] = STATE(2),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_V] = ACTIONS(11),
    [sym_A] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(121),
    [sym_nil] = ACTIONS(19),
    [sym_infinity] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_qq] = ACTIONS(23),
    [anon_sym_rq] = ACTIONS(25),
    [anon_sym_rx] = ACTIONS(27),
    [sym_binairy] = ACTIONS(19),
    [sym_int] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_hex] = ACTIONS(19),
    [sym_exponential] = ACTIONS(29),
    [sym_name] = ACTIONS(29),
    [sym_duration] = ACTIONS(19),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(31),
  },
  [7] = {
    [sym_E] = STATE(87),
    [sym_e] = STATE(2),
    [sym_nve] = STATE(38),
    [sym_te] = STATE(38),
    [sym_t] = STATE(4),
    [sym_v] = STATE(17),
    [sym_n] = STATE(15),
    [sym_N] = STATE(12),
    [sym_a] = STATE(18),
    [sym_atom] = STATE(23),
    [sym_strand] = STATE(19),
    [sym_block] = STATE(38),
    [sym_apply] = STATE(19),
    [sym_group] = STATE(23),
    [sym_lambda] = STATE(23),
    [sym_string] = STATE(30),
    [sym_qq] = STATE(30),
    [sym_rq] = STATE(30),
    [sym_rx] = STATE(30),
    [aux_sym_E_repeat1] = STATE(2),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_V] = ACTIONS(11),
    [sym_A] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(19),
    [sym_infinity] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_qq] = ACTIONS(23),
    [anon_sym_rq] = ACTIONS(25),
    [anon_sym_rx] = ACTIONS(27),
    [sym_binairy] = ACTIONS(19),
    [sym_int] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_hex] = ACTIONS(19),
    [sym_exponential] = ACTIONS(29),
    [sym_name] = ACTIONS(125),
    [sym_duration] = ACTIONS(19),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(31),
  },
  [8] = {
    [sym_E] = STATE(87),
    [sym_e] = STATE(2),
    [sym_nve] = STATE(38),
    [sym_te] = STATE(38),
    [sym_t] = STATE(4),
    [sym_v] = STATE(17),
    [sym_n] = STATE(15),
    [sym_N] = STATE(12),
    [sym_a] = STATE(18),
    [sym_atom] = STATE(23),
    [sym_strand] = STATE(19),
    [sym_block] = STATE(38),
    [sym_apply] = STATE(19),
    [sym_group] = STATE(23),
    [sym_lambda] = STATE(23),
    [sym_string] = STATE(30),
    [sym_qq] = STATE(30),
    [sym_rq] = STATE(30),
    [sym_rx] = STATE(30),
    [aux_sym_E_repeat1] = STATE(2),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_V] = ACTIONS(11),
    [sym_A] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(19),
    [sym_infinity] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_qq] = ACTIONS(23),
    [anon_sym_rq] = ACTIONS(25),
    [anon_sym_rx] = ACTIONS(27),
    [sym_binairy] = ACTIONS(19),
    [sym_int] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_hex] = ACTIONS(19),
    [sym_exponential] = ACTIONS(29),
    [sym_name] = ACTIONS(29),
    [sym_duration] = ACTIONS(19),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(31),
  },
  [9] = {
    [sym_E] = STATE(93),
    [sym_e] = STATE(2),
    [sym_nve] = STATE(38),
    [sym_te] = STATE(38),
    [sym_t] = STATE(4),
    [sym_v] = STATE(17),
    [sym_n] = STATE(15),
    [sym_N] = STATE(12),
    [sym_a] = STATE(18),
    [sym_atom] = STATE(23),
    [sym_strand] = STATE(19),
    [sym_block] = STATE(38),
    [sym_apply] = STATE(19),
    [sym_group] = STATE(23),
    [sym_lambda] = STATE(23),
    [sym_string] = STATE(30),
    [sym_qq] = STATE(30),
    [sym_rq] = STATE(30),
    [sym_rx] = STATE(30),
    [aux_sym_E_repeat1] = STATE(2),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_V] = ACTIONS(11),
    [sym_A] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(19),
    [sym_infinity] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_qq] = ACTIONS(23),
    [anon_sym_rq] = ACTIONS(25),
    [anon_sym_rx] = ACTIONS(27),
    [sym_binairy] = ACTIONS(19),
    [sym_int] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_hex] = ACTIONS(19),
    [sym_exponential] = ACTIONS(29),
    [sym_name] = ACTIONS(29),
    [sym_duration] = ACTIONS(19),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(31),
  },
  [10] = {
    [sym_E] = STATE(59),
    [sym_e] = STATE(2),
    [sym_nve] = STATE(38),
    [sym_te] = STATE(38),
    [sym_t] = STATE(4),
    [sym_v] = STATE(17),
    [sym_n] = STATE(15),
    [sym_N] = STATE(12),
    [sym_a] = STATE(18),
    [sym_atom] = STATE(23),
    [sym_strand] = STATE(19),
    [sym_block] = STATE(38),
    [sym_apply] = STATE(19),
    [sym_group] = STATE(23),
    [sym_lambda] = STATE(23),
    [sym_string] = STATE(30),
    [sym_qq] = STATE(30),
    [sym_rq] = STATE(30),
    [sym_rx] = STATE(30),
    [aux_sym_E_repeat1] = STATE(2),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_V] = ACTIONS(11),
    [sym_A] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(129),
    [sym_nil] = ACTIONS(19),
    [sym_infinity] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_qq] = ACTIONS(23),
    [anon_sym_rq] = ACTIONS(25),
    [anon_sym_rx] = ACTIONS(27),
    [sym_binairy] = ACTIONS(19),
    [sym_int] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_hex] = ACTIONS(19),
    [sym_exponential] = ACTIONS(29),
    [sym_name] = ACTIONS(29),
    [sym_duration] = ACTIONS(19),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(31),
  },
  [11] = {
    [sym_E] = STATE(82),
    [sym_e] = STATE(2),
    [sym_nve] = STATE(38),
    [sym_te] = STATE(38),
    [sym_t] = STATE(4),
    [sym_v] = STATE(17),
    [sym_n] = STATE(15),
    [sym_N] = STATE(12),
    [sym_a] = STATE(18),
    [sym_atom] = STATE(23),
    [sym_strand] = STATE(19),
    [sym_block] = STATE(38),
    [sym_apply] = STATE(19),
    [sym_group] = STATE(23),
    [sym_lambda] = STATE(23),
    [sym_string] = STATE(30),
    [sym_qq] = STATE(30),
    [sym_rq] = STATE(30),
    [sym_rx] = STATE(30),
    [aux_sym_E_repeat1] = STATE(2),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_V] = ACTIONS(11),
    [sym_A] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(19),
    [sym_infinity] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_qq] = ACTIONS(23),
    [anon_sym_rq] = ACTIONS(25),
    [anon_sym_rx] = ACTIONS(27),
    [sym_binairy] = ACTIONS(19),
    [sym_int] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_hex] = ACTIONS(19),
    [sym_exponential] = ACTIONS(29),
    [sym_name] = ACTIONS(29),
    [sym_duration] = ACTIONS(19),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_qq,
    ACTIONS(152), 1,
      anon_sym_rq,
    ACTIONS(155), 1,
      anon_sym_rx,
    STATE(13), 2,
      sym_N,
      aux_sym_strand_repeat1,
    STATE(23), 3,
      sym_atom,
      sym_group,
      sym_lambda,
    ACTIONS(135), 4,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      sym_line_comment,
    ACTIONS(158), 4,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
    STATE(30), 4,
      sym_string,
      sym_qq,
      sym_rq,
      sym_rx,
    ACTIONS(143), 5,
      sym_nil,
      sym_infinity,
      sym_binairy,
      sym_hex,
      sym_duration,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [68] = 15,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      anon_sym_qq,
    ACTIONS(180), 1,
      anon_sym_rq,
    ACTIONS(183), 1,
      anon_sym_rx,
    STATE(14), 2,
      sym_N,
      aux_sym_strand_repeat1,
    STATE(23), 3,
      sym_atom,
      sym_group,
      sym_lambda,
    ACTIONS(163), 4,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      sym_line_comment,
    ACTIONS(186), 4,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
    STATE(30), 4,
      sym_string,
      sym_qq,
      sym_rq,
      sym_rx,
    ACTIONS(171), 5,
      sym_nil,
      sym_infinity,
      sym_binairy,
      sym_hex,
      sym_duration,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [136] = 15,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      anon_sym_qq,
    ACTIONS(208), 1,
      anon_sym_rq,
    ACTIONS(211), 1,
      anon_sym_rx,
    STATE(14), 2,
      sym_N,
      aux_sym_strand_repeat1,
    STATE(23), 3,
      sym_atom,
      sym_group,
      sym_lambda,
    ACTIONS(191), 4,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      sym_line_comment,
    ACTIONS(214), 4,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
    STATE(30), 4,
      sym_string,
      sym_qq,
      sym_rq,
      sym_rx,
    ACTIONS(199), 5,
      sym_nil,
      sym_infinity,
      sym_binairy,
      sym_hex,
      sym_duration,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [204] = 7,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(3), 1,
      sym_v,
    STATE(34), 1,
      sym_a,
    ACTIONS(219), 2,
      sym_V,
      sym_A,
    ACTIONS(221), 9,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(217), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [249] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(225), 12,
      sym_V,
      sym_A,
      aux_sym_a_token1,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(223), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [287] = 5,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(227), 1,
      aux_sym_a_token1,
    ACTIONS(221), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(217), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [327] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(231), 12,
      sym_V,
      sym_A,
      aux_sym_a_token1,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(229), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [365] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(135), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(133), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [402] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(235), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(233), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [439] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(239), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(237), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [476] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(243), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(241), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [513] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(247), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(245), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [550] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(251), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(249), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [587] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(255), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(253), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [624] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(259), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(257), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [661] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(263), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(261), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [698] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(267), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(265), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [735] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(271), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(269), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [772] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(275), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(273), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [809] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(279), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(277), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [846] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(283), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(281), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [883] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(287), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(285), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [920] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(231), 11,
      sym_V,
      sym_A,
      aux_sym_a_token1,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(229), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [957] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(225), 11,
      sym_V,
      sym_A,
      aux_sym_a_token1,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(223), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [994] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(291), 10,
      sym_V,
      sym_A,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(289), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [1030] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(295), 10,
      sym_V,
      sym_A,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(293), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [1066] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(79), 10,
      sym_V,
      sym_A,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(45), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [1102] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(299), 10,
      sym_V,
      sym_A,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(297), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [1138] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(303), 10,
      sym_V,
      sym_A,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(301), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [1174] = 7,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_args_repeat1,
    ACTIONS(273), 10,
      anon_sym_LF,
      anon_sym_LBRACK2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
    ACTIONS(275), 11,
      sym_V,
      sym_A,
      anon_sym_LBRACK,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
  [1215] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(313), 10,
      sym_V,
      sym_A,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(311), 12,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [1248] = 4,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(317), 10,
      sym_V,
      sym_A,
      anon_sym_qq,
      anon_sym_rq,
      anon_sym_rx,
      sym_int,
      sym_number,
      sym_exponential,
      sym_name,
      sym_line_comment,
    ACTIONS(315), 12,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_nil,
      sym_infinity,
      anon_sym_DQUOTE,
      sym_binairy,
      sym_hex,
      sym_duration,
  [1281] = 8,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(319), 1,
      anon_sym_SLASH,
    ACTIONS(321), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_BQUOTE,
    ACTIONS(325), 1,
      anon_sym_DQUOTE2,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_PERCENT,
  [1306] = 8,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(333), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_BQUOTE,
    ACTIONS(337), 1,
      anon_sym_DQUOTE2,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
  [1331] = 8,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(345), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      anon_sym_BQUOTE,
    ACTIONS(349), 1,
      anon_sym_DQUOTE2,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    ACTIONS(353), 1,
      anon_sym_PERCENT,
  [1356] = 5,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      aux_sym_string_token1,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    STATE(48), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1373] = 5,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      aux_sym_string_token1,
    STATE(49), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1390] = 5,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      aux_sym_string_token1,
    ACTIONS(370), 1,
      anon_sym_BSLASH,
    STATE(49), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1407] = 5,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(373), 1,
      anon_sym_SEMI,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_args_repeat1,
  [1423] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(365), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [1433] = 5,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(378), 1,
      anon_sym_SEMI,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_args_repeat1,
  [1449] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(376), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1460] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(382), 1,
      anon_sym_BQUOTE2,
  [1470] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
  [1480] = 2,
    ACTIONS(386), 1,
      aux_sym_qq_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1488] = 2,
    ACTIONS(388), 1,
      aux_sym_qq_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1496] = 2,
    ACTIONS(390), 1,
      aux_sym_qq_token3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1504] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
  [1514] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
  [1524] = 2,
    ACTIONS(394), 1,
      aux_sym_qq_token4,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1532] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
  [1542] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(398), 1,
      anon_sym_SLASH2,
  [1552] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(400), 1,
      anon_sym_POUND2,
  [1562] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(400), 1,
      anon_sym_BQUOTE2,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
  [1582] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(400), 1,
      anon_sym_SQUOTE2,
  [1592] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(400), 1,
      anon_sym_PERCENT2,
  [1602] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(402), 1,
      anon_sym_SLASH2,
  [1612] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(382), 1,
      anon_sym_POUND2,
  [1622] = 2,
    ACTIONS(404), 1,
      aux_sym_qq_token5,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1630] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
  [1640] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(382), 1,
      anon_sym_SQUOTE2,
  [1650] = 2,
    ACTIONS(406), 1,
      aux_sym_qq_token6,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1658] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(408), 1,
      anon_sym_SLASH2,
  [1668] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(410), 1,
      anon_sym_POUND2,
  [1678] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(410), 1,
      anon_sym_BQUOTE2,
  [1688] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
  [1698] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(410), 1,
      anon_sym_SQUOTE2,
  [1708] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(410), 1,
      anon_sym_PERCENT2,
  [1718] = 2,
    ACTIONS(412), 1,
      aux_sym_qq_token5,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1726] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
  [1736] = 2,
    ACTIONS(416), 1,
      aux_sym_qq_token6,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1744] = 2,
    ACTIONS(418), 1,
      aux_sym_qq_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1752] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(420), 1,
      sym_name,
  [1762] = 2,
    ACTIONS(422), 1,
      aux_sym_qq_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1770] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
  [1780] = 2,
    ACTIONS(426), 1,
      aux_sym_qq_token3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1788] = 2,
    ACTIONS(428), 1,
      aux_sym_qq_token4,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1796] = 2,
    ACTIONS(430), 1,
      aux_sym_qq_token5,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1804] = 2,
    ACTIONS(432), 1,
      aux_sym_qq_token6,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1812] = 2,
    ACTIONS(434), 1,
      aux_sym_qq_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1820] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
  [1830] = 2,
    ACTIONS(438), 1,
      aux_sym_qq_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1838] = 2,
    ACTIONS(440), 1,
      aux_sym_string_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1846] = 2,
    ACTIONS(442), 1,
      aux_sym_qq_token3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1854] = 2,
    ACTIONS(444), 1,
      aux_sym_qq_token4,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1862] = 3,
    ACTIONS(3), 1,
      sym_inline_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(382), 1,
      anon_sym_PERCENT2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 68,
  [SMALL_STATE(14)] = 136,
  [SMALL_STATE(15)] = 204,
  [SMALL_STATE(16)] = 249,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 327,
  [SMALL_STATE(19)] = 365,
  [SMALL_STATE(20)] = 402,
  [SMALL_STATE(21)] = 439,
  [SMALL_STATE(22)] = 476,
  [SMALL_STATE(23)] = 513,
  [SMALL_STATE(24)] = 550,
  [SMALL_STATE(25)] = 587,
  [SMALL_STATE(26)] = 624,
  [SMALL_STATE(27)] = 661,
  [SMALL_STATE(28)] = 698,
  [SMALL_STATE(29)] = 735,
  [SMALL_STATE(30)] = 772,
  [SMALL_STATE(31)] = 809,
  [SMALL_STATE(32)] = 846,
  [SMALL_STATE(33)] = 883,
  [SMALL_STATE(34)] = 920,
  [SMALL_STATE(35)] = 957,
  [SMALL_STATE(36)] = 994,
  [SMALL_STATE(37)] = 1030,
  [SMALL_STATE(38)] = 1066,
  [SMALL_STATE(39)] = 1102,
  [SMALL_STATE(40)] = 1138,
  [SMALL_STATE(41)] = 1174,
  [SMALL_STATE(42)] = 1215,
  [SMALL_STATE(43)] = 1248,
  [SMALL_STATE(44)] = 1281,
  [SMALL_STATE(45)] = 1306,
  [SMALL_STATE(46)] = 1331,
  [SMALL_STATE(47)] = 1356,
  [SMALL_STATE(48)] = 1373,
  [SMALL_STATE(49)] = 1390,
  [SMALL_STATE(50)] = 1407,
  [SMALL_STATE(51)] = 1423,
  [SMALL_STATE(52)] = 1433,
  [SMALL_STATE(53)] = 1449,
  [SMALL_STATE(54)] = 1460,
  [SMALL_STATE(55)] = 1470,
  [SMALL_STATE(56)] = 1480,
  [SMALL_STATE(57)] = 1488,
  [SMALL_STATE(58)] = 1496,
  [SMALL_STATE(59)] = 1504,
  [SMALL_STATE(60)] = 1514,
  [SMALL_STATE(61)] = 1524,
  [SMALL_STATE(62)] = 1532,
  [SMALL_STATE(63)] = 1542,
  [SMALL_STATE(64)] = 1552,
  [SMALL_STATE(65)] = 1562,
  [SMALL_STATE(66)] = 1572,
  [SMALL_STATE(67)] = 1582,
  [SMALL_STATE(68)] = 1592,
  [SMALL_STATE(69)] = 1602,
  [SMALL_STATE(70)] = 1612,
  [SMALL_STATE(71)] = 1622,
  [SMALL_STATE(72)] = 1630,
  [SMALL_STATE(73)] = 1640,
  [SMALL_STATE(74)] = 1650,
  [SMALL_STATE(75)] = 1658,
  [SMALL_STATE(76)] = 1668,
  [SMALL_STATE(77)] = 1678,
  [SMALL_STATE(78)] = 1688,
  [SMALL_STATE(79)] = 1698,
  [SMALL_STATE(80)] = 1708,
  [SMALL_STATE(81)] = 1718,
  [SMALL_STATE(82)] = 1726,
  [SMALL_STATE(83)] = 1736,
  [SMALL_STATE(84)] = 1744,
  [SMALL_STATE(85)] = 1752,
  [SMALL_STATE(86)] = 1762,
  [SMALL_STATE(87)] = 1770,
  [SMALL_STATE(88)] = 1780,
  [SMALL_STATE(89)] = 1788,
  [SMALL_STATE(90)] = 1796,
  [SMALL_STATE(91)] = 1804,
  [SMALL_STATE(92)] = 1812,
  [SMALL_STATE(93)] = 1820,
  [SMALL_STATE(94)] = 1830,
  [SMALL_STATE(95)] = 1838,
  [SMALL_STATE(96)] = 1846,
  [SMALL_STATE(97)] = 1854,
  [SMALL_STATE(98)] = 1862,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_S, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_E, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nve, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nve, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_e, 1, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_e, 1, 0, 0), SHIFT(18),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_e, 1, 0, 0), SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_e, 1, 0, 0), SHIFT(9),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_e, 1, 0, 0), SHIFT(6),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_e, 1, 0, 0), SHIFT(30),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_e, 1, 0, 0), SHIFT(47),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_e, 1, 0, 0), SHIFT(44),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_e, 1, 0, 0), SHIFT(46),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_e, 1, 0, 0), SHIFT(45),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_e, 1, 0, 0), SHIFT(30),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_e, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_E_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_n, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_n, 1, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_n, 1, 0, 0), SHIFT(9),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_n, 1, 0, 0), SHIFT(6),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_n, 1, 0, 0), SHIFT(30),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_n, 1, 0, 0), SHIFT(47),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_n, 1, 0, 0), SHIFT(44),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_n, 1, 0, 0), SHIFT(46),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_n, 1, 0, 0), SHIFT(45),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_n, 1, 0, 0), SHIFT(30),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strand, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strand, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_strand, 2, 0, 0), SHIFT(9),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_strand, 2, 0, 0), SHIFT(6),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_strand, 2, 0, 0), SHIFT(30),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_strand, 2, 0, 0), SHIFT(47),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_strand, 2, 0, 0), SHIFT(44),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_strand, 2, 0, 0), SHIFT(46),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_strand, 2, 0, 0), SHIFT(45),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_strand, 2, 0, 0), SHIFT(30),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_strand_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_t, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_t, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_a, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_v, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_N, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_N, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply, 4, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qq, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qq, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rq, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rq, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rx, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rx, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_te, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_te, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nve, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nve, 3, 0, 0),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atom, 1, 0, 0), SHIFT(85),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atom, 1, 0, 0), SHIFT(42),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_args, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_args, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [384] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_S, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
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

TS_PUBLIC const TSLanguage *tree_sitter_goal(void) {
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
