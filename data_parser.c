#include "g_header.h"

int is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int validate_number(char *data)
{
    int _index;

    _index = 0;
    while (data[_index])
    {
        if (!is_number(data[_index]))
            is_not_a_number();
        _index++;
    }
    return (1);
}
