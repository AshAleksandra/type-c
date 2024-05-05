#pragma once
#include "lexer.h"
#include "token.h"
#include "ast.h"

typedef struct {
    lexer_T* lexer;
    token_T* token;
} parser_T;

class Parser
{
    public:
        static parser_T* Init_Parser(lexer_T* lexer);
        //static AST_T parser_parse(parser_T parser);
        
};
