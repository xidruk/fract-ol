#include "fractal_tm.h"

void unique_set(t_fractal_wc *data)
{
    int x, y, iter;
    double zx, zy, cx, cy, temp;

    x = 0;
    while (x < 800)
    {
        y = 0;
        while (y < 800)
        {
            // Map pixel coordinates to complex plane
            cx = (x - 400) / (200.0 * data->zoom) + data->x_offset;
            cy = (y - 400) / (200.0 * data->zoom) + data->y_offset;
            zx = 0;
            zy = 0;
            iter = 0;

            // Tricorn iteration: z = conj(z)^2 + c
            while (zx * zx + zy * zy < 4 && iter < data->max_iter)
            {
                temp = zx * zx - zy * zy + cx; // Real part
                zy = -2 * zx * zy + cy;       // Imaginary part (note the negation)
                zx = temp;
                iter++;
            }

            // Color the pixel based on the number of iterations
            int color = create_color(iter * 255 / data->max_iter, iter * 5, iter * 10);
            set_pixel(data, x, y, color);
            y++;
        }
        x++;
    }
}
