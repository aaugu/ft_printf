/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <aaugu@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:35:56 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/16 16:42:45 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uns_int(long unsigned int n)
{
	long unsigned int	nb;
	int					count;

	count = 0;
	nb = (long unsigned int)n;
	if (nb >= 10)
	{
		ft_print_int(nb / 10);
		ft_print_int(nb % 10);
	}
	else if (nb < 10)
		count += ft_print_c(nb + 48);
	return (count);
}
