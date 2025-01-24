#include "g_header.h"

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int is_decimal_point(char c)
{
    return (c == '.');
}

int is_minus_sign(char c)
{
    return (c == '-');
}

int is_number(char c)
{
    return is_digit(c) || is_decimal_point(c) || is_minus_sign(c);
}

int has_valid_minus_sign(char *data)
{
    return (data[0] == '-' && data[1] != '\0');
}

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

int check_the_stupid_bug(char *data)
{
    int _index;
    int data_size;

    _index = 0;
    data_size = 0;
    if (data[_index] == '.' && is_digit(data[_index + 1]))
        is_not_a_number();
    while (data[_index])
        _index++;
    if (data[_index - 1] == '.' && data[_index] == '\0')
        is_not_a_number();
    return (1);
}

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
