#include "data_parsing.h"

int is_number(char c)
{
    return is_digit(c) || is_decimal_point(c) || is_minus_sign(c);
}