/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_header.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:56:03 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/28 22:38:51 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef G_HEADER_H
# define G_HEADER_H

//===> libraries 
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "pflow_controller/debugger.h"
# include "data_parsing/data_parsing.h"
# include "types_swapper/types_swapper.h"
# include "fractal_torrent_manager/fractal_tm.h"
# include "validators/validators_h.h"
# include "pflow_tracer/pft_header.h"
# include <math.h>
# include "mlx.h"
# include <fcntl.h>

//===> Macros

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define BUFFER_SIZE 99999

//===> parser functions
int		matching_check(char *data_0, char *data_1);
int		validate_number(char *data);

//===> process_maper function 

void	proc_map(void);

#endif
