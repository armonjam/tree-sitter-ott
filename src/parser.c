#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 214
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 10
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 39

enum ts_symbol_identifiers {
  anon_sym_grammar = 1,
  anon_sym_embed = 2,
  anon_sym_defns = 3,
  anon_sym_COLON_COLON = 4,
  anon_sym_COLON_COLON_EQ = 5,
  anon_sym_defn = 6,
  anon_sym_by = 7,
  anon_sym_LF = 8,
  anon_sym_DASH_DASH_DASH_DASH = 9,
  aux_sym_dash_line_token1 = 10,
  anon_sym_PIPE = 11,
  anon_sym_LT_SLASH = 12,
  anon_sym_SLASH_SLASH = 13,
  anon_sym_SLASH_GT = 14,
  anon_sym_metavar = 15,
  anon_sym_indexvar = 16,
  anon_sym_COMMA = 17,
  anon_sym_IN = 18,
  anon_sym_LBRACE_LBRACE = 19,
  anon_sym_RBRACE_RBRACE = 20,
  anon_sym_tex = 21,
  anon_sym_tex_DASHpreamble = 22,
  anon_sym_LBRACK_LBRACK = 23,
  anon_sym_RBRACK_RBRACK = 24,
  sym_comment = 25,
  anon_sym_DOT_DOT = 26,
  anon_sym_DOT_DOT_DOT = 27,
  anon_sym_DOT_DOT_DOT_DOT = 28,
  anon_sym_SQUOTE = 29,
  sym_id = 30,
  sym_string = 31,
  sym_hom_string = 32,
  sym_hom_inner_string = 33,
  sym_error_sentinel = 34,
  sym_source_file = 35,
  sym__item = 36,
  sym_defnclass = 37,
  sym_defnclass_name = 38,
  sym_defn = 39,
  sym_defn_name = 40,
  sym_defn_rule = 41,
  sym_rule_separator = 42,
  sym_rule_name = 43,
  sym_dash_line = 44,
  sym_rule_line = 45,
  sym_grammar_rule = 46,
  sym_production = 47,
  sym_production_mod = 48,
  sym_production_name = 49,
  sym_element = 50,
  sym_metavardefn = 51,
  sym__id_desc_list1 = 52,
  sym_id_desc = 53,
  sym_comprehension_bound = 54,
  sym_embed = 55,
  sym_homomorphism = 56,
  sym_hom_name = 57,
  sym__hom_element = 58,
  sym_hom_inner_block = 59,
  sym__hom_inner = 60,
  sym__hom_string = 61,
  sym__hom_inner_string = 62,
  sym_dots = 63,
  sym_namespace_prefix = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym__item_repeat1 = 66,
  aux_sym_defnclass_repeat1 = 67,
  aux_sym_defnclass_repeat2 = 68,
  aux_sym_defn_repeat1 = 69,
  aux_sym_defn_repeat2 = 70,
  aux_sym_defn_rule_repeat1 = 71,
  aux_sym_rule_line_repeat1 = 72,
  aux_sym_grammar_rule_repeat1 = 73,
  aux_sym_production_repeat1 = 74,
  aux_sym__id_desc_list1_repeat1 = 75,
  aux_sym_homomorphism_repeat1 = 76,
  aux_sym__hom_inner_repeat1 = 77,
  anon_alias_sym_defn_name = 78,
  anon_alias_sym_defnclass_name = 79,
  anon_alias_sym_element = 80,
  alias_sym_hom_body = 81,
  anon_alias_sym_id = 82,
  anon_alias_sym_production_modifier = 83,
  anon_alias_sym_production_name = 84,
  anon_alias_sym_q_id = 85,
  anon_alias_sym_rule_name = 86,
  anon_alias_sym_symbol = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_grammar] = "grammar",
  [anon_sym_embed] = "embed",
  [anon_sym_defns] = "defns",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_defn] = "defn",
  [anon_sym_by] = "by",
  [anon_sym_LF] = "\n",
  [anon_sym_DASH_DASH_DASH_DASH] = "----",
  [aux_sym_dash_line_token1] = "dash_line_token1",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_metavar] = "metavar",
  [anon_sym_indexvar] = "indexvar",
  [anon_sym_COMMA] = ",",
  [anon_sym_IN] = "IN",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_tex] = "tex",
  [anon_sym_tex_DASHpreamble] = "tex-preamble",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [sym_comment] = "comment",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DOT_DOT_DOT_DOT] = "....",
  [anon_sym_SQUOTE] = "'",
  [sym_id] = "id",
  [sym_string] = "string",
  [sym_hom_string] = "hom_string",
  [sym_hom_inner_string] = "hom_inner_string",
  [sym_error_sentinel] = "error_sentinel",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym_defnclass] = "defnclass",
  [sym_defnclass_name] = "defnclass_name",
  [sym_defn] = "defn",
  [sym_defn_name] = "defn_name",
  [sym_defn_rule] = "defn_rule",
  [sym_rule_separator] = "rule_separator",
  [sym_rule_name] = "rule_name",
  [sym_dash_line] = "dash_line",
  [sym_rule_line] = "rule_line",
  [sym_grammar_rule] = "grammar_rule",
  [sym_production] = "production",
  [sym_production_mod] = "production_mod",
  [sym_production_name] = "production_name",
  [sym_element] = "element",
  [sym_metavardefn] = "metavardefn",
  [sym__id_desc_list1] = "_id_desc_list1",
  [sym_id_desc] = "id_desc",
  [sym_comprehension_bound] = "comprehension_bound",
  [sym_embed] = "embed",
  [sym_homomorphism] = "homomorphism",
  [sym_hom_name] = "hom_name",
  [sym__hom_element] = "_hom_element",
  [sym_hom_inner_block] = "hom_inner_block",
  [sym__hom_inner] = "_hom_inner",
  [sym__hom_string] = "_hom_string",
  [sym__hom_inner_string] = "_hom_inner_string",
  [sym_dots] = "dots",
  [sym_namespace_prefix] = "namespace_prefix",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__item_repeat1] = "_item_repeat1",
  [aux_sym_defnclass_repeat1] = "defnclass_repeat1",
  [aux_sym_defnclass_repeat2] = "defnclass_repeat2",
  [aux_sym_defn_repeat1] = "defn_repeat1",
  [aux_sym_defn_repeat2] = "defn_repeat2",
  [aux_sym_defn_rule_repeat1] = "defn_rule_repeat1",
  [aux_sym_rule_line_repeat1] = "rule_line_repeat1",
  [aux_sym_grammar_rule_repeat1] = "grammar_rule_repeat1",
  [aux_sym_production_repeat1] = "production_repeat1",
  [aux_sym__id_desc_list1_repeat1] = "_id_desc_list1_repeat1",
  [aux_sym_homomorphism_repeat1] = "homomorphism_repeat1",
  [aux_sym__hom_inner_repeat1] = "_hom_inner_repeat1",
  [anon_alias_sym_defn_name] = "defn_name",
  [anon_alias_sym_defnclass_name] = "defnclass_name",
  [anon_alias_sym_element] = "element",
  [alias_sym_hom_body] = "hom_body",
  [anon_alias_sym_id] = "id",
  [anon_alias_sym_production_modifier] = "production_modifier",
  [anon_alias_sym_production_name] = "production_name",
  [anon_alias_sym_q_id] = "q_id",
  [anon_alias_sym_rule_name] = "rule_name",
  [anon_alias_sym_symbol] = "symbol",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_grammar] = anon_sym_grammar,
  [anon_sym_embed] = anon_sym_embed,
  [anon_sym_defns] = anon_sym_defns,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_defn] = anon_sym_defn,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DASH_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH_DASH,
  [aux_sym_dash_line_token1] = aux_sym_dash_line_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_metavar] = anon_sym_metavar,
  [anon_sym_indexvar] = anon_sym_indexvar,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_tex] = anon_sym_tex,
  [anon_sym_tex_DASHpreamble] = anon_sym_tex_DASHpreamble,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [sym_comment] = sym_comment,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_id] = sym_id,
  [sym_string] = sym_string,
  [sym_hom_string] = sym_hom_string,
  [sym_hom_inner_string] = sym_hom_inner_string,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym_defnclass] = sym_defnclass,
  [sym_defnclass_name] = sym_defnclass_name,
  [sym_defn] = sym_defn,
  [sym_defn_name] = sym_defn_name,
  [sym_defn_rule] = sym_defn_rule,
  [sym_rule_separator] = sym_rule_separator,
  [sym_rule_name] = sym_rule_name,
  [sym_dash_line] = sym_dash_line,
  [sym_rule_line] = sym_rule_line,
  [sym_grammar_rule] = sym_grammar_rule,
  [sym_production] = sym_production,
  [sym_production_mod] = sym_production_mod,
  [sym_production_name] = sym_production_name,
  [sym_element] = sym_element,
  [sym_metavardefn] = sym_metavardefn,
  [sym__id_desc_list1] = sym__id_desc_list1,
  [sym_id_desc] = sym_id_desc,
  [sym_comprehension_bound] = sym_comprehension_bound,
  [sym_embed] = sym_embed,
  [sym_homomorphism] = sym_homomorphism,
  [sym_hom_name] = sym_hom_name,
  [sym__hom_element] = sym__hom_element,
  [sym_hom_inner_block] = sym_hom_inner_block,
  [sym__hom_inner] = sym__hom_inner,
  [sym__hom_string] = sym__hom_string,
  [sym__hom_inner_string] = sym__hom_inner_string,
  [sym_dots] = sym_dots,
  [sym_namespace_prefix] = sym_namespace_prefix,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__item_repeat1] = aux_sym__item_repeat1,
  [aux_sym_defnclass_repeat1] = aux_sym_defnclass_repeat1,
  [aux_sym_defnclass_repeat2] = aux_sym_defnclass_repeat2,
  [aux_sym_defn_repeat1] = aux_sym_defn_repeat1,
  [aux_sym_defn_repeat2] = aux_sym_defn_repeat2,
  [aux_sym_defn_rule_repeat1] = aux_sym_defn_rule_repeat1,
  [aux_sym_rule_line_repeat1] = aux_sym_rule_line_repeat1,
  [aux_sym_grammar_rule_repeat1] = aux_sym_grammar_rule_repeat1,
  [aux_sym_production_repeat1] = aux_sym_production_repeat1,
  [aux_sym__id_desc_list1_repeat1] = aux_sym__id_desc_list1_repeat1,
  [aux_sym_homomorphism_repeat1] = aux_sym_homomorphism_repeat1,
  [aux_sym__hom_inner_repeat1] = aux_sym__hom_inner_repeat1,
  [anon_alias_sym_defn_name] = anon_alias_sym_defn_name,
  [anon_alias_sym_defnclass_name] = anon_alias_sym_defnclass_name,
  [anon_alias_sym_element] = anon_alias_sym_element,
  [alias_sym_hom_body] = alias_sym_hom_body,
  [anon_alias_sym_id] = anon_alias_sym_id,
  [anon_alias_sym_production_modifier] = anon_alias_sym_production_modifier,
  [anon_alias_sym_production_name] = anon_alias_sym_production_name,
  [anon_alias_sym_q_id] = anon_alias_sym_q_id,
  [anon_alias_sym_rule_name] = anon_alias_sym_rule_name,
  [anon_alias_sym_symbol] = anon_alias_sym_symbol,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_grammar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_embed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dash_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metavar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tex_DASHpreamble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_string] = {
    .visible = true,
    .named = false,
  },
  [sym_hom_inner_string] = {
    .visible = true,
    .named = false,
  },
  [sym_error_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_defnclass] = {
    .visible = true,
    .named = true,
  },
  [sym_defnclass_name] = {
    .visible = true,
    .named = true,
  },
  [sym_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_defn_name] = {
    .visible = true,
    .named = true,
  },
  [sym_defn_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_name] = {
    .visible = true,
    .named = true,
  },
  [sym_dash_line] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_line] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_production] = {
    .visible = true,
    .named = true,
  },
  [sym_production_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_production_name] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_metavardefn] = {
    .visible = true,
    .named = true,
  },
  [sym__id_desc_list1] = {
    .visible = false,
    .named = true,
  },
  [sym_id_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_comprehension_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_embed] = {
    .visible = true,
    .named = true,
  },
  [sym_homomorphism] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_name] = {
    .visible = true,
    .named = true,
  },
  [sym__hom_element] = {
    .visible = false,
    .named = true,
  },
  [sym_hom_inner_block] = {
    .visible = true,
    .named = true,
  },
  [sym__hom_inner] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_string] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_string] = {
    .visible = false,
    .named = true,
  },
  [sym_dots] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_prefix] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defnclass_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defnclass_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defn_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defn_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defn_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_production_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__id_desc_list1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_homomorphism_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hom_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_defn_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_defnclass_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_element] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_hom_body] = {
    .visible = true,
    .named = true,
  },
  [anon_alias_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_production_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_production_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_q_id] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_rule_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_symbol] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_class_name = 2,
  field_close = 3,
  field_conclusion = 4,
  field_definition = 5,
  field_definition_name = 6,
  field_definition_rule = 7,
  field_element = 8,
  field_hom_inner_block = 9,
  field_hom_string = 10,
  field_homomorphism = 11,
  field_line = 12,
  field_modifier = 13,
  field_name = 14,
  field_namespace_prefix = 15,
  field_open = 16,
  field_premise = 17,
  field_production_name = 18,
  field_rule_name = 19,
  field_separator = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_class_name] = "class_name",
  [field_close] = "close",
  [field_conclusion] = "conclusion",
  [field_definition] = "definition",
  [field_definition_name] = "definition_name",
  [field_definition_rule] = "definition_rule",
  [field_element] = "element",
  [field_hom_inner_block] = "hom_inner_block",
  [field_hom_string] = "hom_string",
  [field_homomorphism] = "homomorphism",
  [field_line] = "line",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_namespace_prefix] = "namespace_prefix",
  [field_open] = "open",
  [field_premise] = "premise",
  [field_production_name] = "production_name",
  [field_rule_name] = "rule_name",
  [field_separator] = "separator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 3},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 6},
  [8] = {.index = 13, .length = 4},
  [9] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 4},
  [17] = {.index = 29, .length = 1},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 2},
  [22] = {.index = 36, .length = 3},
  [23] = {.index = 39, .length = 3},
  [24] = {.index = 42, .length = 3},
  [25] = {.index = 45, .length = 4},
  [26] = {.index = 49, .length = 2},
  [28] = {.index = 51, .length = 3},
  [29] = {.index = 54, .length = 3},
  [30] = {.index = 57, .length = 3},
  [31] = {.index = 60, .length = 2},
  [32] = {.index = 62, .length = 4},
  [33] = {.index = 66, .length = 4},
  [34] = {.index = 70, .length = 4},
  [36] = {.index = 74, .length = 3},
  [37] = {.index = 77, .length = 5},
  [38] = {.index = 82, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 2},
    {field_name, 1},
    {field_open, 0},
  [3] =
    {field_hom_inner_block, 0, .inherited = true},
    {field_hom_string, 0, .inherited = true},
  [5] =
    {field_hom_inner_block, 0},
  [6] =
    {field_hom_string, 0},
  [7] =
    {field_body, 2},
    {field_close, 3},
    {field_hom_inner_block, 2, .inherited = true},
    {field_hom_string, 2, .inherited = true},
    {field_name, 1},
    {field_open, 0},
  [13] =
    {field_hom_inner_block, 0, .inherited = true},
    {field_hom_inner_block, 1, .inherited = true},
    {field_hom_string, 0, .inherited = true},
    {field_hom_string, 1, .inherited = true},
  [17] =
    {field_class_name, 0},
    {field_namespace_prefix, 2},
  [19] =
    {field_class_name, 0},
    {field_homomorphism, 4},
    {field_namespace_prefix, 2},
  [22] =
    {field_class_name, 0},
    {field_definition, 4},
    {field_namespace_prefix, 2},
  [25] =
    {field_class_name, 0},
    {field_definition, 5},
    {field_homomorphism, 4},
    {field_namespace_prefix, 2},
  [29] =
    {field_production_name, 3},
  [30] =
    {field_homomorphism, 4},
    {field_production_name, 3},
  [32] =
    {field_modifier, 2},
    {field_production_name, 4},
  [34] =
    {field_element, 1},
    {field_production_name, 4},
  [36] =
    {field_homomorphism, 5},
    {field_modifier, 2},
    {field_production_name, 4},
  [39] =
    {field_element, 1},
    {field_homomorphism, 5},
    {field_production_name, 4},
  [42] =
    {field_element, 1},
    {field_modifier, 3},
    {field_production_name, 5},
  [45] =
    {field_element, 1},
    {field_homomorphism, 6},
    {field_modifier, 3},
    {field_production_name, 5},
  [49] =
    {field_definition_name, 3},
    {field_namespace_prefix, 5},
  [51] =
    {field_definition_name, 3},
    {field_definition_rule, 8},
    {field_namespace_prefix, 5},
  [54] =
    {field_definition_name, 3},
    {field_homomorphism, 6},
    {field_namespace_prefix, 5},
  [57] =
    {field_definition_name, 4},
    {field_element, 1},
    {field_namespace_prefix, 6},
  [60] =
    {field_conclusion, 1},
    {field_separator, 0},
  [62] =
    {field_definition_name, 3},
    {field_definition_rule, 9},
    {field_homomorphism, 6},
    {field_namespace_prefix, 5},
  [66] =
    {field_definition_name, 4},
    {field_definition_rule, 9},
    {field_element, 1},
    {field_namespace_prefix, 6},
  [70] =
    {field_definition_name, 4},
    {field_element, 1},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [74] =
    {field_conclusion, 2},
    {field_premise, 0},
    {field_separator, 1},
  [77] =
    {field_definition_name, 4},
    {field_definition_rule, 10},
    {field_element, 1},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [82] =
    {field_line, 0},
    {field_rule_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_defnclass_name,
  },
  [2] = {
    [0] = anon_alias_sym_id,
  },
  [7] = {
    [2] = alias_sym_hom_body,
  },
  [10] = {
    [1] = anon_alias_sym_q_id,
  },
  [13] = {
    [0] = anon_alias_sym_symbol,
  },
  [15] = {
    [0] = anon_alias_sym_production_modifier,
  },
  [16] = {
    [0] = anon_alias_sym_production_name,
  },
  [18] = {
    [0] = anon_alias_sym_defn_name,
  },
  [27] = {
    [0] = anon_alias_sym_element,
  },
  [35] = {
    [0] = anon_alias_sym_rule_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_element, 2,
    sym_element,
    anon_alias_sym_element,
  aux_sym_homomorphism_repeat1, 2,
    aux_sym_homomorphism_repeat1,
    alias_sym_hom_body,
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
  [28] = 11,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 30,
  [39] = 26,
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
  [52] = 51,
  [53] = 45,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 21,
  [61] = 49,
  [62] = 62,
  [63] = 20,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 45,
  [68] = 49,
  [69] = 59,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 78,
  [80] = 74,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 74,
  [88] = 77,
  [89] = 76,
  [90] = 78,
  [91] = 84,
  [92] = 82,
  [93] = 83,
  [94] = 78,
  [95] = 82,
  [96] = 12,
  [97] = 83,
  [98] = 84,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 77,
  [104] = 76,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 131,
  [134] = 134,
  [135] = 127,
  [136] = 127,
  [137] = 137,
  [138] = 138,
  [139] = 134,
  [140] = 134,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 148,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 147,
  [155] = 148,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 78,
  [163] = 147,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 166,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 78,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 173,
  [189] = 189,
  [190] = 189,
  [191] = 165,
  [192] = 192,
  [193] = 173,
  [194] = 189,
  [195] = 166,
  [196] = 165,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 174,
  [209] = 187,
  [210] = 210,
  [211] = 211,
  [212] = 174,
  [213] = 187,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '%', 97,
        '\'', 104,
        ',', 88,
        '-', 11,
        '.', 12,
        '/', 13,
        ':', 15,
        '<', 14,
        'I', 19,
        '[', 20,
        ']', 21,
        'b', 58,
        'd', 32,
        'e', 41,
        'g', 48,
        'i', 45,
        'm', 33,
        't', 34,
        '{', 59,
        '|', 76,
        '}', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '<') ADVANCE(138);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == ':') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == '{') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '<') ADVANCE(138);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '<') ADVANCE(138);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '<') ADVANCE(138);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '<') ADVANCE(138);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 20:
      if (lookahead == '[') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(95);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == '}') ADVANCE(91);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '%', 97,
        ':', 16,
        'd', 113,
        'e', 118,
        'g', 124,
        'i', 121,
        'm', 114,
        '{', 59,
        '|', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '%', 96,
        '-', 136,
        '.', 137,
        '<', 138,
        'd', 149,
        'e', 154,
        'g', 160,
        'i', 158,
        'm', 150,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_tex);
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_tex_DASHpreamble);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'x') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(167);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 62},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 62},
  [13] = {.lex_state = 62},
  [14] = {.lex_state = 62},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 61},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 61},
  [29] = {.lex_state = 61},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 61},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 61},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 61},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 61},
  [171] = {.lex_state = 61},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 61},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 61},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 61},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 61},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 75},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 61},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 61},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 61},
  [211] = {.lex_state = 61},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grammar] = ACTIONS(1),
    [anon_sym_embed] = ACTIONS(1),
    [anon_sym_defns] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(1),
    [anon_sym_defn] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_metavar] = ACTIONS(1),
    [anon_sym_indexvar] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_tex] = ACTIONS(1),
    [anon_sym_tex_DASHpreamble] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_hom_string] = ACTIONS(1),
    [sym_hom_inner_string] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(169),
    [sym__item] = STATE(71),
    [sym_metavardefn] = STATE(71),
    [aux_sym_source_file_repeat1] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_grammar] = ACTIONS(7),
    [anon_sym_embed] = ACTIONS(9),
    [anon_sym_defns] = ACTIONS(11),
    [anon_sym_metavar] = ACTIONS(13),
    [anon_sym_indexvar] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(54), 1,
      sym_rule_separator,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    STATE(186), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(17), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [52] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(54), 1,
      sym_rule_separator,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    STATE(186), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(29), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [104] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(54), 1,
      sym_rule_separator,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    STATE(186), 1,
      sym_dash_line,
    STATE(8), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(33), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [156] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(54), 1,
      sym_rule_separator,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    STATE(186), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(37), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [208] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(54), 1,
      sym_rule_separator,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    STATE(186), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(41), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [260] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(54), 1,
      sym_rule_separator,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    STATE(186), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(45), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [312] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(54), 1,
      sym_rule_separator,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    STATE(186), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(49), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [364] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(58), 1,
      anon_sym_LT_SLASH,
    ACTIONS(64), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(54), 1,
      sym_rule_separator,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    STATE(186), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(53), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(61), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [416] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(54), 1,
      sym_rule_separator,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    STATE(186), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(69), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [468] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(73), 2,
      anon_sym_COLON_COLON,
      anon_sym_defn,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(71), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
  [494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(80), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(84), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(88), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [557] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(47), 1,
      sym_rule_separator,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    STATE(186), 1,
      sym_dash_line,
    STATE(37), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [594] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(41), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(94), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [623] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(42), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(100), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(58), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [678] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(65), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_COLON_COLON,
      anon_sym_defn,
    ACTIONS(110), 10,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_COLON_COLON,
      anon_sym_defn,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(36), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(120), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(34), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(124), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [790] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_id,
    STATE(114), 1,
      sym_id_desc,
    STATE(211), 1,
      sym__id_desc_list1,
    ACTIONS(128), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(24), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [817] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(135), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [840] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(139), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(143), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(145), 1,
      sym_hom_string,
    STATE(30), 1,
      aux_sym_homomorphism_repeat1,
    STATE(86), 1,
      sym_hom_inner_block,
    STATE(100), 1,
      sym__hom_string,
    ACTIONS(141), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(105), 2,
      sym__hom_element,
      sym_dots,
  [873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(149), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(73), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(27), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(156), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [942] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(143), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(145), 1,
      sym_hom_string,
    ACTIONS(158), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(33), 1,
      aux_sym_homomorphism_repeat1,
    STATE(86), 1,
      sym_hom_inner_block,
    STATE(100), 1,
      sym__hom_string,
    ACTIONS(141), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(105), 2,
      sym__hom_element,
      sym_dots,
  [975] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_id,
    STATE(114), 1,
      sym_id_desc,
    STATE(211), 1,
      sym__id_desc_list1,
    ACTIONS(162), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(35), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1002] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(168), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1025] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(172), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(178), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(181), 1,
      sym_hom_string,
    STATE(33), 1,
      aux_sym_homomorphism_repeat1,
    STATE(86), 1,
      sym_hom_inner_block,
    STATE(100), 1,
      sym__hom_string,
    ACTIONS(175), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(105), 2,
      sym__hom_element,
      sym_dots,
  [1058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(186), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1081] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_id,
    STATE(114), 1,
      sym_id_desc,
    STATE(211), 1,
      sym__id_desc_list1,
    ACTIONS(190), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(24), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(194), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1131] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(198), 1,
      anon_sym_LT_SLASH,
    ACTIONS(204), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    STATE(37), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(201), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1162] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(143), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(145), 1,
      sym_hom_string,
    ACTIONS(207), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(33), 1,
      aux_sym_homomorphism_repeat1,
    STATE(86), 1,
      sym_hom_inner_block,
    STATE(100), 1,
      sym__hom_string,
    ACTIONS(141), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(105), 2,
      sym__hom_element,
      sym_dots,
  [1195] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(143), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(145), 1,
      sym_hom_string,
    ACTIONS(209), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(38), 1,
      aux_sym_homomorphism_repeat1,
    STATE(86), 1,
      sym_hom_inner_block,
    STATE(100), 1,
      sym__hom_string,
    ACTIONS(141), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(105), 2,
      sym__hom_element,
      sym_dots,
  [1228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    STATE(40), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(216), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(211), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(40), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(100), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(40), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(220), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(218), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1294] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COLON_COLON,
    ACTIONS(224), 1,
      anon_sym_LT_SLASH,
    ACTIONS(228), 1,
      sym_string,
    STATE(77), 1,
      sym_dots,
    STATE(70), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(226), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(50), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1338] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(234), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(238), 1,
      sym_string,
    STATE(103), 1,
      sym_dots,
    STATE(61), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1363] = 8,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 1,
      anon_sym_LT_SLASH,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_rule_line_repeat1,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    ACTIONS(247), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1390] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(13), 1,
      sym_rule_line,
    STATE(52), 1,
      aux_sym_rule_line_repeat1,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(253), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1436] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(238), 1,
      sym_string,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    STATE(103), 1,
      sym_dots,
    STATE(59), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(257), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1480] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LF,
    STATE(46), 1,
      aux_sym_rule_line_repeat1,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1507] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LF,
    STATE(46), 1,
      aux_sym_rule_line_repeat1,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1534] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(238), 1,
      sym_string,
    ACTIONS(263), 1,
      anon_sym_SLASH_SLASH,
    STATE(103), 1,
      sym_dots,
    STATE(49), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1559] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(14), 1,
      sym_rule_line,
    STATE(52), 1,
      aux_sym_rule_line_repeat1,
    STATE(85), 1,
      sym_element,
    STATE(88), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1586] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LT_SLASH,
    ACTIONS(228), 1,
      sym_string,
    ACTIONS(265), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      sym_dots,
    STATE(69), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(226), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1611] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      anon_sym_grammar,
    ACTIONS(272), 1,
      anon_sym_embed,
    ACTIONS(275), 1,
      anon_sym_defns,
    ACTIONS(278), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(56), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1636] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LT_SLASH,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(287), 1,
      sym_hom_inner_string,
    STATE(124), 1,
      sym_dots,
    STATE(192), 1,
      sym__hom_inner,
    ACTIONS(283), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(73), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [1663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    STATE(66), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(289), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1682] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LT_SLASH,
    ACTIONS(294), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(299), 1,
      sym_string,
    STATE(103), 1,
      sym_dots,
    STATE(59), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(296), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1724] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(238), 1,
      sym_string,
    ACTIONS(302), 1,
      anon_sym_SLASH_SLASH,
    STATE(103), 1,
      sym_dots,
    STATE(59), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(304), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1783] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LT_SLASH,
    ACTIONS(228), 1,
      sym_string,
    ACTIONS(308), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      sym_dots,
    STATE(55), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(226), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    STATE(66), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(310), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_defn,
    STATE(66), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(312), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1846] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(238), 1,
      sym_string,
    ACTIONS(317), 1,
      anon_sym_SLASH_SLASH,
    STATE(103), 1,
      sym_dots,
    STATE(68), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1871] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(238), 1,
      sym_string,
    ACTIONS(319), 1,
      anon_sym_SLASH_SLASH,
    STATE(103), 1,
      sym_dots,
    STATE(59), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1896] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COLON_COLON,
    ACTIONS(321), 1,
      anon_sym_LT_SLASH,
    ACTIONS(327), 1,
      sym_string,
    STATE(77), 1,
      sym_dots,
    STATE(69), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(324), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1921] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LT_SLASH,
    ACTIONS(228), 1,
      sym_string,
    ACTIONS(330), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      sym_dots,
    STATE(69), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(226), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1946] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(56), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_hom_inner_string,
    ACTIONS(336), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
    ACTIONS(334), 3,
      anon_sym_SLASH_SLASH,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [1991] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(341), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(343), 1,
      sym_hom_inner_string,
    STATE(108), 1,
      sym_dots,
    ACTIONS(283), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(347), 1,
      anon_sym_COLON_COLON,
    ACTIONS(349), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2069] = 3,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LF,
    ACTIONS(357), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2095] = 3,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(345), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2121] = 3,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(363), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2135] = 3,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(367), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2149] = 3,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(371), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2163] = 3,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(377), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2203] = 3,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(353), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2217] = 3,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(351), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(355), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(80), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(385), 1,
      anon_sym_COLON_COLON,
    ACTIONS(387), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(75), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(389), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(393), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(397), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(401), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2441] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_SLASH_GT,
    ACTIONS(409), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(204), 1,
      sym_dots,
    ACTIONS(407), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(415), 1,
      sym_hom_inner_string,
    STATE(110), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_hom_inner_string,
    ACTIONS(413), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_hom_inner_string,
    ACTIONS(417), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COLON_COLON,
    ACTIONS(421), 1,
      sym_id,
    STATE(113), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON_COLON,
    ACTIONS(425), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym__id_desc_list1_repeat1,
  [2541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COLON_COLON,
    ACTIONS(431), 1,
      sym_id,
    STATE(113), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_COLON_COLON,
    ACTIONS(436), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(112), 1,
      aux_sym__id_desc_list1_repeat1,
  [2571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(438), 1,
      anon_sym_by,
    STATE(118), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COLON_COLON,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym__id_desc_list1_repeat1,
  [2601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_id,
    ACTIONS(447), 1,
      anon_sym_COLON_COLON,
    STATE(126), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(449), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(451), 1,
      anon_sym_by,
    STATE(122), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(81), 1,
      sym_embed,
    STATE(48), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_hom_inner_string,
    ACTIONS(453), 1,
      anon_sym_SLASH_SLASH,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(455), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_id,
    ACTIONS(457), 1,
      anon_sym_COLON_COLON,
    STATE(111), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(459), 1,
      sym_hom_inner_string,
    STATE(109), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(463), 1,
      sym_hom_inner_string,
    STATE(121), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_id,
    ACTIONS(465), 1,
      anon_sym_COLON_COLON,
    STATE(113), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(469), 1,
      sym_string,
    STATE(188), 1,
      sym_comprehension_bound,
  [2754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SQUOTE,
    ACTIONS(473), 1,
      sym_id,
    STATE(199), 1,
      sym_namespace_prefix,
  [2767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_tex,
    ACTIONS(481), 1,
      anon_sym_tex_DASHpreamble,
    STATE(39), 1,
      sym_hom_name,
  [2798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SQUOTE,
    ACTIONS(473), 1,
      sym_id,
    STATE(119), 1,
      sym_namespace_prefix,
  [2811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_tex,
    ACTIONS(481), 1,
      anon_sym_tex_DASHpreamble,
    STATE(26), 1,
      sym_hom_name,
  [2824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(483), 1,
      sym_string,
    STATE(194), 1,
      sym_comprehension_bound,
  [2837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(485), 1,
      sym_string,
    STATE(173), 1,
      sym_comprehension_bound,
  [2850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(487), 1,
      sym_string,
    STATE(193), 1,
      sym_comprehension_bound,
  [2863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SQUOTE,
    ACTIONS(473), 1,
      sym_id,
    STATE(115), 1,
      sym_namespace_prefix,
  [2876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SQUOTE,
    ACTIONS(473), 1,
      sym_id,
    STATE(198), 1,
      sym_namespace_prefix,
  [2889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(489), 1,
      sym_string,
    STATE(189), 1,
      sym_comprehension_bound,
  [2902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(491), 1,
      sym_string,
    STATE(190), 1,
      sym_comprehension_bound,
  [2915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_id,
    STATE(114), 1,
      sym_id_desc,
    STATE(206), 1,
      sym__id_desc_list1,
  [2937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COLON_COLON,
    ACTIONS(442), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_id,
    STATE(81), 1,
      sym_defnclass,
    STATE(207), 1,
      sym_defnclass_name,
  [2961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_id,
    STATE(180), 1,
      sym_defn_name,
  [2971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_id,
    STATE(25), 1,
      sym_production_name,
  [2981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_id,
    STATE(196), 1,
      sym_comprehension_bound,
  [2991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_id,
    STATE(195), 1,
      sym_comprehension_bound,
  [3001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_id,
    STATE(167), 1,
      sym_comprehension_bound,
  [3011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_id,
    STATE(181), 1,
      sym_rule_name,
  [3021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_id,
    STATE(22), 1,
      sym_production_name,
  [3031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_id,
    STATE(143), 1,
      sym_id_desc,
  [3041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_SQUOTE,
    ACTIONS(509), 1,
      sym_id,
  [3051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_id,
    STATE(191), 1,
      sym_comprehension_bound,
  [3061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_id,
    STATE(166), 1,
      sym_comprehension_bound,
  [3071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_id,
    STATE(185), 1,
      sym_comprehension_bound,
  [3081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SLASH_GT,
    ACTIONS(513), 1,
      anon_sym_IN,
  [3091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_id,
    STATE(177), 1,
      sym_comprehension_bound,
  [3101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_id,
    STATE(29), 1,
      sym_production_name,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_COLON_COLON,
      sym_id,
  [3119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_id,
    STATE(170), 1,
      sym_defn_name,
  [3129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 2,
      sym_hom_inner_string,
      anon_sym_RBRACK_RBRACK,
  [3137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_id,
    STATE(165), 1,
      sym_comprehension_bound,
  [3147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_id,
    STATE(23), 1,
      sym_production_name,
  [3157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_SLASH_GT,
  [3164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SLASH_GT,
  [3171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_SLASH_GT,
  [3178] = 2,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LF,
  [3185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
  [3192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_COLON_COLON,
  [3199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_COLON_COLON,
  [3206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RBRACK_RBRACK,
  [3213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SLASH_GT,
  [3220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_SLASH_SLASH,
  [3227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COLON_COLON,
  [3234] = 2,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LF,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_SLASH_GT,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RBRACK_RBRACK,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_id,
  [3262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_COLON_COLON,
  [3269] = 2,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_LF,
  [3276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COLON_COLON,
  [3283] = 2,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LF,
  [3290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_id,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SLASH_GT,
  [3304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON_COLON,
  [3311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SLASH_SLASH,
  [3318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SLASH_GT,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SLASH_GT,
  [3332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SLASH_GT,
  [3339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH_GT,
  [3346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RBRACK_RBRACK,
  [3353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SLASH_GT,
  [3360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SLASH_GT,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SLASH_GT,
  [3374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_SLASH_GT,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
  [3388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COLON_COLON_EQ,
  [3395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_COLON_COLON_EQ,
  [3402] = 2,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(585), 1,
      aux_sym_dash_line_token1,
  [3409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH_GT,
  [3416] = 2,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LF,
  [3423] = 2,
    ACTIONS(245), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LF,
  [3430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_id,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
  [3444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COLON_COLON_EQ,
  [3451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_COLON_COLON,
  [3458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SLASH_SLASH,
  [3465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SLASH_SLASH,
  [3472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
  [3479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_COLON_COLON,
  [3486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SLASH_SLASH,
  [3493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 312,
  [SMALL_STATE(9)] = 364,
  [SMALL_STATE(10)] = 416,
  [SMALL_STATE(11)] = 468,
  [SMALL_STATE(12)] = 494,
  [SMALL_STATE(13)] = 515,
  [SMALL_STATE(14)] = 536,
  [SMALL_STATE(15)] = 557,
  [SMALL_STATE(16)] = 594,
  [SMALL_STATE(17)] = 623,
  [SMALL_STATE(18)] = 652,
  [SMALL_STATE(19)] = 678,
  [SMALL_STATE(20)] = 704,
  [SMALL_STATE(21)] = 724,
  [SMALL_STATE(22)] = 744,
  [SMALL_STATE(23)] = 767,
  [SMALL_STATE(24)] = 790,
  [SMALL_STATE(25)] = 817,
  [SMALL_STATE(26)] = 840,
  [SMALL_STATE(27)] = 873,
  [SMALL_STATE(28)] = 896,
  [SMALL_STATE(29)] = 919,
  [SMALL_STATE(30)] = 942,
  [SMALL_STATE(31)] = 975,
  [SMALL_STATE(32)] = 1002,
  [SMALL_STATE(33)] = 1025,
  [SMALL_STATE(34)] = 1058,
  [SMALL_STATE(35)] = 1081,
  [SMALL_STATE(36)] = 1108,
  [SMALL_STATE(37)] = 1131,
  [SMALL_STATE(38)] = 1162,
  [SMALL_STATE(39)] = 1195,
  [SMALL_STATE(40)] = 1228,
  [SMALL_STATE(41)] = 1250,
  [SMALL_STATE(42)] = 1272,
  [SMALL_STATE(43)] = 1294,
  [SMALL_STATE(44)] = 1319,
  [SMALL_STATE(45)] = 1338,
  [SMALL_STATE(46)] = 1363,
  [SMALL_STATE(47)] = 1390,
  [SMALL_STATE(48)] = 1417,
  [SMALL_STATE(49)] = 1436,
  [SMALL_STATE(50)] = 1461,
  [SMALL_STATE(51)] = 1480,
  [SMALL_STATE(52)] = 1507,
  [SMALL_STATE(53)] = 1534,
  [SMALL_STATE(54)] = 1559,
  [SMALL_STATE(55)] = 1586,
  [SMALL_STATE(56)] = 1611,
  [SMALL_STATE(57)] = 1636,
  [SMALL_STATE(58)] = 1663,
  [SMALL_STATE(59)] = 1682,
  [SMALL_STATE(60)] = 1707,
  [SMALL_STATE(61)] = 1724,
  [SMALL_STATE(62)] = 1749,
  [SMALL_STATE(63)] = 1766,
  [SMALL_STATE(64)] = 1783,
  [SMALL_STATE(65)] = 1808,
  [SMALL_STATE(66)] = 1827,
  [SMALL_STATE(67)] = 1846,
  [SMALL_STATE(68)] = 1871,
  [SMALL_STATE(69)] = 1896,
  [SMALL_STATE(70)] = 1921,
  [SMALL_STATE(71)] = 1946,
  [SMALL_STATE(72)] = 1971,
  [SMALL_STATE(73)] = 1991,
  [SMALL_STATE(74)] = 2015,
  [SMALL_STATE(75)] = 2027,
  [SMALL_STATE(76)] = 2045,
  [SMALL_STATE(77)] = 2057,
  [SMALL_STATE(78)] = 2069,
  [SMALL_STATE(79)] = 2083,
  [SMALL_STATE(80)] = 2095,
  [SMALL_STATE(81)] = 2109,
  [SMALL_STATE(82)] = 2121,
  [SMALL_STATE(83)] = 2135,
  [SMALL_STATE(84)] = 2149,
  [SMALL_STATE(85)] = 2163,
  [SMALL_STATE(86)] = 2177,
  [SMALL_STATE(87)] = 2191,
  [SMALL_STATE(88)] = 2203,
  [SMALL_STATE(89)] = 2217,
  [SMALL_STATE(90)] = 2231,
  [SMALL_STATE(91)] = 2243,
  [SMALL_STATE(92)] = 2255,
  [SMALL_STATE(93)] = 2267,
  [SMALL_STATE(94)] = 2279,
  [SMALL_STATE(95)] = 2293,
  [SMALL_STATE(96)] = 2305,
  [SMALL_STATE(97)] = 2319,
  [SMALL_STATE(98)] = 2331,
  [SMALL_STATE(99)] = 2343,
  [SMALL_STATE(100)] = 2361,
  [SMALL_STATE(101)] = 2375,
  [SMALL_STATE(102)] = 2389,
  [SMALL_STATE(103)] = 2403,
  [SMALL_STATE(104)] = 2415,
  [SMALL_STATE(105)] = 2427,
  [SMALL_STATE(106)] = 2441,
  [SMALL_STATE(107)] = 2458,
  [SMALL_STATE(108)] = 2469,
  [SMALL_STATE(109)] = 2483,
  [SMALL_STATE(110)] = 2497,
  [SMALL_STATE(111)] = 2511,
  [SMALL_STATE(112)] = 2525,
  [SMALL_STATE(113)] = 2541,
  [SMALL_STATE(114)] = 2555,
  [SMALL_STATE(115)] = 2571,
  [SMALL_STATE(116)] = 2585,
  [SMALL_STATE(117)] = 2601,
  [SMALL_STATE(118)] = 2615,
  [SMALL_STATE(119)] = 2629,
  [SMALL_STATE(120)] = 2643,
  [SMALL_STATE(121)] = 2657,
  [SMALL_STATE(122)] = 2671,
  [SMALL_STATE(123)] = 2685,
  [SMALL_STATE(124)] = 2699,
  [SMALL_STATE(125)] = 2713,
  [SMALL_STATE(126)] = 2727,
  [SMALL_STATE(127)] = 2741,
  [SMALL_STATE(128)] = 2754,
  [SMALL_STATE(129)] = 2767,
  [SMALL_STATE(130)] = 2776,
  [SMALL_STATE(131)] = 2785,
  [SMALL_STATE(132)] = 2798,
  [SMALL_STATE(133)] = 2811,
  [SMALL_STATE(134)] = 2824,
  [SMALL_STATE(135)] = 2837,
  [SMALL_STATE(136)] = 2850,
  [SMALL_STATE(137)] = 2863,
  [SMALL_STATE(138)] = 2876,
  [SMALL_STATE(139)] = 2889,
  [SMALL_STATE(140)] = 2902,
  [SMALL_STATE(141)] = 2915,
  [SMALL_STATE(142)] = 2924,
  [SMALL_STATE(143)] = 2937,
  [SMALL_STATE(144)] = 2948,
  [SMALL_STATE(145)] = 2961,
  [SMALL_STATE(146)] = 2971,
  [SMALL_STATE(147)] = 2981,
  [SMALL_STATE(148)] = 2991,
  [SMALL_STATE(149)] = 3001,
  [SMALL_STATE(150)] = 3011,
  [SMALL_STATE(151)] = 3021,
  [SMALL_STATE(152)] = 3031,
  [SMALL_STATE(153)] = 3041,
  [SMALL_STATE(154)] = 3051,
  [SMALL_STATE(155)] = 3061,
  [SMALL_STATE(156)] = 3071,
  [SMALL_STATE(157)] = 3081,
  [SMALL_STATE(158)] = 3091,
  [SMALL_STATE(159)] = 3101,
  [SMALL_STATE(160)] = 3111,
  [SMALL_STATE(161)] = 3119,
  [SMALL_STATE(162)] = 3129,
  [SMALL_STATE(163)] = 3137,
  [SMALL_STATE(164)] = 3147,
  [SMALL_STATE(165)] = 3157,
  [SMALL_STATE(166)] = 3164,
  [SMALL_STATE(167)] = 3171,
  [SMALL_STATE(168)] = 3178,
  [SMALL_STATE(169)] = 3185,
  [SMALL_STATE(170)] = 3192,
  [SMALL_STATE(171)] = 3199,
  [SMALL_STATE(172)] = 3206,
  [SMALL_STATE(173)] = 3213,
  [SMALL_STATE(174)] = 3220,
  [SMALL_STATE(175)] = 3227,
  [SMALL_STATE(176)] = 3234,
  [SMALL_STATE(177)] = 3241,
  [SMALL_STATE(178)] = 3248,
  [SMALL_STATE(179)] = 3255,
  [SMALL_STATE(180)] = 3262,
  [SMALL_STATE(181)] = 3269,
  [SMALL_STATE(182)] = 3276,
  [SMALL_STATE(183)] = 3283,
  [SMALL_STATE(184)] = 3290,
  [SMALL_STATE(185)] = 3297,
  [SMALL_STATE(186)] = 3304,
  [SMALL_STATE(187)] = 3311,
  [SMALL_STATE(188)] = 3318,
  [SMALL_STATE(189)] = 3325,
  [SMALL_STATE(190)] = 3332,
  [SMALL_STATE(191)] = 3339,
  [SMALL_STATE(192)] = 3346,
  [SMALL_STATE(193)] = 3353,
  [SMALL_STATE(194)] = 3360,
  [SMALL_STATE(195)] = 3367,
  [SMALL_STATE(196)] = 3374,
  [SMALL_STATE(197)] = 3381,
  [SMALL_STATE(198)] = 3388,
  [SMALL_STATE(199)] = 3395,
  [SMALL_STATE(200)] = 3402,
  [SMALL_STATE(201)] = 3409,
  [SMALL_STATE(202)] = 3416,
  [SMALL_STATE(203)] = 3423,
  [SMALL_STATE(204)] = 3430,
  [SMALL_STATE(205)] = 3437,
  [SMALL_STATE(206)] = 3444,
  [SMALL_STATE(207)] = 3451,
  [SMALL_STATE(208)] = 3458,
  [SMALL_STATE(209)] = 3465,
  [SMALL_STATE(210)] = 3472,
  [SMALL_STATE(211)] = 3479,
  [SMALL_STATE(212)] = 3486,
  [SMALL_STATE(213)] = 3493,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 29),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 37),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 37),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 26),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 26),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 34),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 34),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 33),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 33),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 32),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 32),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 28),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 28),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(200),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(45),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(89),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 30),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 30),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 36),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 36),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 31),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 31),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 11),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 9),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 3, 0, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 3, 0, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 7),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 24),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 24),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 21),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 21),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 20),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 20),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 19),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 19),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 17),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 17),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 22),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 22),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(57),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(94),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(94),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(100),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 23),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 23),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 25),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 25),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 14),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 16),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 16),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 12),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(64),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 13),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 27),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 27),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 5),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 13),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 6),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 6),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_name, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_name, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 38),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 10),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 15),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [525] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 18),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 5, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 4, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 35),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_hom_string = 0,
  ts_external_token_hom_inner_string = 1,
  ts_external_token_error_sentinel = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_hom_string] = sym_hom_string,
  [ts_external_token_hom_inner_string] = sym_hom_inner_string,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_hom_string] = true,
    [ts_external_token_hom_inner_string] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_hom_string] = true,
  },
  [3] = {
    [ts_external_token_hom_inner_string] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_ott_external_scanner_create(void);
void tree_sitter_ott_external_scanner_destroy(void *);
bool tree_sitter_ott_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ott_external_scanner_serialize(void *, char *);
void tree_sitter_ott_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ott(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_ott_external_scanner_create,
      tree_sitter_ott_external_scanner_destroy,
      tree_sitter_ott_external_scanner_scan,
      tree_sitter_ott_external_scanner_serialize,
      tree_sitter_ott_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
