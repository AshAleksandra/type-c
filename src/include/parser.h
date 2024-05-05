#pragma once
#include "lexer.h"
#include "token.h"
#include "ast.h"

typedef struct PARSER_STRUCT{
    lexer_T* lexer;
    token_T* token;
} parser_T;

class Parser
{
    public:
        static parser_T* Init_Parser(lexer_T* lexer);
        static AST_T* parser_parse(parser_T* parser);
        static token_T* parser_eat(parser_T* parser, token type);
        static AST_T* parser_parse_compound(parser_T* parser);
};
