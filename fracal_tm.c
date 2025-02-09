/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fracal_tm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:37:02 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/28 23:05:18 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_header.h"

void	check_julia(int argc, char **argv, t_fractal_wc *data)
{
	if (julia_validator(argc, argv))
	{
		data->fractal_type = JULIA;
		if (argc > 2)
			data->julia_re = c_to_float(argv[2]);
		else
			data->julia_re = -0.7;
		if (argc > 3)
			data->julia_im = c_to_float(argv[3]);
		else
			data->julia_im = 0.27015;
	}
	else
		julia_check_fails();
}

int	matching_check(char *data_0, char *data_1)
{
	int	_index;

	_index = 0;
	while (data_0[_index] && data_1[_index])
	{
		if (data_0[_index] != data_1[_index])
			return (0);
		_index++;
	}
	return (data_0[_index] == '\0' && data_1[_index] == '\0');
}

int	check_params(t_fractal_wc *data, int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (matching_check(argv[1], "Mandelbrot"))
	{
		if (mandelbrot_validator(argc, argv))
			data->fractal_type = MANDELBROT;
		else
			mandelbrot_check_fails();
	}
	else if (matching_check(argv[1], "Julia"))
	{
		check_julia(argc, argv, data);
	}
	else
		return (0);
	data->max_iter = 100;
	return (1);
}

int	main(int argc, char **argv)
{
	t_fractal_wc	data;

	traces_printer("Validate Parameters ...");
	if (!check_params(&data, argc, argv))
	{
		traces_printer("Validations Fails ... ");
		proc_map();
		invalid_param();
	}
	traces_printer("Validations Complete Successfully ...");
	init_mlx_connection_to_x_server(&data);
	return (0);
}
