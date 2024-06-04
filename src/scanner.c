#include "tree_sitter/parser.h"
#include <ctype.h>

enum TokenType {
    LINE_END,
    HOM_STRING,
    HOM_INNER_STRING,
    ERROR_SENTINEL
};

void *tree_sitter_ott_external_scanner_create(void) {
    return NULL;
}

void tree_sitter_ott_external_scanner_destroy(void *payload) {
    // NOTE: if `create` returns NULL, this is a no-op.
}

unsigned tree_sitter_ott_external_scanner_serialize(
    void *payload,
    char *buffer
) {
    // NOTE: This function should copy the complete state of the
    // scanner into the byte buffer and return the number of
    // bytes written.
    return 0;
}

void tree_sitter_ott_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
) {
    // NOTE: This function should restore the state
    // of the scanner based on the bytes that were previously
    // written by the serialize function.
}

bool scan_line_end(TSLexer *lexer) {
    if (lexer->lookahead == '\n') {
        lexer->advance(lexer, false);
        return true;
    }
    return lexer->eof(lexer);
}

bool scan_hom_string(TSLexer *lexer, bool is_empty) {
    while (
        lexer->lookahead != '}'
        && lexer->lookahead != '['
        && !lexer->eof(lexer)
    ) {
        is_empty = false;
        lexer->advance(lexer, false);
    }
    lexer->mark_end(lexer);
    if (lexer->eof(lexer)) { return !is_empty; }
    else { // lexer->lookahead == '}' || lexer->lookahead == '['
        uint32_t curr_char = lexer->lookahead;
        lexer->advance(lexer, false);
        if (lexer->lookahead == curr_char) { return !is_empty; }
    }
    return scan_hom_string(lexer, false);
}

bool scan_hom_inner_string(TSLexer *lexer, bool is_empty) {
    // skip whitespace
    while (is_empty && isspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
    }
    while (
        lexer->lookahead != ']'
        && !isspace(lexer->lookahead)
        && !(lexer->eof(lexer))
    ) {
        is_empty = false;
        lexer->advance(lexer, false);
    }
    lexer->mark_end(lexer);
    if (lexer->eof(lexer) || isspace(lexer->lookahead)) { return !is_empty; }
    else { // lexer->lookahead == ']'
        lexer->advance(lexer, false);
        if (lexer->lookahead == ']') { return !is_empty; }
    }
    return scan_hom_inner_string(lexer, false);
}


bool tree_sitter_ott_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    if (valid_symbols[ERROR_SENTINEL]) { return false; }
    if (valid_symbols[LINE_END]) {
        lexer->result_symbol = LINE_END;
        return scan_line_end(lexer);
    }
    if (valid_symbols[HOM_STRING]) {
        lexer->result_symbol = HOM_STRING;
        return scan_hom_string(lexer, true);
    }
    if (valid_symbols[HOM_INNER_STRING]) {
        lexer->result_symbol = HOM_INNER_STRING;
        return scan_hom_inner_string(lexer, true);
    }
    return false;
}
