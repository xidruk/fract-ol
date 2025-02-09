/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unknown_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:45:19 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 20:46:15 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	unknown_flag(void)
{
	pfc_printer("Unknown Flag ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Process Killed ...", (int)PERROR_TO_OPENED_TTY);
	exit(BADSTATE);
}
