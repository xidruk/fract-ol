/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_allocation_faisl_with_fd.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:55:43 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 00:00:51 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	buffer_allocation_faisl_with_fd(int file_ds)
{
	pfc_printer("Error Detected !", PERROR_TO_OPENED_TTY);
	pfc_printer("Malloc Fails To Allocate The Buffer !", PERROR_TO_OPENED_TTY);
	pfc_printer("Close The Opened File Descriptor ...", PERROR_TO_OPENED_TTY);
	pfc_printer("Process Kiled ...", PERROR_TO_OPENED_TTY);
	close(file_ds);
	exit(BADSTATE);
}
