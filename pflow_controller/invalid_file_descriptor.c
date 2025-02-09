/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalid_file_descriptor.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 00:01:10 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 00:06:21 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	invalid_file_descriptor(void)
{
	pfc_printer("The Open Function Fails ...", PERROR_TO_OPENED_TTY);
	pfc_printer("Invalid File Descriptor ...", PERROR_TO_OPENED_TTY);
	pfc_printer("Process Killed ...", PERROR_TO_OPENED_TTY);
	exit(BADSTATE);
}
