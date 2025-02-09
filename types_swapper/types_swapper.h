/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_swapper.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:09:34 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/28 23:11:23 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_SWAPPER_H
# define TYPES_SWAPPER_H

//===> includes libraries

# include "../pflow_controller/debugger.h"
# include "../data_parsing/data_parsing.h"

//===> types swaper functions 
int		c_to_int(char *data);
float	c_to_float(char *data);

#endif
