#include "includes/list.h"
#include <string.h>

void list_push(list_T *list, void *item)
{
    list->size += 1;

    if (!list->items)
        list->items = calloc(1, list->item_size);
    else
        list->items = realloc(list->items, (list->size * list->item_size));

    list->items[list->size - 1] = item;
}