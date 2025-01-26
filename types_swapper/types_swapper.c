#include "types_swapper.h"


void types_swaper(char *data, int flag)
{
    if (!data)
        ptorrent_deb((int)TYPES_SWAPER_NULL_P);
    if (flag == (int)SWAP_TO_INT)
        c_to_int(data);
    else if (flag == (int)SWAP_TO_FLOAT)
        c_to_float(data);
    else 
        ptorrent_deb((int)UNKNOWN_FLAG);
}
