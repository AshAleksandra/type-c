#include "include/parser.h"
#include "include/lexer.h"
#include "include/ast.h"

parser_T* Parser::Init_Parser(lexer_T* lexer)
{
    parser_T* parser;
    parser->lexer = lexer;
    parser->token = Lexer::Lexer_next_token(lexer);
    return parser;
}

/*AST_T Parser::parser_parse(parser_T parser)
{

}*/