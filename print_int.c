/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <aaugu@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:35:32 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/16 16:43:44 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_print_c('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_print_int(n / 10);
		ft_print_int(n % 10);
	}
	else if (n < 10)
		count += ft_print_c(n + 48);
	return (count);
}
