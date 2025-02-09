/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_swaper_null_param.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:12:03 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 20:15:33 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	types_swaper_null_param(void)
{
	pfc_printer("Error Detected ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("THE PASSED PARAM IS NULL ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Process Killed ...", (int)PERROR_TO_OPENED_TTY);
	exit(BADSTATE);
}
