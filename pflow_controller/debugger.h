/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debugger.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:49:34 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/30 18:23:01 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUGGER_H
# define DEBUGGER_H

//===> include libraries

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//===> exit Flags

# define BADSTATE 1
# define GOOD_STATE 0

//==> program flow controlling functions

void	pfc_printer(char *data, int type_of_data);
void	is_not_a_number(void);
void	invalid_fractol_name(void);
void	destroy_window_with_esc(void);
void	destroy_window_with_close_button(void);
void	init_error(void);
void	mlx_fails_to_create_new_window(void);
void	unknown_flag(void);
void	types_swaper_null_param(void);
void	invalid_param(void);
void	buffer_allocation_faisl_with_fd(int file_ds);
void	invalid_file_descriptor(void);
void	read_func_fails(int fd);
void	julia_check_fails(void);
void	mandelbrot_check_fails(void);
void	tricorn_check_fails(void);

//==> Macros Define The Valid FD To Print The Given Data 

# define PERROR_TO_OPENED_TTY 2
# define PDATA_TO_OPENED_TTY 1

#endif
