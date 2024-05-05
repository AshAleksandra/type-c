#include <cstdlib>
#include <string>
#include <iostream>
#include "include/lexer.h"
#include "include/token.h"

lexer_T* Lexer::Init_Lexer(std::string src)
{
    lexer_T* lexer;
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

token_T* Lexer::lexer_parse_id(lexer_T* lexer)
{
    std::string value;
    while (isalpha(lexer->c))
    {
        
        std::cout << lexer->c;
        value.push_back(lexer->c);
        Lexer::lexer_advance(lexer);
    }
    return Token::init_token(value, token::TOKEN_ID);
}

token_T* Lexer::lexer_parse_number(lexer_T* lexer)
{
    std::string value;
    while (isdigit(lexer->c))
    {
        value.push_back(lexer->c);
        Lexer::lexer_advance(lexer);
    }
    return Token::init_token(value, token::TOKEN_NUMBER);
}

token_T* Lexer::Lexer_next_token(lexer_T* lexer)
{
    while (lexer->c != EOF)
    {
        if (isalpha(lexer->c))
        {
            return Lexer::lexer_parse_id(lexer);
        }
        if(isdigit(lexer->c))
        {
            return Lexer::lexer_parse_number(lexer);
        }
    }
    std::cout << lexer->c;
    return Token::init_token(0,token::TOKEN_EOF);
}