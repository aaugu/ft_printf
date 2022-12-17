/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <aaugu@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:35:56 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/17 13:16:40 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uns_int(unsigned int n)
{
	int					count;

	count = 0;
	if (n >= 10)
	{
		count += ft_print_int(n / 10);
		count += ft_print_int(n % 10);
	}
	else if (n < 10)
		count += ft_print_c(n + 48);
	return (count);
}
