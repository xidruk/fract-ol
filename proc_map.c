/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proc_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:24:17 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/28 22:40:20 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_header.h"

/*
$
Error Detected !
The Arguments You Pass To The Program Are Invalid !
<------------------------------------------------->
< What Is Fractals And Fractol Project ?          >
< For Learn About Fractals Search On Google !     >
< For Fractol Proejct It's A Implementation Of 
Fractals On A GUI Using MLX That Manage The 
Connection To The X Server On Linux And Manage The
Imgae Bugger (Front And The Back Buffers)         >
<------------------------------------------------->
How It Works ? 
After Run The Make Command Run This =>
./fractol <The Name Of The Fractal> + 2 Additional Parameters For Julia
There Are 3 Fractals < Julia , Mandelbrot >
For Julia You Should Add Two Additional Parametry Number For The Equation .
<------------------------------------------------->
Note => By Default We Use This Values For Julia => -0.7 0.27015
This Is A List Of The Valid Commands To Run =>
./fractol Julia 
./fractol Julia <re_part> <im_part>
./fractol Mandelbrot
$
*/

void	proc_map_printer(char *data_to_print)
{
	int	_index;

	_index = 0;
	if (!data_to_print)
		return ;
	while (data_to_print[_index])
	{
		if (data_to_print[_index] == '$')
		{
			_index++;
			while (data_to_print[_index] && data_to_print[_index] != '$')
			{
				write(2, &data_to_print[_index], 1);
				_index++;
			}
			if (data_to_print[_index] == '$')
				break ;
		}
		_index++;
	}
	write (2, "\n", 1);
}

void	proc_map(void)
{
	char	*buffer;
	int		file_ds;
	ssize_t	readed_bytes;

	file_ds = open("proc_map.c", O_RDONLY);
	if (file_ds < 0)
		invalid_file_descriptor();
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		buffer_allocation_faisl_with_fd(file_ds);
	readed_bytes = read(file_ds, buffer, (size_t)BUFFER_SIZE);
	if (readed_bytes < 0)
	{
		free(buffer);
		read_func_fails(file_ds);
	}
	buffer[BUFFER_SIZE] = '\0';
	proc_map_printer(buffer);
	free(buffer);
	close(file_ds);
}
