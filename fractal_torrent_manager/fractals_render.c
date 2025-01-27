#include "fractal_tm.h"

void fractals_render(t_fractal_wc *data)
{
    if (data->fractal_type == JULIA)
        julia_set(data);
    else if (data->fractal_type == MANDELBROT)
        mandelbrot_set(data);
    else if (data->fractal_type == Tricorn)
        unique_set(data);

    mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
}
