/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:57:02 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/12 14:48:03 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
The printf() function write output to stdout, the standard output stream.
Returns the number of characters printed.
*/

int	parse_args(const char *input, va_list args);
int	parse_flags(const char *input, t_flags flags, va_list args, int position);

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
	int		i;

	flags = init_flags(flags);
	i = 0;
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1] != '\0')
		{
			i = parse_flags(input, args, flags, i);
			while (is_specifier(intput[i]) == 1)
				i++;
		}
		else
		{
			count = print_c(input[i]);
			i++;
		}
	}
	return (count);
}

int	parse_flags(const char *input, t_flags flags, va_list args, int position)
{
	int		count;

	count = 0;
	while (input[position])
	{
		if (input[position] == '-')
			// A faire
		if (input[position] == '0')
			// A faire
		if (input[position] == '.')
			// A faire
		if (input[position] == '#')
			// A faire
		if (input[position] == ' ')
			// A faire
		if (input[position] == '%')
			// A faire
		if (ft_isdigit(input[position]))
			// A faire
		position++;
	}
	return (position);
}

