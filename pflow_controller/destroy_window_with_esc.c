/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_window_with_esc.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:52:39 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 19:55:49 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	destroy_window_with_esc(void)
{
	pfc_printer("Destroy The Window By ESC Key ...", (int)PDATA_TO_OPENED_TTY);
	pfc_printer("Clean Up The Connection ...", (int)PDATA_TO_OPENED_TTY);
	pfc_printer("Process Killed ...", (int)PDATA_TO_OPENED_TTY);
	exit(GOOD_STATE);
}
