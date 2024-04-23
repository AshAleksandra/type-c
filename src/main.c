#include <stdio.h>
#include "includes/compile.h"

int main(int argc, char const *argv[])
{
    if (argc <= 1)
    {
        fprintf(stderr, "ERROR: No input file \n");
        return 1;
    }
    compile(argv[1]);
    return 0;
}
