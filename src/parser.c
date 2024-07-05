#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 5
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 35

enum ts_symbol_identifiers {
  anon_sym_grammar = 1,
  anon_sym_embed = 2,
  anon_sym_defns = 3,
  anon_sym_COLON_COLON = 4,
  anon_sym_COLON_COLON_EQ = 5,
  anon_sym_defn = 6,
  anon_sym_by = 7,
  anon_sym_DASH_DASH_DASH_DASH = 8,
  aux_sym_dash_line_token1 = 9,
  anon_sym_PIPE = 10,
  aux_sym_production_mod_token1 = 11,
  anon_sym_LT_SLASH = 12,
  anon_sym_SLASH_SLASH = 13,
  anon_sym_SLASH_GT = 14,
  anon_sym_metavar = 15,
  anon_sym_indexvar = 16,
  anon_sym_COMMA = 17,
  anon_sym_LBRACE_LBRACE = 18,
  anon_sym_RBRACE_RBRACE = 19,
  sym_hom_name = 20,
  anon_sym_LBRACK_LBRACK = 21,
  anon_sym_RBRACK_RBRACK = 22,
  anon_sym_IN = 23,
  anon_sym_SQUOTE = 24,
  sym__namespace_prefix_string = 25,
  anon_sym_DOT_DOT = 26,
  anon_sym_DOT_DOT_DOT = 27,
  anon_sym_DOT_DOT_DOT_DOT = 28,
  sym_comment = 29,
  sym_string = 30,
  sym__whitespace = 31,
  aux_sym__line_end_token1 = 32,
  sym_line_cont = 33,
  sym__eof = 34,
  sym_hom_string = 35,
  sym_hom_inner_string_init = 36,
  sym_hom_inner_string_left = 37,
  sym_hom_inner_string_right = 38,
  sym_hom_inner_comp_left = 39,
  sym_error_sentinel = 40,
  sym_source_file = 41,
  sym__item = 42,
  sym_defnclass = 43,
  sym_defnclass_name = 44,
  sym_defn = 45,
  sym_defn_name = 46,
  sym_defn_rule = 47,
  sym_rule_separator = 48,
  sym_rule_name = 49,
  sym_dash_line = 50,
  sym_rule_line = 51,
  sym_grammar_rule = 52,
  sym_production = 53,
  sym_production_mod = 54,
  sym_production_name = 55,
  sym__element = 56,
  sym_metavardefn = 57,
  sym__string_desc_list1 = 58,
  sym_string_desc = 59,
  sym_embed = 60,
  sym_homomorphism = 61,
  sym__hom_element = 62,
  sym_hom_inner_block = 63,
  sym__hom_inner = 64,
  sym_comprehension_bound = 65,
  sym__comprehension_string = 66,
  sym_namespace_prefix = 67,
  sym_dots = 68,
  sym_id = 69,
  sym__line_cont = 70,
  sym__line_end = 71,
  sym__hom_string = 72,
  sym__hom_inner_string_init = 73,
  sym__hom_inner_string_left = 74,
  sym__hom_inner_string_right = 75,
  sym__hom_inner_comp_left = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym__item_repeat1 = 78,
  aux_sym_defnclass_repeat1 = 79,
  aux_sym_defnclass_repeat2 = 80,
  aux_sym_defn_repeat1 = 81,
  aux_sym_defn_repeat2 = 82,
  aux_sym_defn_rule_repeat1 = 83,
  aux_sym_grammar_rule_repeat1 = 84,
  aux_sym_production_repeat1 = 85,
  aux_sym__string_desc_list1_repeat1 = 86,
  aux_sym_homomorphism_repeat1 = 87,
  aux_sym__hom_inner_repeat1 = 88,
  aux_sym__hom_inner_repeat2 = 89,
  aux_sym__hom_inner_repeat3 = 90,
  anon_alias_sym_defn_name = 91,
  alias_sym_hom_body = 92,
  anon_alias_sym_production_modifier = 93,
  anon_alias_sym_production_name = 94,
  anon_alias_sym_rule_name = 95,
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
  [anon_sym_DASH_DASH_DASH_DASH] = "----",
  [aux_sym_dash_line_token1] = "dash_line_token1",
  [anon_sym_PIPE] = "|",
  [aux_sym_production_mod_token1] = "production_mod_token1",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_metavar] = "metavar",
  [anon_sym_indexvar] = "indexvar",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_hom_name] = "hom_name",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_IN] = "IN",
  [anon_sym_SQUOTE] = "'",
  [sym__namespace_prefix_string] = "_namespace_prefix_string",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DOT_DOT_DOT_DOT] = "....",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym__whitespace] = "_whitespace",
  [aux_sym__line_end_token1] = "_line_end_token1",
  [sym_line_cont] = "line_cont",
  [sym__eof] = "_eof",
  [sym_hom_string] = "hom_string",
  [sym_hom_inner_string_init] = "string",
  [sym_hom_inner_string_left] = "string",
  [sym_hom_inner_string_right] = "string",
  [sym_hom_inner_comp_left] = "string",
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
  [sym__element] = "_element",
  [sym_metavardefn] = "metavardefn",
  [sym__string_desc_list1] = "_string_desc_list1",
  [sym_string_desc] = "string_desc",
  [sym_embed] = "embed",
  [sym_homomorphism] = "homomorphism",
  [sym__hom_element] = "_hom_element",
  [sym_hom_inner_block] = "hom_inner_block",
  [sym__hom_inner] = "_hom_inner",
  [sym_comprehension_bound] = "comprehension_bound",
  [sym__comprehension_string] = "_comprehension_string",
  [sym_namespace_prefix] = "namespace_prefix",
  [sym_dots] = "dots",
  [sym_id] = "defnclass_name",
  [sym__line_cont] = "_line_cont",
  [sym__line_end] = "_line_end",
  [sym__hom_string] = "_hom_string",
  [sym__hom_inner_string_init] = "_hom_inner_string_init",
  [sym__hom_inner_string_left] = "_hom_inner_string_left",
  [sym__hom_inner_string_right] = "_hom_inner_string_right",
  [sym__hom_inner_comp_left] = "_hom_inner_comp_left",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__item_repeat1] = "_item_repeat1",
  [aux_sym_defnclass_repeat1] = "defnclass_repeat1",
  [aux_sym_defnclass_repeat2] = "defnclass_repeat2",
  [aux_sym_defn_repeat1] = "defn_repeat1",
  [aux_sym_defn_repeat2] = "defn_repeat2",
  [aux_sym_defn_rule_repeat1] = "defn_rule_repeat1",
  [aux_sym_grammar_rule_repeat1] = "grammar_rule_repeat1",
  [aux_sym_production_repeat1] = "production_repeat1",
  [aux_sym__string_desc_list1_repeat1] = "_string_desc_list1_repeat1",
  [aux_sym_homomorphism_repeat1] = "homomorphism_repeat1",
  [aux_sym__hom_inner_repeat1] = "_hom_inner_repeat1",
  [aux_sym__hom_inner_repeat2] = "_hom_inner_repeat2",
  [aux_sym__hom_inner_repeat3] = "_hom_inner_repeat3",
  [anon_alias_sym_defn_name] = "defn_name",
  [alias_sym_hom_body] = "hom_body",
  [anon_alias_sym_production_modifier] = "production_modifier",
  [anon_alias_sym_production_name] = "production_name",
  [anon_alias_sym_rule_name] = "rule_name",
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
  [anon_sym_DASH_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH_DASH,
  [aux_sym_dash_line_token1] = aux_sym_dash_line_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_production_mod_token1] = aux_sym_production_mod_token1,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_metavar] = anon_sym_metavar,
  [anon_sym_indexvar] = anon_sym_indexvar,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_hom_name] = sym_hom_name,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__namespace_prefix_string] = sym__namespace_prefix_string,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT_DOT,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym__whitespace] = sym__whitespace,
  [aux_sym__line_end_token1] = aux_sym__line_end_token1,
  [sym_line_cont] = sym_line_cont,
  [sym__eof] = sym__eof,
  [sym_hom_string] = sym_hom_string,
  [sym_hom_inner_string_init] = sym_string,
  [sym_hom_inner_string_left] = sym_string,
  [sym_hom_inner_string_right] = sym_string,
  [sym_hom_inner_comp_left] = sym_string,
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
  [sym__element] = sym__element,
  [sym_metavardefn] = sym_metavardefn,
  [sym__string_desc_list1] = sym__string_desc_list1,
  [sym_string_desc] = sym_string_desc,
  [sym_embed] = sym_embed,
  [sym_homomorphism] = sym_homomorphism,
  [sym__hom_element] = sym__hom_element,
  [sym_hom_inner_block] = sym_hom_inner_block,
  [sym__hom_inner] = sym__hom_inner,
  [sym_comprehension_bound] = sym_comprehension_bound,
  [sym__comprehension_string] = sym__comprehension_string,
  [sym_namespace_prefix] = sym_namespace_prefix,
  [sym_dots] = sym_dots,
  [sym_id] = sym_id,
  [sym__line_cont] = sym__line_cont,
  [sym__line_end] = sym__line_end,
  [sym__hom_string] = sym__hom_string,
  [sym__hom_inner_string_init] = sym__hom_inner_string_init,
  [sym__hom_inner_string_left] = sym__hom_inner_string_left,
  [sym__hom_inner_string_right] = sym__hom_inner_string_right,
  [sym__hom_inner_comp_left] = sym__hom_inner_comp_left,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__item_repeat1] = aux_sym__item_repeat1,
  [aux_sym_defnclass_repeat1] = aux_sym_defnclass_repeat1,
  [aux_sym_defnclass_repeat2] = aux_sym_defnclass_repeat2,
  [aux_sym_defn_repeat1] = aux_sym_defn_repeat1,
  [aux_sym_defn_repeat2] = aux_sym_defn_repeat2,
  [aux_sym_defn_rule_repeat1] = aux_sym_defn_rule_repeat1,
  [aux_sym_grammar_rule_repeat1] = aux_sym_grammar_rule_repeat1,
  [aux_sym_production_repeat1] = aux_sym_production_repeat1,
  [aux_sym__string_desc_list1_repeat1] = aux_sym__string_desc_list1_repeat1,
  [aux_sym_homomorphism_repeat1] = aux_sym_homomorphism_repeat1,
  [aux_sym__hom_inner_repeat1] = aux_sym__hom_inner_repeat1,
  [aux_sym__hom_inner_repeat2] = aux_sym__hom_inner_repeat2,
  [aux_sym__hom_inner_repeat3] = aux_sym__hom_inner_repeat3,
  [anon_alias_sym_defn_name] = anon_alias_sym_defn_name,
  [alias_sym_hom_body] = alias_sym_hom_body,
  [anon_alias_sym_production_modifier] = anon_alias_sym_production_modifier,
  [anon_alias_sym_production_name] = anon_alias_sym_production_name,
  [anon_alias_sym_rule_name] = anon_alias_sym_rule_name,
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
  [aux_sym_production_mod_token1] = {
    .visible = false,
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_hom_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__namespace_prefix_string] = {
    .visible = false,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_end_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_line_cont] = {
    .visible = true,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_hom_string] = {
    .visible = true,
    .named = false,
  },
  [sym_hom_inner_string_init] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_inner_string_left] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_inner_string_right] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_inner_comp_left] = {
    .visible = true,
    .named = true,
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
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_metavardefn] = {
    .visible = true,
    .named = true,
  },
  [sym__string_desc_list1] = {
    .visible = false,
    .named = true,
  },
  [sym_string_desc] = {
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
  [sym_comprehension_bound] = {
    .visible = true,
    .named = true,
  },
  [sym__comprehension_string] = {
    .visible = false,
    .named = true,
  },
  [sym_namespace_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_dots] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = false,
  },
  [sym__line_cont] = {
    .visible = false,
    .named = true,
  },
  [sym__line_end] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_string] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_string_init] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_string_left] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_string_right] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_comp_left] = {
    .visible = false,
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
  [aux_sym_grammar_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_production_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_desc_list1_repeat1] = {
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
  [aux_sym__hom_inner_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hom_inner_repeat3] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_defn_name] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_hom_body] = {
    .visible = true,
    .named = true,
  },
  [anon_alias_sym_production_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_production_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_rule_name] = {
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
  [2] = {.index = 0, .length = 3},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 6},
  [8] = {.index = 15, .length = 4},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 3},
  [11] = {.index = 25, .length = 4},
  [13] = {.index = 29, .length = 1},
  [15] = {.index = 30, .length = 2},
  [16] = {.index = 32, .length = 2},
  [17] = {.index = 34, .length = 2},
  [19] = {.index = 36, .length = 3},
  [20] = {.index = 39, .length = 3},
  [21] = {.index = 42, .length = 3},
  [22] = {.index = 45, .length = 4},
  [23] = {.index = 49, .length = 2},
  [24] = {.index = 51, .length = 3},
  [25] = {.index = 54, .length = 3},
  [26] = {.index = 57, .length = 3},
  [27] = {.index = 60, .length = 2},
  [28] = {.index = 62, .length = 4},
  [29] = {.index = 66, .length = 4},
  [30] = {.index = 70, .length = 4},
  [31] = {.index = 74, .length = 3},
  [32] = {.index = 77, .length = 5},
  [34] = {.index = 82, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 3},
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
    {field_class_name, 0},
    {field_namespace_prefix, 2},
  [9] =
    {field_body, 3},
    {field_close, 4},
    {field_hom_inner_block, 3, .inherited = true},
    {field_hom_string, 3, .inherited = true},
    {field_name, 1},
    {field_open, 0},
  [15] =
    {field_hom_inner_block, 0, .inherited = true},
    {field_hom_inner_block, 1, .inherited = true},
    {field_hom_string, 0, .inherited = true},
    {field_hom_string, 1, .inherited = true},
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
    {field_definition_name, 4},
    {field_namespace_prefix, 6},
  [51] =
    {field_definition_name, 4},
    {field_definition_rule, 9},
    {field_namespace_prefix, 6},
  [54] =
    {field_definition_name, 4},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [57] =
    {field_definition_name, 5},
    {field_element, 2},
    {field_namespace_prefix, 7},
  [60] =
    {field_conclusion, 1},
    {field_separator, 0},
  [62] =
    {field_definition_name, 4},
    {field_definition_rule, 10},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [66] =
    {field_definition_name, 5},
    {field_definition_rule, 10},
    {field_element, 2},
    {field_namespace_prefix, 7},
  [70] =
    {field_definition_name, 5},
    {field_element, 2},
    {field_homomorphism, 8},
    {field_namespace_prefix, 7},
  [74] =
    {field_conclusion, 2},
    {field_premise, 0},
    {field_separator, 1},
  [77] =
    {field_definition_name, 5},
    {field_definition_rule, 11},
    {field_element, 2},
    {field_homomorphism, 8},
    {field_namespace_prefix, 7},
  [82] =
    {field_line, 0},
    {field_rule_name, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_string,
  },
  [7] = {
    [3] = alias_sym_hom_body,
  },
  [12] = {
    [0] = anon_alias_sym_production_modifier,
  },
  [14] = {
    [0] = anon_alias_sym_production_name,
  },
  [18] = {
    [0] = anon_alias_sym_defn_name,
  },
  [33] = {
    [0] = anon_alias_sym_rule_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_id, 4,
    sym_id,
    anon_alias_sym_defn_name,
    anon_alias_sym_production_name,
    anon_alias_sym_rule_name,
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 27,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 33,
  [39] = 34,
  [40] = 11,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 19,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 51,
  [56] = 56,
  [57] = 42,
  [58] = 58,
  [59] = 18,
  [60] = 42,
  [61] = 52,
  [62] = 52,
  [63] = 63,
  [64] = 64,
  [65] = 51,
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
  [80] = 77,
  [81] = 76,
  [82] = 82,
  [83] = 77,
  [84] = 84,
  [85] = 76,
  [86] = 76,
  [87] = 87,
  [88] = 78,
  [89] = 78,
  [90] = 90,
  [91] = 74,
  [92] = 92,
  [93] = 93,
  [94] = 74,
  [95] = 95,
  [96] = 15,
  [97] = 79,
  [98] = 79,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 105,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 102,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 105,
  [119] = 119,
  [120] = 102,
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
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 129,
  [146] = 138,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 129,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 138,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 45,
  [168] = 168,
  [169] = 169,
  [170] = 76,
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
  [184] = 184,
  [185] = 76,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 171,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 180,
  [199] = 171,
  [200] = 196,
  [201] = 197,
  [202] = 180,
  [203] = 192,
  [204] = 197,
  [205] = 205,
  [206] = 196,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 193,
  [213] = 213,
  [214] = 214,
  [215] = 189,
  [216] = 207,
  [217] = 217,
  [218] = 218,
  [219] = 189,
  [220] = 207,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '%', 126,
        '\'', 117,
        ',', 110,
        '-', 14,
        '.', 15,
        '/', 16,
        ':', 18,
        '<', 17,
        'I', 22,
        '[', 23,
        ']', 24,
        'b', 51,
        'd', 33,
        'e', 38,
        'g', 43,
        'i', 41,
        'm', 34,
        '{', 52,
        '|', 69,
        '}', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 162,
        '\r', 1,
        '%', 125,
        '.', 130,
        '<', 131,
        '\t', 1,
        0x0b, 1,
        '\f', 1,
        ' ', 1,
      );
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == ':') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == ':') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == '{') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(125);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '<') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(125);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '<') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(125);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == '<') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(125);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '<') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(119);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '>') ADVANCE(103);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(99);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 23:
      if (lookahead == '[') ADVANCE(114);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == '{') ADVANCE(111);
      END_STATE();
    case 53:
      if (lookahead == '}') ADVANCE(112);
      END_STATE();
    case 54:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '%', 126,
        ',', 110,
        ':', 18,
        'd', 78,
        'e', 83,
        'g', 89,
        'i', 86,
        'm', 79,
        '{', 52,
        '|', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '%', 126,
        ':', 19,
        'd', 78,
        'e', 83,
        'g', 89,
        'i', 86,
        'm', 79,
        '{', 52,
        '|', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '%', 125,
        '-', 129,
        '.', 130,
        '<', 131,
        'd', 142,
        'e', 147,
        'g', 153,
        'i', 151,
        'm', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'b') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'd') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'd') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'f') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'n') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'v') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'v') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'x') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_hom_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__namespace_prefix_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'x') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__line_end_token1);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 54},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 54},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 3},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 54},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 54},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 54},
  [44] = {.lex_state = 54},
  [45] = {.lex_state = 55},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 1, .external_lex_state = 3},
  [75] = {.lex_state = 0, .external_lex_state = 4},
  [76] = {.lex_state = 1, .external_lex_state = 3},
  [77] = {.lex_state = 1, .external_lex_state = 3},
  [78] = {.lex_state = 1, .external_lex_state = 3},
  [79] = {.lex_state = 1, .external_lex_state = 3},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 0, .external_lex_state = 5},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 6},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 0, .external_lex_state = 7},
  [112] = {.lex_state = 0, .external_lex_state = 7},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0, .external_lex_state = 6},
  [127] = {.lex_state = 0, .external_lex_state = 7},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 1, .external_lex_state = 3},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 7},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 1, .external_lex_state = 3},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 1, .external_lex_state = 3},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 1, .external_lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 1, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 7},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 1, .external_lex_state = 3},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 8},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 1, .external_lex_state = 3},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0, .external_lex_state = 8},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 0, .external_lex_state = 8},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 55},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 68},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 55},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 0, .external_lex_state = 7},
  [186] = {.lex_state = 55},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 55},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 55},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 55},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 55},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 55},
  [218] = {.lex_state = 55},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
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
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_cont] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym_hom_string] = ACTIONS(1),
    [sym_hom_inner_string_init] = ACTIONS(1),
    [sym_hom_inner_string_left] = ACTIONS(1),
    [sym_hom_inner_string_right] = ACTIONS(1),
    [sym_hom_inner_comp_left] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(194),
    [sym__item] = STATE(70),
    [sym_metavardefn] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(70),
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
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(56), 1,
      sym_rule_separator,
    STATE(169), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(34), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [48] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(56), 1,
      sym_rule_separator,
    STATE(169), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(34), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [96] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(56), 1,
      sym_rule_separator,
    STATE(169), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(34), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [144] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(56), 1,
      sym_rule_separator,
    STATE(169), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(34), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [192] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(46), 1,
      anon_sym_LT_SLASH,
    ACTIONS(52), 1,
      sym_string,
    STATE(56), 1,
      sym_rule_separator,
    STATE(169), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(41), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(49), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(34), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [240] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(56), 1,
      sym_rule_separator,
    STATE(169), 1,
      sym_dash_line,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(57), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(34), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [288] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(56), 1,
      sym_rule_separator,
    STATE(169), 1,
      sym_dash_line,
    STATE(5), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(61), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(34), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [336] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(56), 1,
      sym_rule_separator,
    STATE(169), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(65), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(34), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [384] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(56), 1,
      sym_rule_separator,
    STATE(169), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(34), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [432] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(73), 4,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [458] = 3,
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
  [479] = 3,
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
  [500] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(67), 1,
      sym_rule_separator,
    STATE(169), 1,
      sym_dash_line,
    STATE(36), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(34), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [533] = 3,
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
  [554] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(46), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(94), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [583] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(43), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(100), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 4,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_defn,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(40), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(69), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [678] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_defn,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(63), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(120), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [727] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym_production_mod_token1,
    STATE(117), 1,
      sym_string_desc,
    STATE(175), 1,
      sym__string_desc_list1,
    ACTIONS(127), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(23), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [754] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(131), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(24), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(135), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [800] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_production_mod_token1,
    STATE(117), 1,
      sym_string_desc,
    STATE(175), 1,
      sym__string_desc_list1,
    ACTIONS(141), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(23), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [827] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(145), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(149), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(151), 1,
      sym_hom_string,
    STATE(35), 1,
      aux_sym_homomorphism_repeat1,
    STATE(92), 1,
      sym__hom_string,
    STATE(93), 1,
      sym_hom_inner_block,
    ACTIONS(147), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(95), 2,
      sym__hom_element,
      sym_dots,
  [860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(155), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [883] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(159), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(31), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(163), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(167), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [952] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(149), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(151), 1,
      sym_hom_string,
    ACTIONS(169), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(35), 1,
      aux_sym_homomorphism_repeat1,
    STATE(92), 1,
      sym__hom_string,
    STATE(93), 1,
      sym_hom_inner_block,
    ACTIONS(147), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(95), 2,
      sym__hom_element,
      sym_dots,
  [985] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(149), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(151), 1,
      sym_hom_string,
    ACTIONS(171), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(32), 1,
      aux_sym_homomorphism_repeat1,
    STATE(92), 1,
      sym__hom_string,
    STATE(93), 1,
      sym_hom_inner_block,
    ACTIONS(147), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(95), 2,
      sym__hom_element,
      sym_dots,
  [1018] = 7,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_string,
    STATE(96), 1,
      sym__line_end,
    ACTIONS(177), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(42), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1045] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(181), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(187), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(190), 1,
      sym_hom_string,
    STATE(35), 1,
      aux_sym_homomorphism_repeat1,
    STATE(92), 1,
      sym__hom_string,
    STATE(93), 1,
      sym_hom_inner_block,
    ACTIONS(184), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(95), 2,
      sym__hom_element,
      sym_dots,
  [1078] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(195), 1,
      anon_sym_LT_SLASH,
    ACTIONS(201), 1,
      sym_string,
    STATE(36), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(198), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(34), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1105] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_production_mod_token1,
    STATE(117), 1,
      sym_string_desc,
    STATE(175), 1,
      sym__string_desc_list1,
    ACTIONS(206), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(26), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(204), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1132] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(149), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(151), 1,
      sym_hom_string,
    ACTIONS(208), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(27), 1,
      aux_sym_homomorphism_repeat1,
    STATE(92), 1,
      sym__hom_string,
    STATE(93), 1,
      sym_hom_inner_block,
    ACTIONS(147), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(95), 2,
      sym__hom_element,
      sym_dots,
  [1165] = 7,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_string,
    STATE(15), 1,
      sym__line_end,
    ACTIONS(210), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(42), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1192] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_defn,
    ACTIONS(212), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(40), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(29), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(217), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1238] = 6,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LT_SLASH,
    ACTIONS(225), 1,
      sym_string,
    ACTIONS(228), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(222), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(42), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1262] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(44), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(232), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(230), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_PIPE,
    STATE(44), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(239), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(44), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(100), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_defn,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_LBRACE_LBRACE,
  [1363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(49), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LT_SLASH,
    ACTIONS(253), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      sym_string,
    ACTIONS(255), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(62), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1443] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LT_SLASH,
    ACTIONS(259), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(261), 1,
      sym_string,
    ACTIONS(255), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(263), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1483] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COLON_COLON,
    ACTIONS(269), 1,
      anon_sym_LT_SLASH,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(271), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(60), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1506] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LT_SLASH,
    ACTIONS(275), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(277), 1,
      sym_string,
    ACTIONS(255), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(52), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1529] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(279), 1,
      sym_string,
    STATE(13), 1,
      sym_rule_line,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(39), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1552] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LT_SLASH,
    ACTIONS(284), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(289), 1,
      sym_string,
    ACTIONS(286), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1575] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LT_SLASH,
    ACTIONS(292), 1,
      anon_sym_COLON_COLON,
    ACTIONS(294), 1,
      sym_string,
    ACTIONS(271), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(66), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_LBRACE_LBRACE,
  [1615] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(296), 1,
      anon_sym_LT_SLASH,
    ACTIONS(302), 1,
      sym_string,
    ACTIONS(299), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(60), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1638] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      sym_string,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(255), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1661] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      sym_string,
    ACTIONS(307), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(255), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_defn,
    STATE(68), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(309), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1703] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      anon_sym_grammar,
    ACTIONS(316), 1,
      anon_sym_embed,
    ACTIONS(319), 1,
      anon_sym_defns,
    ACTIONS(322), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(64), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1728] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LT_SLASH,
    ACTIONS(325), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(327), 1,
      sym_string,
    ACTIONS(255), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(61), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1751] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LT_SLASH,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(329), 1,
      anon_sym_COLON_COLON,
    ACTIONS(271), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(60), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1774] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(279), 1,
      sym_string,
    STATE(12), 1,
      sym_rule_line,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(39), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_defn,
    STATE(68), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(331), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_defn,
    STATE(68), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(336), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1835] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(64), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1860] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LT_SLASH,
    ACTIONS(340), 1,
      anon_sym_COLON_COLON,
    ACTIONS(342), 1,
      sym_string,
    ACTIONS(271), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(54), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1883] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(348), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(350), 1,
      sym_hom_inner_string_left,
    STATE(155), 1,
      sym_dots,
    ACTIONS(346), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(73), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [1907] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(352), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(354), 1,
      sym_hom_inner_string_left,
    STATE(132), 1,
      sym_dots,
    ACTIONS(346), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(75), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [1931] = 3,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(358), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(356), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_hom_inner_string_left,
    ACTIONS(360), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(362), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(75), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [1965] = 3,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(369), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(367), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1980] = 3,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(373), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(371), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1995] = 3,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(377), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(375), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2010] = 3,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(381), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(379), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(369), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2051] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(383), 1,
      anon_sym_COLON_COLON,
    ACTIONS(385), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(90), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(387), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2155] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(391), 1,
      anon_sym_COLON_COLON,
    ACTIONS(393), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(395), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(399), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(403), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(88), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(409), 3,
      anon_sym_SLASH_GT,
      anon_sym_IN,
      anon_sym_DOT_DOT_DOT_DOT,
  [2301] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_SLASH_GT,
    ACTIONS(417), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(166), 1,
      sym_dots,
    ACTIONS(415), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(421), 1,
      sym_string,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(191), 1,
      sym_comprehension_bound,
  [2334] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LT_SLASH,
    ACTIONS(425), 1,
      sym_hom_inner_string_init,
    STATE(72), 1,
      sym__hom_inner_string_init,
    STATE(177), 1,
      sym__hom_inner,
  [2350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(84), 1,
      sym_embed,
    STATE(50), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(427), 1,
      sym_string,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(206), 1,
      sym_comprehension_bound,
  [2380] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_production_mod_token1,
    STATE(84), 1,
      sym_defnclass,
    STATE(217), 1,
      sym_id,
    STATE(218), 1,
      sym_defnclass_name,
  [2396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_COLON_COLON,
    ACTIONS(433), 1,
      aux_sym_production_mod_token1,
    STATE(123), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_production_mod_token1,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    STATE(107), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(439), 1,
      sym_hom_inner_comp_left,
    STATE(124), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2438] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(441), 1,
      sym_string,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(200), 1,
      sym_comprehension_bound,
  [2454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(445), 1,
      sym_hom_inner_string_right,
    STATE(111), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(450), 1,
      sym_hom_inner_string_right,
    STATE(111), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_production_mod_token1,
    ACTIONS(452), 1,
      anon_sym_COLON_COLON,
    STATE(116), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2496] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(454), 1,
      sym_string,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(199), 1,
      sym_comprehension_bound,
  [2512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(456), 1,
      anon_sym_by,
    STATE(40), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_production_mod_token1,
    ACTIONS(458), 1,
      anon_sym_COLON_COLON,
    STATE(123), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COLON_COLON,
    ACTIONS(462), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym__string_desc_list1_repeat1,
  [2556] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(466), 1,
      sym_string,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(196), 1,
      sym_comprehension_bound,
  [2572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(468), 1,
      anon_sym_by,
    STATE(115), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(470), 1,
      sym_string,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(171), 1,
      sym_comprehension_bound,
  [2602] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_COLON_COLON,
    ACTIONS(474), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(128), 1,
      aux_sym__string_desc_list1_repeat1,
  [2618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(476), 1,
      anon_sym_by,
    STATE(40), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_COLON_COLON,
    ACTIONS(480), 1,
      aux_sym_production_mod_token1,
    STATE(123), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(485), 1,
      sym_hom_inner_comp_left,
    STATE(124), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_by,
    STATE(122), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(492), 1,
      sym_hom_inner_comp_left,
    STATE(109), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_hom_inner_string_right,
    ACTIONS(494), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(111), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COLON_COLON,
    ACTIONS(498), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym__string_desc_list1_repeat1,
  [2718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(204), 1,
      sym_comprehension_bound,
  [2731] = 3,
    ACTIONS(173), 1,
      sym_comment,
    STATE(7), 1,
      sym__line_end,
    ACTIONS(505), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [2742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_SQUOTE,
    ACTIONS(509), 1,
      sym__namespace_prefix_string,
    STATE(125), 1,
      sym_namespace_prefix,
  [2755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_hom_inner_string_right,
    STATE(112), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_SQUOTE,
    ACTIONS(509), 1,
      sym__namespace_prefix_string,
    STATE(187), 1,
      sym_namespace_prefix,
  [2788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COLON_COLON,
    ACTIONS(498), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_production_mod_token1,
    STATE(22), 1,
      sym_production_name,
    STATE(53), 1,
      sym_id,
  [2812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_SQUOTE,
    ACTIONS(509), 1,
      sym__namespace_prefix_string,
    STATE(119), 1,
      sym_namespace_prefix,
  [2825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(180), 1,
      sym_comprehension_bound,
  [2838] = 3,
    ACTIONS(173), 1,
      sym_comment,
    STATE(10), 1,
      sym__line_end,
    ACTIONS(515), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [2849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_SQUOTE,
    ACTIONS(509), 1,
      sym__namespace_prefix_string,
    STATE(183), 1,
      sym_namespace_prefix,
  [2871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_production_mod_token1,
    STATE(30), 1,
      sym_production_name,
    STATE(53), 1,
      sym_id,
  [2884] = 3,
    ACTIONS(173), 1,
      sym_comment,
    STATE(8), 1,
      sym__line_end,
    ACTIONS(519), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [2895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(197), 1,
      sym_comprehension_bound,
  [2917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(198), 1,
      sym_comprehension_bound,
  [2930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(210), 1,
      sym_comprehension_bound,
  [2943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(174), 1,
      sym_comprehension_bound,
  [2956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_production_mod_token1,
    STATE(188), 1,
      sym_defn_name,
    STATE(190), 1,
      sym_id,
  [2969] = 3,
    ACTIONS(173), 1,
      sym_comment,
    STATE(99), 1,
      sym__line_end,
    ACTIONS(523), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [2980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      aux_sym_production_mod_token1,
    STATE(150), 1,
      sym_rule_name,
    STATE(161), 1,
      sym_id,
  [2993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(201), 1,
      sym_comprehension_bound,
  [3006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      aux_sym_production_mod_token1,
    STATE(117), 1,
      sym_string_desc,
    STATE(214), 1,
      sym__string_desc_list1,
  [3019] = 3,
    ACTIONS(173), 1,
      sym_comment,
    STATE(2), 1,
      sym__line_end,
    ACTIONS(529), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_hom_inner_string_right,
    STATE(127), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [3041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(168), 1,
      sym__comprehension_string,
    STATE(202), 1,
      sym_comprehension_bound,
  [3054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_production_mod_token1,
    STATE(25), 1,
      sym_production_name,
    STATE(53), 1,
      sym_id,
  [3067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_production_mod_token1,
    STATE(182), 1,
      sym_defn_name,
    STATE(190), 1,
      sym_id,
  [3080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_production_mod_token1,
    STATE(41), 1,
      sym_production_name,
    STATE(53), 1,
      sym_id,
  [3093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SQUOTE,
    ACTIONS(535), 1,
      sym__namespace_prefix_string,
  [3103] = 2,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(537), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(101), 1,
      sym__comprehension_string,
  [3121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      aux_sym_production_mod_token1,
    STATE(135), 1,
      sym_string_desc,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
  [3139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_line_cont,
    STATE(151), 1,
      sym__line_cont,
  [3149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(179), 1,
      sym__comprehension_string,
  [3159] = 2,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(241), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_SLASH_GT,
    ACTIONS(545), 1,
      anon_sym_IN,
  [3177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym_line_cont,
    STATE(211), 1,
      sym__line_cont,
  [3187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym_production_mod_token1,
  [3194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_SLASH_GT,
  [3201] = 2,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym__whitespace,
  [3208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_line_cont,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SLASH_GT,
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON_COLON,
  [3229] = 2,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym__whitespace,
  [3236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RBRACK_RBRACK,
  [3243] = 2,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_dash_line_token1,
  [3250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SLASH_GT,
  [3257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH_GT,
  [3264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_SQUOTE,
  [3271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COLON_COLON,
  [3278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COLON_COLON_EQ,
  [3285] = 2,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym__whitespace,
  [3292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_hom_inner_string_right,
  [3299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COLON_COLON,
  [3306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COLON_COLON_EQ,
  [3313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COLON_COLON,
  [3320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_SLASH_SLASH,
  [3327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_COLON_COLON,
  [3334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH_GT,
  [3341] = 2,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__whitespace,
  [3348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_hom_name,
  [3355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
  [3362] = 2,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym__whitespace,
  [3369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SLASH_GT,
  [3376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_SLASH_GT,
  [3383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SLASH_GT,
  [3390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SLASH_GT,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_SLASH_GT,
  [3404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SLASH_GT,
  [3411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SLASH_GT,
  [3418] = 2,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym__whitespace,
  [3425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH_GT,
  [3432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACK_RBRACK,
  [3439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH_GT,
  [3446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SLASH_SLASH,
  [3453] = 2,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym__whitespace,
  [3460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_COLON_COLON,
  [3467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH_GT,
  [3474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COLON_COLON,
  [3481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_hom_name,
  [3488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RBRACK_RBRACK,
  [3495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COLON_COLON_EQ,
  [3502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_SLASH_SLASH,
  [3509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_SLASH_SLASH,
  [3516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COLON_COLON,
  [3523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_COLON_COLON,
  [3530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_SLASH_SLASH,
  [3537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 336,
  [SMALL_STATE(10)] = 384,
  [SMALL_STATE(11)] = 432,
  [SMALL_STATE(12)] = 458,
  [SMALL_STATE(13)] = 479,
  [SMALL_STATE(14)] = 500,
  [SMALL_STATE(15)] = 533,
  [SMALL_STATE(16)] = 554,
  [SMALL_STATE(17)] = 583,
  [SMALL_STATE(18)] = 612,
  [SMALL_STATE(19)] = 632,
  [SMALL_STATE(20)] = 652,
  [SMALL_STATE(21)] = 678,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 727,
  [SMALL_STATE(24)] = 754,
  [SMALL_STATE(25)] = 777,
  [SMALL_STATE(26)] = 800,
  [SMALL_STATE(27)] = 827,
  [SMALL_STATE(28)] = 860,
  [SMALL_STATE(29)] = 883,
  [SMALL_STATE(30)] = 906,
  [SMALL_STATE(31)] = 929,
  [SMALL_STATE(32)] = 952,
  [SMALL_STATE(33)] = 985,
  [SMALL_STATE(34)] = 1018,
  [SMALL_STATE(35)] = 1045,
  [SMALL_STATE(36)] = 1078,
  [SMALL_STATE(37)] = 1105,
  [SMALL_STATE(38)] = 1132,
  [SMALL_STATE(39)] = 1165,
  [SMALL_STATE(40)] = 1192,
  [SMALL_STATE(41)] = 1215,
  [SMALL_STATE(42)] = 1238,
  [SMALL_STATE(43)] = 1262,
  [SMALL_STATE(44)] = 1284,
  [SMALL_STATE(45)] = 1306,
  [SMALL_STATE(46)] = 1324,
  [SMALL_STATE(47)] = 1346,
  [SMALL_STATE(48)] = 1363,
  [SMALL_STATE(49)] = 1382,
  [SMALL_STATE(50)] = 1401,
  [SMALL_STATE(51)] = 1420,
  [SMALL_STATE(52)] = 1443,
  [SMALL_STATE(53)] = 1466,
  [SMALL_STATE(54)] = 1483,
  [SMALL_STATE(55)] = 1506,
  [SMALL_STATE(56)] = 1529,
  [SMALL_STATE(57)] = 1552,
  [SMALL_STATE(58)] = 1575,
  [SMALL_STATE(59)] = 1598,
  [SMALL_STATE(60)] = 1615,
  [SMALL_STATE(61)] = 1638,
  [SMALL_STATE(62)] = 1661,
  [SMALL_STATE(63)] = 1684,
  [SMALL_STATE(64)] = 1703,
  [SMALL_STATE(65)] = 1728,
  [SMALL_STATE(66)] = 1751,
  [SMALL_STATE(67)] = 1774,
  [SMALL_STATE(68)] = 1797,
  [SMALL_STATE(69)] = 1816,
  [SMALL_STATE(70)] = 1835,
  [SMALL_STATE(71)] = 1860,
  [SMALL_STATE(72)] = 1883,
  [SMALL_STATE(73)] = 1907,
  [SMALL_STATE(74)] = 1931,
  [SMALL_STATE(75)] = 1946,
  [SMALL_STATE(76)] = 1965,
  [SMALL_STATE(77)] = 1980,
  [SMALL_STATE(78)] = 1995,
  [SMALL_STATE(79)] = 2010,
  [SMALL_STATE(80)] = 2025,
  [SMALL_STATE(81)] = 2037,
  [SMALL_STATE(82)] = 2051,
  [SMALL_STATE(83)] = 2069,
  [SMALL_STATE(84)] = 2081,
  [SMALL_STATE(85)] = 2093,
  [SMALL_STATE(86)] = 2105,
  [SMALL_STATE(87)] = 2117,
  [SMALL_STATE(88)] = 2131,
  [SMALL_STATE(89)] = 2143,
  [SMALL_STATE(90)] = 2155,
  [SMALL_STATE(91)] = 2173,
  [SMALL_STATE(92)] = 2185,
  [SMALL_STATE(93)] = 2199,
  [SMALL_STATE(94)] = 2213,
  [SMALL_STATE(95)] = 2225,
  [SMALL_STATE(96)] = 2239,
  [SMALL_STATE(97)] = 2253,
  [SMALL_STATE(98)] = 2265,
  [SMALL_STATE(99)] = 2277,
  [SMALL_STATE(100)] = 2288,
  [SMALL_STATE(101)] = 2301,
  [SMALL_STATE(102)] = 2318,
  [SMALL_STATE(103)] = 2334,
  [SMALL_STATE(104)] = 2350,
  [SMALL_STATE(105)] = 2364,
  [SMALL_STATE(106)] = 2380,
  [SMALL_STATE(107)] = 2396,
  [SMALL_STATE(108)] = 2410,
  [SMALL_STATE(109)] = 2424,
  [SMALL_STATE(110)] = 2438,
  [SMALL_STATE(111)] = 2454,
  [SMALL_STATE(112)] = 2468,
  [SMALL_STATE(113)] = 2482,
  [SMALL_STATE(114)] = 2496,
  [SMALL_STATE(115)] = 2512,
  [SMALL_STATE(116)] = 2526,
  [SMALL_STATE(117)] = 2540,
  [SMALL_STATE(118)] = 2556,
  [SMALL_STATE(119)] = 2572,
  [SMALL_STATE(120)] = 2586,
  [SMALL_STATE(121)] = 2602,
  [SMALL_STATE(122)] = 2618,
  [SMALL_STATE(123)] = 2632,
  [SMALL_STATE(124)] = 2646,
  [SMALL_STATE(125)] = 2660,
  [SMALL_STATE(126)] = 2674,
  [SMALL_STATE(127)] = 2688,
  [SMALL_STATE(128)] = 2702,
  [SMALL_STATE(129)] = 2718,
  [SMALL_STATE(130)] = 2731,
  [SMALL_STATE(131)] = 2742,
  [SMALL_STATE(132)] = 2755,
  [SMALL_STATE(133)] = 2766,
  [SMALL_STATE(134)] = 2775,
  [SMALL_STATE(135)] = 2788,
  [SMALL_STATE(136)] = 2799,
  [SMALL_STATE(137)] = 2812,
  [SMALL_STATE(138)] = 2825,
  [SMALL_STATE(139)] = 2838,
  [SMALL_STATE(140)] = 2849,
  [SMALL_STATE(141)] = 2858,
  [SMALL_STATE(142)] = 2871,
  [SMALL_STATE(143)] = 2884,
  [SMALL_STATE(144)] = 2895,
  [SMALL_STATE(145)] = 2904,
  [SMALL_STATE(146)] = 2917,
  [SMALL_STATE(147)] = 2930,
  [SMALL_STATE(148)] = 2943,
  [SMALL_STATE(149)] = 2956,
  [SMALL_STATE(150)] = 2969,
  [SMALL_STATE(151)] = 2980,
  [SMALL_STATE(152)] = 2993,
  [SMALL_STATE(153)] = 3006,
  [SMALL_STATE(154)] = 3019,
  [SMALL_STATE(155)] = 3030,
  [SMALL_STATE(156)] = 3041,
  [SMALL_STATE(157)] = 3054,
  [SMALL_STATE(158)] = 3067,
  [SMALL_STATE(159)] = 3080,
  [SMALL_STATE(160)] = 3093,
  [SMALL_STATE(161)] = 3103,
  [SMALL_STATE(162)] = 3111,
  [SMALL_STATE(163)] = 3121,
  [SMALL_STATE(164)] = 3131,
  [SMALL_STATE(165)] = 3139,
  [SMALL_STATE(166)] = 3149,
  [SMALL_STATE(167)] = 3159,
  [SMALL_STATE(168)] = 3167,
  [SMALL_STATE(169)] = 3177,
  [SMALL_STATE(170)] = 3187,
  [SMALL_STATE(171)] = 3194,
  [SMALL_STATE(172)] = 3201,
  [SMALL_STATE(173)] = 3208,
  [SMALL_STATE(174)] = 3215,
  [SMALL_STATE(175)] = 3222,
  [SMALL_STATE(176)] = 3229,
  [SMALL_STATE(177)] = 3236,
  [SMALL_STATE(178)] = 3243,
  [SMALL_STATE(179)] = 3250,
  [SMALL_STATE(180)] = 3257,
  [SMALL_STATE(181)] = 3264,
  [SMALL_STATE(182)] = 3271,
  [SMALL_STATE(183)] = 3278,
  [SMALL_STATE(184)] = 3285,
  [SMALL_STATE(185)] = 3292,
  [SMALL_STATE(186)] = 3299,
  [SMALL_STATE(187)] = 3306,
  [SMALL_STATE(188)] = 3313,
  [SMALL_STATE(189)] = 3320,
  [SMALL_STATE(190)] = 3327,
  [SMALL_STATE(191)] = 3334,
  [SMALL_STATE(192)] = 3341,
  [SMALL_STATE(193)] = 3348,
  [SMALL_STATE(194)] = 3355,
  [SMALL_STATE(195)] = 3362,
  [SMALL_STATE(196)] = 3369,
  [SMALL_STATE(197)] = 3376,
  [SMALL_STATE(198)] = 3383,
  [SMALL_STATE(199)] = 3390,
  [SMALL_STATE(200)] = 3397,
  [SMALL_STATE(201)] = 3404,
  [SMALL_STATE(202)] = 3411,
  [SMALL_STATE(203)] = 3418,
  [SMALL_STATE(204)] = 3425,
  [SMALL_STATE(205)] = 3432,
  [SMALL_STATE(206)] = 3439,
  [SMALL_STATE(207)] = 3446,
  [SMALL_STATE(208)] = 3453,
  [SMALL_STATE(209)] = 3460,
  [SMALL_STATE(210)] = 3467,
  [SMALL_STATE(211)] = 3474,
  [SMALL_STATE(212)] = 3481,
  [SMALL_STATE(213)] = 3488,
  [SMALL_STATE(214)] = 3495,
  [SMALL_STATE(215)] = 3502,
  [SMALL_STATE(216)] = 3509,
  [SMALL_STATE(217)] = 3516,
  [SMALL_STATE(218)] = 3523,
  [SMALL_STATE(219)] = 3530,
  [SMALL_STATE(220)] = 3537,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 30),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 12, 0, 32),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 12, 0, 32),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 29),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 29),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 28),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 28),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(178),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(51),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(76),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 26),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 26),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 25),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 25),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 24),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 24),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 23),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 23),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 31),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 31),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 5, 0, 7),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 5, 0, 7),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 9),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 16),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 16),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 15),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 15),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 13),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 13),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 19),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 19),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 20),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 20),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 21),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 21),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 22),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 22),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(103),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(81),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(81),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(92),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 17),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 17),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 5, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 14),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 14),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 10),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(176),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 11),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 5, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 5, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 7, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 7, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 6, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 6, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 4, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 1, 0, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 1, 0, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 2, 0, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 2, 0, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 5),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 6, 0, 34),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comprehension_string, 1, 0, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comprehension_string, 1, 0, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat2, 2, 0, 0),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat2, 2, 0, 0), SHIFT_REPEAT(111),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 4, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 2, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 2, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat3, 2, 0, 0),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat3, 2, 0, 0), SHIFT_REPEAT(124),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 33),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 12),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 18),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [593] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 5, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_line_cont = 0,
  ts_external_token__eof = 1,
  ts_external_token_hom_string = 2,
  ts_external_token_hom_inner_string_init = 3,
  ts_external_token_hom_inner_string_left = 4,
  ts_external_token_hom_inner_string_right = 5,
  ts_external_token_hom_inner_comp_left = 6,
  ts_external_token_error_sentinel = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_line_cont] = sym_line_cont,
  [ts_external_token__eof] = sym__eof,
  [ts_external_token_hom_string] = sym_hom_string,
  [ts_external_token_hom_inner_string_init] = sym_hom_inner_string_init,
  [ts_external_token_hom_inner_string_left] = sym_hom_inner_string_left,
  [ts_external_token_hom_inner_string_right] = sym_hom_inner_string_right,
  [ts_external_token_hom_inner_comp_left] = sym_hom_inner_comp_left,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_line_cont] = true,
    [ts_external_token__eof] = true,
    [ts_external_token_hom_string] = true,
    [ts_external_token_hom_inner_string_init] = true,
    [ts_external_token_hom_inner_string_left] = true,
    [ts_external_token_hom_inner_string_right] = true,
    [ts_external_token_hom_inner_comp_left] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_hom_string] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
  },
  [4] = {
    [ts_external_token_hom_inner_string_left] = true,
  },
  [5] = {
    [ts_external_token_hom_inner_string_init] = true,
  },
  [6] = {
    [ts_external_token_hom_inner_comp_left] = true,
  },
  [7] = {
    [ts_external_token_hom_inner_string_right] = true,
  },
  [8] = {
    [ts_external_token_line_cont] = true,
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
