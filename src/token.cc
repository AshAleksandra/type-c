#include <string>
#include "include/parser.h"

token_T* Token::init_token(std::string value, token type)
{
    token_T* token;
    token->type = type;
    token->value = value;
    return token;
}