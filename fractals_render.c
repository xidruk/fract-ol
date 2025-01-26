#include "g_header.h"

void set_pixel(t_fractal_wc *data, int x, int y, int color)
{
    if (x >= 0 && x < 800 && y >= 0 && y < 800)
    {
        char *dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
        *(unsigned int *)dst = color;
    }
}

int create_color(int r, int g, int b)
{
    return ((r & 0xFF) << 16) | ((g & 0xFF) << 8) | (b & 0xFF);
}

void fractals_render(t_fractal_wc *data)
{
    int x, y, iter;
    double zx, zy, cx, cy, temp;

    x = 0;
    while (x < 800)
    {
        y = 0;
        while (y < 800)
        {
            if (data->fractal_type == JULIA)
            {
                zx = (x - 400) / (200.0 * data->zoom) + data->x_offset;
                zy = (y - 400) / (200.0 * data->zoom) + data->y_offset;
                cx = data->julia_re;
                cy = data->julia_im;
            }
            else if (data->fractal_type == MANDELBROT)
            {
                cx = (x - 400) / (200.0 * data->zoom) + data->x_offset;
                cy = (y - 400) / (200.0 * data->zoom) + data->y_offset;
                zx = 0;
                zy = 0;
            }
            else if (data->fractal_type == APOLLONIAN)
            {
                zx = (x - 400) / (200.0 * data->zoom) + data->x_offset;
                zy = (y - 400) / (200.0 * data->zoom) + data->y_offset;
                iter = 0;
                while (zx * zx + zy * zy < 4 && iter < data->max_iter)
                {
                    temp = zx * zx - zy * zy + 1.5 * cos(zy) - 1.5 * sin(zx);
                    zy = fabs(2 * zx * zy) + 0.1;
                    zx = fabs(temp) - 0.1;
                    iter++;
                }
                int color = create_color(iter * 255 / data->max_iter, iter * 10, iter * 5);
                set_pixel(data, x, y, color);
                y++;
                continue; // Skip the rest for APOLLONIAN
            }

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
    mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
}