/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tricorn_check_fails.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:39:14 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 19:50:16 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	tricorn_check_fails(void)
{
	pfc_printer("Error Detected", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Tricorn Have One Param ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Check The Valid Param : ", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("./fractol Tricorn ", (int)PERROR_TO_OPENED_TTY);
	exit(BADSTATE);
}
