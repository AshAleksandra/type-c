#include <string>
#include "include/parser.h"
#include "include/token.h"

token_T* Token::init_token(std::string value, token type)
{
    token_T* token = (token_T*)std::calloc(1, sizeof(struct TOKEN_STRUCT));;
    token->type = type;
    token->value = value;
    return token;
}