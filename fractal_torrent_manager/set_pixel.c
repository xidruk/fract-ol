#include "fractal_tm.h"


void set_pixel(t_fractal_wc *data, int x, int y, int color)
{
    if (x >= 0 && x < 800 && y >= 0 && y < 800)
    {
        char *dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
        *(unsigned int *)dst = color;
    }
}