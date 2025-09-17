#pragma once

#include "../tokens/token.h"

typedef struct {
    char *start;
    char *current;
} Lexer;

Token next_token(Token tok);
