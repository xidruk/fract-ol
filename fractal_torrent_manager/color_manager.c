#include "fractal_tm.h"

int create_color(int r, int g, int b)
{
    return ((r & 0xFF) << 16) | ((g & 0xFF) << 8) | (b & 0xFF);
}