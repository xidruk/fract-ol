#include "g_header.h"

// int validate_param(char *s1, char *s2)
// {
//     int  _index;

//     _index = 0;
//     while (s1[_index] && s2[_index])
//     {
//         if (s1[_index] != s2[_index])
//             return (0);
//         _index++;
//     }
//     return (1);
// }


// int check_julia_param(char **argv)
// {
//     int _index;

//     _index = 2; // set the index to 2 to make a offset between the julia param and the next param
//     while (argv[_index])
//     {
//         validate_number(argv[_index]);
//         printer(argv[_index]);
//         _index++;
//     }
//     return (1);
// }

// int main(int argc, char **argv)
// {
//     if (argc < 2)
//     {
//         printf("Usage: %s <argument>\n", argv[0]);
//         return 1;
//     }
    
//     if (validate_param(argv[1], "julia"))
//     {
//         printer("julia set ...");
//         check_julia_param(argv);
//     }
//     else if (validate_param(argv[1], "mandelbrot"))
//     {
//         printf("mandelbrotx1");
//     }
//     else
//         invalid_fractol_name();
//     return 0;
// }


int handle_close(t_fractal_wc *data)
{
    mlx_destroy_window(data->mlx, data->win);
    exit(0); // Clean exit
    return (0);
}


int main(int argc, char **argv)
{
    t_fractal_wc data;

    // Validate parameters and set fractal type
    if (!fractals_base(&data, argc, argv))
    {
        printf("Usage: ./fractol <Mandelbrot | Julia> [Julia real] [Julia imag]\n");
        return (1);
    }

    // Initialize MiniLibX and create window
    data.mlx = mlx_init();
    data.win = mlx_new_window(data.mlx, W_HEIGHT, W_HEIGHT, "Fract'ol");
    data.img = mlx_new_image(data.mlx, W_HEIGHT, W_HEIGHT);
    data.addr = mlx_get_data_addr(data.img, &data.bits_per_pixel,
                                  &data.line_length, &data.endian);

    // Initial zoom and offsets
    data.zoom = 1.0;
    data.x_offset = 0.0;
    data.y_offset = 0.0;

    // Render the initial fractal
    fractals_render(&data);

    // Event handling
    mlx_key_hook(data.win, handle_keys, &data);
    mlx_mouse_hook(data.win, handle_mouse, &data);
    mlx_hook(data.win, 17, 0, handle_close, &data);
    mlx_loop(data.mlx);

    return (0);
}
