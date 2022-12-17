/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <aaugu@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:35:18 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/17 13:16:07 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

/* ---------------	PRINTF	--------------- */
int	ft_printf(const char *input, ...);
int	ft_parse_input(const char *input, va_list args);
int	ft_parse_flags(char c, va_list args);

/* ---------------	`C`HAR	--------------- */
int	ft_print_c(int c);

/* ---------------	`S`TRING	--------------- */
int	ft_print_s(char *str);

/* ---------------	`P`OINTER	--------------- */
int	ft_print_p(long unsigned int n);

/* ---------------	`D`ECIMAL & `I`NTEGER	--------------- */
int	ft_print_int(int n);

/* ---------------	`U`NSIGNED DECIMAL	--------------- */
int	ft_print_uns_int(unsigned int n);

/* ---------------	HE`X`ADECIMAL	--------------- */
int	ft_print_x(char c, long unsigned int n);

#endif
