/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 03:05:33 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/29 03:07:07 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data_parsing.h"

int	validate_number(char *data)
{
	int	_index;

	_index = 0;
	if (data[0] == '-')
	{
		_index++;
		if (!is_digit(data[_index]))
			is_not_a_number();
	}
	while (data[_index])
	{
		if (!is_number(data[_index]))
			is_not_a_number();
		_index++;
	}
	_index = 0;
	if (!validate_is_float(data))
		is_not_a_number();
	check_the_stupid_bug(data);
	return (1);
}
