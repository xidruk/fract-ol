#include "data_parsing.h"

int validate_is_float(char *data)
{
    int _index;
    int points_count;

    _index = 0;
    points_count = 0;
    while (data[_index])
    {
        if (is_decimal_point(data[_index]))
            points_count++;
        if (points_count > 1)
            return (0);
        _index++;
    }
    return (1);
}