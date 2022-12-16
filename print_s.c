/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <aaugu@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:35:45 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/16 16:00:43 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		count += ft_print_s("(null)");
		return (count);
	}
	while (*str)
	{
		count += ft_print_c(*str);
		str++;
	}
	return (count);
}
