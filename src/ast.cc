#include <cstdlib>
#include "include/ast.h"
#include "include/list.h"
#include "include/list.h"

AST_T* AST::init_asst(ast type)
{
    AST_T* ast = (AST_T*)std::calloc(1, sizeof(struct AST_STRUCT));
    ast->type = type;
    if (type == AST_COMPOUND) {
        ast->children = List::init_list(sizeof(struct AST_STRUCT*));
    }
    //ast->stack_frame = (void*)0;
    ast->multiplier = 1;
    ast->dtype = DATA_TYPE_UNKNOWN;
    return ast;
}