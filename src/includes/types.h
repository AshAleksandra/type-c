#ifndef TC_TYPES
#define TC_TYPES

typedef enum
{
  DATA_TYPE_INT = 3,
  DATA_TYPE_UNKNOWN
} data_type;

int typename_to_int(const char* name);
#endif