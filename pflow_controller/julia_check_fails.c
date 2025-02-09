/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_check_fails.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:27:46 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 20:44:43 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	julia_check_fails(void)
{
	pfc_printer("Error Detected ! ", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Julia Check Fails !", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Valid Julia Commands ==>", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("./fractol Julia", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("./fractol Julia <re_p> <im_p>", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Process Killer ...", (int)PERROR_TO_OPENED_TTY);
	exit(BADSTATE);
}
