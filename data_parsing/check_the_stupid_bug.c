#include "data_parsing.h"

int check_the_stupid_bug(char *data)
{
    int _index;

    _index = 0;
    if (data[_index] == '.' && is_digit(data[_index + 1]))
        ptorrent_deb(IS_NOTANUMBER);
    while (data[_index])
        _index++;
    if (data[_index - 1] == '.' && data[_index] == '\0')
        ptorrent_deb(IS_NOTANUMBER);
    return (1);
}