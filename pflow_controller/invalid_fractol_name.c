/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalid_fractol_name.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:07:34 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 19:07:36 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	invalid_fractol_name(void)
{
	pfc_printer("Error Detected ... ", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Invalid Fractal Name ... ", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Process Killed ...", (int)PERROR_TO_OPENED_TTY);
	exit(BADSTATE);
}
