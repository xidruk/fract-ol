/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_window_with_close_button.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:19:31 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 19:51:14 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	destroy_window_with_close_button(void)
{
	pfc_printer("Close Butthon Clicked ...", (int)PDATA_TO_OPENED_TTY);
	pfc_printer("Destroy The Window ...", (int)PDATA_TO_OPENED_TTY);
	pfc_printer("Clean Up The Connection  ...", (int)PDATA_TO_OPENED_TTY);
	pfc_printer("Process Killed ... ", (int)PDATA_TO_OPENED_TTY);
	exit(GOOD_STATE);
}
