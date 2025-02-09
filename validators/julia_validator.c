/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_validator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:48:13 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/28 22:50:54 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validators_h.h"

//===> Valid Cases
// case 1 > ./fractol Julia
// case 2 > ./fractol Julia <re_part> <im_part>
//===> Bad Cases
// case 3 > ./fractol Julia + 1 param
// case 4 > ./fractol Julia +  more than 2 other params

int	check_jcase1(int argc, char **argv)
{
	return (matching_check(argv[1], "Julia") && argc == 2);
}

int	check_jcase2(int argc, char **argv)
{
	if (matching_check(argv[1], "Julia") && argc == 4)
		return (validate_number(argv[2]) && validate_number(argv[3]));
	return (0);
}

int	check_jcase3(int argc, char **argv)
{
	return (matching_check(argv[1], "Julia") && argc == 3);
}

int	check_jcase4(int argc, char **argv)
{
	return (matching_check(argv[1], "Julia") && argc > 4);
}

int	julia_validator(int argc, char **argv)
{
	if (check_jcase1(argc, argv))
		return (1);
	else if (check_jcase2(argc, argv))
		return (1);
	else if (check_jcase3(argc, argv))
		return (0);
	else if (check_jcase4(argc, argv))
		return (0);
	else
		return (0);
	return (0);
}
