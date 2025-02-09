/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_to_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:12:11 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/28 23:13:38 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types_swapper.h"

int	c_to_int(char *data)
{
	int	_index;
	int	result;
	int	sign;

	_index = 0;
	result = 0;
	sign = 1;
	validate_number(data);
	if (data[_index] == '-')
	{
		sign = -1;
		_index++;
	}
	while (data[_index])
	{
		result = result * 10 + (data[_index] - '0');
		_index++;
	}
	return (result * sign);
}
