#include "token.h"
#include "string.h"

Token make_tokens(TokenType type, const char* literal, int line, int column) {
    Token tok;
    tok.type = type;
    tok.literal = strdup(literal);
    return tok;
}

