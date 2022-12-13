/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:57:02 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/13 11:27:32 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
The printf() function write output to stdout, the standard output stream.
Returns the number of characters printed.
*/

int	parse_input(const char *input, va_list args);
int	decode(const char *input, va_list args, int i);

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		count;

	if (!input)
		return (0);
	va_start(args, input);
	count = parse_input(input, args);
	va_end(args);
	return (count);
}

int	parse_input(const char *input, va_list args)
{
	int			count;
	static int	i;

	count = 0;
	while (input[i])
	{
		if (input[i] == '%')
			count += decode(input, args, i);
		else
		{
			count += print_c(input[i]);
			i++;
		}
	}
	return (count);
}

int	decode(const char *input, va_list args, int i)
{
	t_specs	specs;
	int		count;

	count = 0;
	specs = init_specifiers();
	if (state_machine(input, i, specs))
		count = print_result(specs, args);
	return (count);
}
