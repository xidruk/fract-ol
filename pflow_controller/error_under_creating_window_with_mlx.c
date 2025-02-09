/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_under_creating_window_with_mlx.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:21:10 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 20:26:46 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debugger.h"

void	mlx_fails_to_create_new_window(void)
{
	pfc_printer("Error Detected !", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("MLX Fails To Create Window ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Clean Up Connection ... ", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Free Allocated Memory ...", (int)PERROR_TO_OPENED_TTY);
	pfc_printer("Process Killed ...", (int)PERROR_TO_OPENED_TTY);
	exit(GOOD_STATE);
}
