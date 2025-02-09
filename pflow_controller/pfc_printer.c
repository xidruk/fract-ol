/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pfc_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 00:07:04 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 18:26:19 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	print_as_a_error(char *data)
{
	int	_index;

	_index = 0;
	while (data[_index])
	{
		write(2, &data[_index], 1);
		_index++;
	}
}

void	print_simple_data(char *data)
{
	int	_index;

	_index = 0;
	while (data[_index])
	{
		write(1, &data[_index], 1);
		_index++;
	}
}

void	pfc_printer(char *data, int type_of_data)
{
	if (!data)
	{
		write((int)PERROR_TO_OPENED_TTY, "No Data Given To Print \n", 24);
		exit(BADSTATE);
	}
	if (type_of_data == (int)PERROR_TO_OPENED_TTY)
	{
		print_as_a_error(data);
		write((int)PERROR_TO_OPENED_TTY, "\n", 1);
	}
	if (type_of_data == (int)PDATA_TO_OPENED_TTY)
	{
		print_simple_data(data);
		write((int)PDATA_TO_OPENED_TTY, "\n", 1);
	}
}
