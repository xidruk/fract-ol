#include "data_parsing.h"

int has_valid_minus_sign(char *data)
{
    return (data[0] == '-' && data[1] != '\0');
}