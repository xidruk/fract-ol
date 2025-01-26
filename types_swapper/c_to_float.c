// #include "types_swapper.h"

#include <stdio.h>

float c_to_float(char *data)
{
    float result;
    float factor;
    int _index;
    float divisor;

    _index = 0;
    result = 0.0;
    factor = 1.0;
    divisor = 10.0;
    // validate_number(data);
    if (data[_index] == '-')
    {
        factor = -1.0;
        _index++;
    }
    while (data[_index] && data[_index] != '.')
    {
        result = result * 10 + (data[_index] - '0');
        _index++;
    }
    if (data[_index] == '.')
    {
        _index++;
        while (data[_index])
        {
            result += (data[_index] - '0') / divisor;
            divisor *= 10.0;
            _index++;
        }
    }
    return (result * factor);
}
