#include "fractal_tm.h"

void init_mlx_connection_to_X11(t_fractal_wc *data)
{
    data->mlx = mlx_init();
    if (!data->mlx)
        init_error();
    data->win = mlx_new_window(data->mlx, 800, 800, "Fract'ol");
    if (!data->win)
    {
        free(data->mlx);
        mlx_fails_to_create_new_window();
    }
    data->img = mlx_new_image(data->mlx, 800, 800);
    data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel,
                                   &data->line_length, &data->endian);

    data->zoom = 1.0;
    data->x_offset = 0.0;
    data->y_offset = 0.0;

    // Initial rendering
    fractals_render(data);

    // Event handling
    mlx_key_hook(data->win, handle_keys, data);
    mlx_mouse_hook(data->win, handle_mouse, data);
    mlx_hook(data->win, 17, 0, handle_close, data); // Handle window close
    mlx_loop(data->mlx);
}