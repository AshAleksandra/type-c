#pragma once
#include <string>

enum token{
    TOKEN_EOF,
    TOKEN_NUMBER,
    TOKEN_ID,
    TOKEN_STATEMENT,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_LBRACE,
    TOKEN_RBRACE
};

typedef struct TOKEN_STRUCT {
    std::string value;
    token type;
} token_T;

class Token
{
    public:
        static token_T* init_token(std::string value, token type);
};
