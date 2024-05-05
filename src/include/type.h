#pragma once

typedef enum
{
    DATA_TYPE_INT = 3,
    DATA_TYPE_UNKNOWN
} data_type;

int typename_to_int(const char* name);