/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:57:02 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/12 13:54:17 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
The printf() function write output to stdout, the standard output stream.
Returns the number of characters printed.
*/

int	parse_args(const char *input, va_list args);

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		count;

	if (!input)
		return (0);
	va_start(args, input);
	count = parse_args(input, args);
	va_end(args);
	return (count);
}

int	parse_args(const char *input, va_list args)
{
	t_flags	flags;
	int		count;

	flags = init_flags(flags);
}
