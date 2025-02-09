/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reaf_func_fails.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:08:15 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 19:14:21 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	read_func_fails(int fd)
{
	pfc_printer("The Read Function Fails ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Free Allocated Memory ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Closing The File Descriptor ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Process Killed ...", (int)PERROR_TO_OPENED_TTY);
	close(fd);
	exit(BADSTATE);
}
