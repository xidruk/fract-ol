#include "data_parsing.h"

int validate_number(char *data)
{
    int _index;

    _index = 0;
    if (data[0] == '-')
    {
        _index++;
        if (!is_digit(data[_index]))
            is_not_a_number();
    }
    while (data[_index])
    {
        if (!is_number(data[_index]))
            is_not_a_number();
        _index++;
    }
    _index = 0;
    if (!validate_is_float(data))
        is_not_a_number();
    check_the_stupid_bug(data);
    return 1;
}