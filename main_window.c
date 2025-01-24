#include <mlx.h>
#include "g_header.h"

// Function to handle key presses
int key_press(int keycode, t_mlx_data *data)
{
    if (keycode == ESC_KEYCODE)
    {
        mlx_destroy_window(data->mlx, data->win);
        mlx_destroy_display(data->mlx);
        free(data->mlx);
        destroy_window_with_esc();
    }
    return (0);
}

int close_window(t_mlx_data *data)
{
    mlx_destroy_window(data->mlx, data->win);
    mlx_destroy_display(data->mlx);
    free(data->mlx);
    destroy_window_with_close_button();
    return (0);
}

// Centralized function to control window operations
int window_control(int flag)
{
    static t_mlx_data data;

    if (flag == CREATE_WINDOW)
    {
        data.mlx = mlx_init();
        if (!data.mlx)
            init_error();
        data.win = mlx_new_window(data.mlx, W_WIDTH, W_HEIGHT, "Fract-ol");
        if (!data.win)
        {
            free(data.mlx);
            error_under_creating_window_with_mlx();
        }
        mlx_key_hook(data.win, key_press, &data);
        mlx_hook(data.win, 17, 0, close_window, &data);
        mlx_loop(data.mlx);
    }
    else if (flag == CLOSE_WINDOW)
    {
        close_window(&data);
    }
    else
        unknown_flag();

    return (1);
}

int main(void)
{
    if (window_control(CREATE_WINDOW))
    {
        deb_printer("create window ...", PDATA_TO_OPENED_TTY);
    }

    return (0);
}