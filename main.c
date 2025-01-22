#include <mlx.h>
#include "g_header.h"


// Define window tools
#define W_WIDTH 1000
#define W_HEIGHT 800

// Key press codes 
#define ESC_KEYCODE 65307

typedef struct s_mlx_data {
    void *mlx;
    void *win;
} t_mlx_data;

int key_press(int keycode, t_mlx_data *data)
{
    if (keycode == ESC_KEYCODE)
    {
        mlx_destroy_window(data->mlx, data->win);
        // Assuming mlx_destroy_display is available
        mlx_destroy_display(data->mlx);
        exit(0);
    }
    return (0);
}

int close_window(t_mlx_data *data)
{
    mlx_destroy_window(data->mlx, data->win);
    mlx_destroy_display(data->mlx);  // If available on your system
    exit(0);
}


int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Need More args");
    }

    t_mlx_data data;

    data.mlx = mlx_init();
    if (data.mlx)
    {
        data.win = mlx_new_window(data.mlx, W_WIDTH, W_HEIGHT, "Fract-ol");
        if (data.win == NULL)
        {
            printf("Error creating window ...\n");
            exit(1);
        }
    }
    else
    {
        printf("Error in MLX init ...\n");
        exit(1);
    }

    mlx_key_hook(data.win, key_press, &data);
    mlx_hook(data.win, 17, 0, close_window, &data);
    mlx_loop(data.mlx);
    
    return (0);
}