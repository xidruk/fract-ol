/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot_validator.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:55:27 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/28 22:56:32 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validators_h.h"

int	mandelbrot_validator(int argc, char **argv)
{
	if (matching_check(argv[1], "Mandelbrot") && argc == 2)
		return (1);
	if (matching_check(argv[1], "Mandelbrot") && argc > 2)
		return (0);
	return (0);
}
