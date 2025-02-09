/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_to_float.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:16:00 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/29 02:37:03 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types_swapper.h"

float	swap_integer_part(char *data, int *_index, float *factor)
{
	float	result;

	result = 0.0;
	if (data[*_index] == '-')
	{
		*factor = -1.0;
		(*_index)++;
	}
	while (data[*_index] && data[*_index] != '.')
	{
		result = result * 10 + (data[*_index] - '0');
		(*_index)++;
	}
	return (result);
}

float	swap_fractional_part(char *data, int *_index, float result)
{
	float	divisor;

	divisor = 10.0;
	if (data[*_index] == '.')
	{
		(*_index)++;
		while (data[*_index])
		{
			result += (data[*_index] - '0') / divisor;
			divisor *= 10.0;
			(*_index)++;
		}
	}
	return (result);
}

float	c_to_float(char *data)
{
	float	result;
	float	factor;
	int		_index;

	_index = 0;
	result = 0.0;
	factor = 1.0;
	validate_number(data);
	result = swap_integer_part(data, &_index, &factor);
	result = swap_fractional_part(data, &_index, result);
	return (result * factor);
}
