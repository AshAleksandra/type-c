#include <iostream>
#include <string>
#include <fstream>
#include "include/compile.h"
#include "include/lexer.h"
#include "include/parser.h"

Compile::Compile(string filename)
{
    std::string src = this->ReadFile(filename);
    lexer_T* lexer = Lexer::Init_Lexer(src);
    parser_T* parser = Parser::Init_Parser(lexer);
}

std::string Compile::ReadFile(string filename)
{
    
    std::ifstream file(filename);
    if (!file.is_open())
    {
        cout << "Error opening file";
        exit(0);
    }
    std::string src((std::istreambuf_iterator<char>(file)),std::istreambuf_iterator<char>());
    return src;
}