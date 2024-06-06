#include "tree_sitter/parser.h"
#include <ctype.h>

enum TokenType {
    LINE_CONT,
    LINE_END,
    HOM_STRING,
    HOM_INNER_STRING_INIT,
    HOM_INNER_STRING_LEFT,
    HOM_INNER_STRING_RIGHT,
    HOM_INNER_COMP_LEFT,
    ERROR_SENTINEL
};

typedef struct {
    const int num_start_chars;
    const int num_break_chars;
    const uint32_t *start_chars;
    const uint32_t *break_chars;
} delim_exp;

const uint32_t _HOM_INNER_CLOSE_START[] = {']', ']'};
const uint32_t _HOM_INNER_OPEN_START[]  = {'[', '['};
const uint32_t _HOM_CLOSE_START[]       = {'}', '}'};
const uint32_t _COMP_OPEN_START[]       = {'<', '/'};
const uint32_t _COMP_CLOSE_START[]       = {'/', '>'};
const uint32_t _COMP_MIDDLE_START[]       = {'/', '/'};
// dots
const uint32_t _DOTS_2_START[] = {'.', '.'};
const uint32_t _DOTS_2_BREAK[] = {'.'};
const uint32_t _DOTS_3_START[] = {'.', '.', '.'};
const uint32_t _DOTS_3_BREAK[] = {'.'};
const uint32_t _DOTS_4_START[] = {'.', '.', '.', '.'};
const uint32_t _DOTS_4_BREAK[] = {'.'};

