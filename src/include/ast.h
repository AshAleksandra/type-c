#pragma once
#include "ast.h"
#include "type.h"
#include "stack_frame.h"

enum ast{
    AST_COMPOUND,
    AST_BINOP
};

typedef struct AST_STRUCT
{
    ast type;
    list_T* children;
    int multiplier;
    data_type dtype;
    stack_frame_T* stack_frame;
} AST_T;

class AST
{
    public:
    static AST_T* init_asst(ast type);
};

