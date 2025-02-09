/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx_connection_to_x11.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:46:18 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 21:50:43 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractal_tm.h"

void	init_mlx_connection_to_x_server(t_fractal_wc *data)
{
	traces_printer("Init Connection To X Server ...");
	data->mlx = mlx_init();
	if (!data->mlx)
		init_error();
	data->win = mlx_new_window(data->mlx, 800, 800, "Fract'ol");
	traces_printer("Create A New Window With Mlx ...");
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
	fractals_render(data);
	mlx_key_hook(data->win, handle_keys, data);
	mlx_mouse_hook(data->win, handle_mouse, data);
	mlx_hook(data->win, 17, 0, handle_close, data);
	mlx_loop(data->mlx);
}
