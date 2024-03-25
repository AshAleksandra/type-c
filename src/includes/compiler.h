#ifndef TC_COMPILER_H
#define TC_COMPILER_H

#include <stdio.h>
#include <stdbool.h>

enum
{
    COMPILER_FILE_COMPILED_OK,
    COMPILER_FAILED_WITH_ERRORS
};

struct pos
{
    int line;
    int col;
    const char* filename;
};

struct compile_process
{
    int flags;
    struct pos pos;
    struct compile_process_input_file
    {
        FILE* fp;
        const char* abs_path;
    } cfile;
    FILE* ofile;
};

int compile_file(const char* filename, const char* out_filename, int flags);
struct compile_process *compile_process_create(const char *filename, const char *filename_out, int flags);

#endif