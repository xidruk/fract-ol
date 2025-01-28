/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traces_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:55:12 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/28 17:22:16 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pft_header.h"

// the function print traces to the used tty 

void	traces_printer(char *data)
{
	int	_index;

	_index = 0;
	while (data[_index])
	{
		write(1, &data[_index], 1);
		_index++;
	}
	write(1, "\n", 1);
}
