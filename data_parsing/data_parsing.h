/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_parsing.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 02:44:37 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/29 02:46:18 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_PARSING_H
# define DATA_PARSING_H

//===> includes 

# include "../pflow_controller/debugger.h"

//===> functions for data parsing 

int	is_digit(char c);
int	is_decimal_point(char c);
int	is_minus_sign(char c);
int	is_number(char c);
int	has_valid_minus_sign(char *data);
int	validate_is_float(char *data);
int	check_the_stupid_bug(char *data);
int	validate_number(char *data);

#endif
