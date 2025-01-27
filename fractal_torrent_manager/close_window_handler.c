#include "fractal_tm.h"

int handle_close(t_fractal_wc *data)
{
    mlx_destroy_window(data->mlx, data->win);
    mlx_destroy_display(data->mlx);
    destroy_window_with_close_button();
    return (0);
}