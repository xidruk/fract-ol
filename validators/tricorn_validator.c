/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tricorn_validator.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:56:50 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/28 22:57:35 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validators_h.h"

int	tricorn_validator(int argc, char **argv)
{
	if (matching_check(argv[1], "Tricorn") && argc == 2)
		return (1);
	if (matching_check(argv[1], "Tricorn") && argc > 2)
		return (0);
	return (0);
}
