/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:32:03 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/13 16:24:02 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

typedef int	t_bool;

/* ---------------	SPECIFIERS	--------------- */
typedef struct s_specs
{
	char	format;
	int		precision_width;
	int		min_width;
	t_bool	pad_left;
	t_bool	zero;
	t_bool	hash;
	t_bool	space;
	t_bool	plus;
}				t_specs;

t_specs	ft_init_specifiers(void);

/* ---------------	PRINTF	--------------- */
int		ft_printf(const char *input, ...);

/* ---------------	PRINTF UTILS	--------------- */
int		ft_is_flag(char c);
int		ft_is_format(char c);

/* ---------------	`C`HAR	--------------- */
int		print_c(char c);

/* ---------------	`S`TRING	--------------- */
int		print_s(char *str);

/* ---------------	`P`OINTER	--------------- */
int		print_p(void *ptr);

/* ---------------	`D`ECIMAL & `I`NTEGER	--------------- */
int		print_d(void);

/* ---------------	`U`NSIGNED DECIMAL	--------------- */
int		print_u(void);

/* ---------------	HE`X`ADECIMAL	--------------- */
int		print_x(void);

#endif