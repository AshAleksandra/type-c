#pragma once
#include <string>

enum token{
    TOKEN_EOF = 0,
    TOKEN_NUMBER = 1,
    TOKEN_ID = 2,
    TOKEN_STATEMENT = 3
};

typedef struct {
    std::string value;
    token type;
} token_T;

class Token
{
    public:
        static token_T* init_token(std::string value, token type);
};
