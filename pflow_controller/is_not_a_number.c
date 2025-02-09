/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_not_a_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:59:26 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 20:08:41 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	is_not_a_number(void)
{
	pfc_printer("Error Detected !", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Invalid Param [NOT NUMBER] ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Process Killed ...", (int)PERROR_TO_OPENED_TTY);
	exit (BADSTATE);
}
