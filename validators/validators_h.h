/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators_h.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:43:28 by kbarkan           #+#    #+#             */
/*   Updated: 2025/01/28 22:47:05 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATORS_H_H
# define VALIDATORS_H_H

//==> includes 
# include "../g_header.h"
# include "../data_parsing/data_parsing.h"

//===> validators funcs 
int	julia_validator(int argc, char **argv);
int	mandelbrot_validator(int argc, char **argv);
int	tricorn_validator(int argc, char **argv);

#endif
