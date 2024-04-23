#include <stdio.h>
#include "includes/compile.h"

int main(int argc, char const *argv[])
{
    if (argc <= 1)
    {
        fprintf(stderr,"\033[1;31mPlease specify input file.\033[0m\n");
        return 1;
    }
    compile_file(argv[1]);
    return 0;
}
