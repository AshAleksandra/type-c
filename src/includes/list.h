#ifndef TC_LIST
#define TC_LIST
#include <stdlib.h>

typedef struct LIST_STRUCT
{
    void** items;
    size_t size;
    size_t item_size;
} list_T;

void list_push(list_T *list, void *item);

#endif