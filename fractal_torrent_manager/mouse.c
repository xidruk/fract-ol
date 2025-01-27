#include "fractal_tm.h"

int handle_mouse(int button, int x, int y, t_fractal_wc *data)
{
    double mouse_re = (x - 400) / (200.0 * data->zoom) + data->x_offset;
    double mouse_im = (y - 400) / (200.0 * data->zoom) + data->y_offset;

    if (button == MOUSE_SCROLL_UP)
    {
        data->zoom *= 1.1;
        data->x_offset = mouse_re - ((mouse_re - data->x_offset) / 1.1);
        data->y_offset = mouse_im - ((mouse_im - data->y_offset) / 1.1);
    }
    else if (button == MOUSE_SCROLL_DOWN)
    {
        data->zoom /= 1.1;
        data->x_offset = mouse_re - ((mouse_re - data->x_offset) * 1.1);
        data->y_offset = mouse_im - ((mouse_im - data->y_offset) * 1.1);
    }

    fractals_render(data);
    return (0);
}