const delim_exp COMP_MIDDLE = {
    .num_start_chars = 2,
    .num_break_chars = 0,
    .start_chars = _COMP_MIDDLE_START,
    .break_chars = {},
};
const delim_exp COMP_CLOSE = {
    .num_start_chars = 2,
    .num_break_chars = 0,
    .start_chars = _COMP_CLOSE_START,
    .break_chars = {},
};
const delim_exp COMP_OPEN = {
    .num_start_chars = 2,
    .num_break_chars = 0,
    .start_chars = _COMP_OPEN_START,
    .break_chars = {},
};
const delim_exp HOM_INNER_CLOSE = {
    .num_start_chars = 2,
    .num_break_chars = 0,
    .start_chars = _HOM_INNER_CLOSE_START,
    .break_chars = {},
};
const delim_exp HOM_INNER_OPEN = {
    .num_start_chars = 2,
    .num_break_chars = 0,
    .start_chars = _HOM_INNER_OPEN_START,
    .break_chars = {},
};
const delim_exp HOM_CLOSE = {
    .num_start_chars = 2,
    .num_break_chars = 0,
    .start_chars = _HOM_CLOSE_START,
    .break_chars = {},
};
const delim_exp DOTS_2 = {
    .num_start_chars = 2,
    .num_break_chars = 1,
    .start_chars = _DOTS_2_START,
    .break_chars = _DOTS_2_BREAK
};
const delim_exp DOTS_3 = {
    .num_start_chars = 3,
    .num_break_chars = 1,
    .start_chars = _DOTS_3_START,
    .break_chars = _DOTS_3_BREAK
};
const delim_exp DOTS_4 = {
    .num_start_chars = 4,
    .num_break_chars = 1,
    .start_chars = _DOTS_4_START,
    .break_chars = _DOTS_4_BREAK
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

static bool scan_line_cont(TSLexer *lexer) {
    while(
        lexer->lookahead != '\n'
        && isspace(lexer->lookahead)
    ) {
        lexer->advance(lexer, true);
    }

    if (lexer->lookahead == '\n') { return false; }
    return true;
}

static bool scan_line_end(TSLexer *lexer) {
    if (lexer->lookahead == '\n') {
        lexer->advance(lexer, false);
        return true;
    }
    return lexer->eof(lexer);
}

static bool _advance_if_any_valid(
    TSLexer *lexer,
    int array_size,
    const bool array[array_size]
) {
    for (int i = 0; i < array_size; ++i) {
        if (array[i]) {
            lexer->advance(lexer, false);
            return true;
        }
    }
    return false;
}

static bool _is_delim_still_valid(
    uint32_t lookahead,
    delim_exp delim,
    int match_id
) {
    if (match_id < delim.num_start_chars && lookahead != delim.start_chars[match_id]) {
        return false;
    }
    if (match_id == delim.num_start_chars) {
        for (int i = 0; i < delim.num_break_chars; ++i) {
            if (delim.break_chars[i] == lookahead) {
                return false;
            }
        }
    }
    return true;
}

static bool _is_delim_matched(
    delim_exp delim,
    int match_id,
    bool is_valid
) {
    return match_id >= delim.num_start_chars && is_valid;
}

static bool _try_match(
    TSLexer *lexer,
    int num_delims,
    delim_exp delims[num_delims]
) {
    bool valid_delims[num_delims];
    for (int i = 0; i < num_delims; ++i) {
        valid_delims[i] = true;
    }

    int match_id = 0;
    do {
        for (int delim_id = 0; delim_id < num_delims; ++delim_id) {
            if (!valid_delims[delim_id]) {
                continue;
            }
            if (!_is_delim_still_valid(lexer->lookahead, delims[delim_id], match_id)) {
                valid_delims[delim_id] = false;
            }
            if (_is_delim_matched(delims[delim_id], match_id, valid_delims[delim_id])) {
                return true;
            }
        }
        ++match_id;
    } while (_advance_if_any_valid(lexer, num_delims, valid_delims));

    return false;
}

static bool scan_string(
    TSLexer *lexer,
    int num_avoid_delims,
    delim_exp avoid_delims[num_avoid_delims],
    bool avoid_whitespace
) {
    if (avoid_whitespace) {
        while (isspace(lexer->lookahead)) {
            lexer->advance(lexer, true);
        }
    }
    bool has_content = false;
    while(
        !_try_match(lexer, num_avoid_delims, avoid_delims)
        && !(lexer->eof(lexer))
        && !(avoid_whitespace && isspace(lexer->lookahead))
    ) {
        has_content = true;
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
    }
    return has_content;
}

bool tree_sitter_ott_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    if (valid_symbols[ERROR_SENTINEL]) { return false; }
    if (valid_symbols[LINE_CONT]) {
        lexer->result_symbol = LINE_CONT;
        return scan_line_cont(lexer);
    }
    if (valid_symbols[LINE_END]) {
        lexer->result_symbol = LINE_END;
        return scan_line_end(lexer);
    }
    if (valid_symbols[HOM_STRING]) {
        lexer->result_symbol = HOM_STRING;
        delim_exp delims[] = { HOM_CLOSE, HOM_INNER_OPEN, DOTS_2, DOTS_3, DOTS_4 };
        return scan_string(lexer, 5, delims, false);
    }
    if (valid_symbols[HOM_INNER_STRING_RIGHT]) {
        lexer->result_symbol = HOM_INNER_STRING_RIGHT;
        delim_exp delims[] = { HOM_INNER_CLOSE };
        return scan_string(lexer, 1, delims, true);
    }
    if (valid_symbols[HOM_INNER_STRING_LEFT]) {
        lexer->result_symbol = HOM_INNER_STRING_LEFT;
        delim_exp delims[] = { HOM_INNER_CLOSE, DOTS_2, DOTS_3, DOTS_4 };
        return scan_string(lexer, 4, delims, true);
    }
    if (valid_symbols[HOM_INNER_STRING_INIT]) {
        lexer->result_symbol = HOM_INNER_STRING_INIT;
        delim_exp delims[] = { COMP_OPEN, HOM_INNER_CLOSE, DOTS_2, DOTS_3, DOTS_4 };
        return scan_string(lexer, 5, delims, true);
    }
    if (valid_symbols[HOM_INNER_COMP_LEFT]) {
        lexer->result_symbol = HOM_INNER_COMP_LEFT;
        delim_exp delims[] = { COMP_MIDDLE };
        return scan_string(lexer, 1, delims, false);
    }
    return false;
}
