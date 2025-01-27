#include "data_parsing.h"

int check_the_stupid_bug(char *data)
{
    int _index;

    _index = 0;
    if (data[_index] == '.' && is_digit(data[_index + 1]))
        is_not_a_number();
    while (data[_index])
        _index++;
    if (data[_index - 1] == '.' && data[_index] == '\0')
        is_not_a_number();
    return (1);
}