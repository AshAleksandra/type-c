#include "includes/compile.h"
#include "includes/io.h"
#include "includes/lexer.h"
#include "includes/parser.h"

void compile(char* src)
{
    lexer_T *lexer = init_lexer(src);
    parser_T* parser = init_parser(lexer);
}

void compile_file(const char* filename)
{
    char* src = read_file(filename);
    compile(src);
}