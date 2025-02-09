/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:46:33 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 21:01:51 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	init_error(void)
{
	pfc_printer("Error Detected !", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Connection Fails To X server ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Verify Your Arch [X11S]", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Run Process Again ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Process Killed ...", (int)PERROR_TO_OPENED_TTY);
	exit(BADSTATE);
}
