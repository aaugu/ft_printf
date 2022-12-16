/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <aaugu@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:35:39 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/16 16:01:01 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//int	ft_print_ptr(unsigned long int n);

int	ft_print_p(unsigned long int n)
{
	int	count;

	if (!n)
	{
		count = ft_print_s("(nil)");
		return (count);
	}
	count = ft_print_s("0x");
	count += ft_print_x('x', n);
	return (count);
}
