#ifndef TC_STACK_FRAME
#define TC_STACK_FRAME
#include "list.h"
typedef struct STACK_FRAME_STRUCT
{
  list_T* stack;
} stack_frame_T;

stack_frame_T* init_stack_frame();

#endif