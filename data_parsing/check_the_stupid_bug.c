/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_the_stupid_bug.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 02:48:55 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/29 02:49:57 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data_parsing.h"

int	check_the_stupid_bug(char *data)
{
	int	_index;

	_index = 0;
	if (data[_index] == '.' && is_digit(data[_index + 1]))
		is_not_a_number();
	while (data[_index])
		_index++;
	if (data[_index - 1] == '.' && data[_index] == '\0')
		is_not_a_number();
	return (1);
}
