#include "g_header.h"


int fractals_base(t_fractal_wc *data, int argc, char **argv)
{
    if (argc < 2)
        return (0);

    if (strcmp(argv[1], "Mandelbrot") == 0)
        data->fractal_type = MANDELBROT;
    else if (strcmp(argv[1], "Julia") == 0)
    {
        data->fractal_type = JULIA;
        if (argc > 2)
            data->julia_re = atof(argv[2]);
        else
            data->julia_re = -0.7;

        if (argc > 3)
            data->julia_im = atof(argv[3]);
        else
            data->julia_im = 0.27015;
    }
    else if (strcmp(argv[1], "Apollonian") == 0)
    {
        data->fractal_type = APOLLONIAN;
    }
    else
    {
        return (0);
    }

    data->max_iter = 50; // Default iterations
    return (1);
}