#include <cstdlib>
#include <string>
#include <iostream>
#include "include/lexer.h"
#include "include/token.h"

lexer_T* Lexer::Init_Lexer(std::string src)
{
    lexer_T* lexer = (lexer_T*)std::calloc(1, sizeof(struct LEXER_STRUCT));
    lexer->src = src;
    lexer->i = 0;
    lexer->c = src[0];
    lexer->src_size = src.length();
    return lexer;
}

void Lexer::lexer_advance(lexer_T* lexer)
{
    lexer->i +=1;
    lexer->c = lexer->src[lexer->i];
}

token_T* Lexer::lexer_advance_current(lexer_T* lexer, token type)
{
    std::string value;
    value[0] = lexer->c;
    value[1] = '\0';
    token_T* token = Token::init_token(value, type);
    Lexer::lexer_advance(lexer);
    return token;
}

token_T* Lexer::lexer_parse_id(lexer_T* lexer)
{
    token type = token::TOKEN_ID;
    std::string value;
    while (isalpha(lexer->c))
    {
        value.push_back(lexer->c);
        Lexer::lexer_advance(lexer);
    }
    if (value == "function")
    {
        type = token::TOKEN_STATEMENT;
    }
    std::cout << value;
    return Token::init_token(value, type);
}

token_T* Lexer::lexer_parse_number(lexer_T* lexer)
{
    std::string value;
    while (isdigit(lexer->c))
    {
        value.push_back(lexer->c);
        Lexer::lexer_advance(lexer);
    }
    std::cout << value;
    return Token::init_token(value, token::TOKEN_NUMBER);
}

token_T* Lexer::Lexer_next_token(lexer_T* lexer)
{
    while (lexer->c != '\0')
    {
        if (isalpha(lexer->c))
        {
            return Lexer::lexer_parse_id(lexer);
        }
        if(isdigit(lexer->c))
        {
            return Lexer::lexer_parse_number(lexer);
        }
        switch (lexer->c)
        {
            case '(': return Lexer::lexer_advance_current(lexer, token::TOKEN_LPAREN);
            case ')': return Lexer::lexer_advance_current(lexer, token::TOKEN_RPAREN);
            case '{': return Lexer::lexer_advance_current(lexer, token::TOKEN_LBRACE);
            case '}': return Lexer::lexer_advance_current(lexer, token::TOKEN_RBRACE);
            default: std::cout << "Unexpected character '" << lexer->c << "'"; break;
        }
    }
    std::cout << lexer->c;
    return Token::init_token(0,token::TOKEN_EOF);
}