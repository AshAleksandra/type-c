#include <iostream>
#include "include/parser.h"
#include "include/lexer.h"
#include "include/ast.h"

parser_T* Parser::Init_Parser(lexer_T* lexer)
{
    parser_T* parser = (parser_T*)std::calloc(1, sizeof(struct PARSER_STRUCT));
    parser->lexer = lexer;
    parser->token = Lexer::Lexer_next_token(lexer);
    return parser;
}

token_T* Parser::parser_eat(parser_T* parser, token type)
{
    if (parser->token->type != type)
    {
        std::cout << "[Parser]: Unexpected token: '" << parser->token << "', was expecting: '" << type << "'";
        exit(1);
    }
    parser->token = Lexer::Lexer_next_token(parser->lexer);
    return parser->token;
}

AST_T* Parser::parser_parse(parser_T* parser)
{
    return Parser::parser_parse_compound(parser);
}

AST_T* Parser::parser_parse_compound(parser_T* parser)
{
    unsigned int should_close = 0;
    if (parser->token->type == token::TOKEN_LBRACE)
    {
        Parser::parser_eat(parser, token::TOKEN_LBRACE);
        should_close = 1;
    }
    AST_T* compound = AST::init_asst(ast::AST_COMPOUND);
    return compound;
}