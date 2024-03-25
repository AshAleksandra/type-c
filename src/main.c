#include <stdio.h>
#include "includes/compiler.h"

int main(int argc, char const *argv[])
{
    int res = compile_file("./test.c", "./test", 0); 
    if (res == COMPILER_FILE_COMPILED_OK)
    {
        printf("Everything compiled file\n");
    }
    else if(res == COMPILER_FAILED_WITH_ERRORS)
    {
        printf("Compile failed\n");
    }
    else
    {
        printf("Unknown response for compile time\n");
    }
    return 0;
}
