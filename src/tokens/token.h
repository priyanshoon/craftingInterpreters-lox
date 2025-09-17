#pragma once

#include<stdlib.h>

typedef enum {
    TOKEN_ILLEGAL,
    TOKEN_EOF,
    TOKEN_IDENT,
    TOKEN_INT,
    TOKEN_ASSIGN,
    TOKEN_PLUS,
    TOKEN_COMMA,
    TOKEN_SEMICOLON,
    TOKEN_LEFT_PAREN,
    TOKEN_RIGHT_PAREN,
    TOKEN_LEFT_BRACE,
    TOKEN_RIGHT_BRACE,
    TOKEN_FUNCTION,
    TOKEN_LET
} TokenType;

typedef struct {
    TokenType type;
    const char *literal;
    size_t line;
    size_t column;
} Token;


Token make_tokens(TokenType type, const char* literal, int line, int column);
