#pragma once
#include <string>
#include "token.h"

typedef struct LEXER_STRUCT
{
    std::string src;
    unsigned int i;
    unsigned int src_size;
    char c;
} lexer_T;

class Lexer
{
    public:
        static lexer_T* Init_Lexer(std::string src);
        static token_T* Lexer_next_token(lexer_T* lexer);
        static void lexer_advance(lexer_T* lexer);
        static token_T* lexer_advance_current(lexer_T* lexer, token type);
        static token_T* lexer_parse_number(lexer_T* lexer);
        static token_T* lexer_parse_id(lexer_T* lexer);
};
