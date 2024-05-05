#pragma once

typedef struct LIST_STRUCT
{
    void** items;
    size_t size;
    size_t item_size;
} list_T;

class List
{
    public:
        static list_T* init_list(size_t item_size);
};
