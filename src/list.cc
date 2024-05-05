#include <cstdlib>
#include "include/list.h"

list_T* List::init_list(size_t item_size)
{
    list_T* list = (list_T*)std::calloc(1, sizeof(struct LIST_STRUCT));
    list->size = 0;
    list->item_size = item_size;
    list->items = 0;
    return list;
}