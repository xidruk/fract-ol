#include "fractal_tm.h"

void julia_set(t_fractal_wc *data)
{
    int x, y, iter;
    double zx, zy, cx, cy, temp;

    cx = data->julia_re;
    cy = data->julia_im;

    x = 0;
    while (x < 800)
    {
        y = 0;
        while (y < 800)
        {
            zx = (x - 400) / (200.0 * data->zoom) + data->x_offset;
            zy = (y - 400) / (200.0 * data->zoom) + data->y_offset;
            iter = 0;

            while (zx * zx + zy * zy < 4 && iter < data->max_iter)
            {
                temp = zx * zx - zy * zy + cx;
                zy = 2 * zx * zy + cy;
                zx = temp;
                iter++;
            }

            int color = create_color(iter * 255 / data->max_iter, iter * 5, iter * 10);
            set_pixel(data, x, y, color);
            y++;
        }
        x++;
    }
}
