#include "types_swapper.h"

int c_to_int(char *data)
{
    int _index;
    int result;
    int sign;

    _index = 0;
    result = 0;
    sign = 1;
    validate_number(data);
    if (data[_index] == '-')
    {
        sign = -1;
        _index++;
    }
    while (data[_index])
    {
        result = result * 10 + (data[_index] - '0');
        _index++;
    }
    return (result * sign);
}