/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 03:04:02 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/29 03:04:13 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data_parsing.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
