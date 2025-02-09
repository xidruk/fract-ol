/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot_check_fails.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:02:12 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 21:09:21 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	mandelbrot_check_fails(void)
{
	pfc_printer("Error Detected !", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Unexpected Args For Mandelbrot !", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("The Valid Args =>", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("./fractol Mandelbrot", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Process Killed ...", (int)PERROR_TO_OPENED_TTY);
	exit(BADSTATE);
}
