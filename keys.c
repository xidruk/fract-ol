#include "g_header.h"

int handle_keys(int keycode, t_fractal_wc *data)
{
    if (keycode == ESC_KEYCODE)
        exit(0);
    if (keycode == KEY_LEFT)
        data->x_offset -= 0.1 / data->zoom;
    if (keycode == KEY_RIGHT)
        data->x_offset += 0.1 / data->zoom;
    if (keycode == KEY_UP)
        data->y_offset -= 0.1 / data->zoom;
    if (keycode == KEY_DOWN)
        data->y_offset += 0.1 / data->zoom;
    if (keycode == KEY_PLUS)
        data->max_iter += 10;
    if (keycode == KEY_MINUS)
        data->max_iter = (data->max_iter > 10) ? data->max_iter - 10 : 10;
    fractals_render(data);
    return (0);
}
