#include <stdio.h>
#include <stdlib.h>
#include "includes/compile.h"

void compile(char const *filename)
{
    read_file(filename);
}

char read_file(char const *filename)
{
    FILE *input;
    input = fopen(filename, "r");
    char buffer[512];
    if (input != NULL)
    {
        fgets(buffer, 100, input);
    }
    else {
        printf("Not able to open the file.");
        exit(0);
    }
    printf("MARK \n");
    fclose(input);
    return buffer;
}