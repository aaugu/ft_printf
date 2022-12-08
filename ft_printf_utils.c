/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:42:50 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/08 10:38:17 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_base(int n, int base, char m)
{
	long int	nb;

	nb = (long int)n;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = -nb;
	}
	printf("%d\n", (int)nb);
	if (nb >= base)
	{
		ft_putnbr_base(nb / base, 1, 0);
		ft_putnbr_base(nb % base, 1, 0);
	}
	else if (nb >= 0 && nb < base)
		ft_putchar_base(nb, base, m);
}

void	ft_putchar_base(int nb, int base, char m)
{
	char		*hexa;

	hexa = NULL;
	if (m != 'm' || m != 'M')
		return ;
	if (base == 10)
		ft_putchar_fd(nb + 48, 1);
	else if (base == 16)
	{
		if (m == 'm')
			hexa = ft_strdup("0123456789abcdef");
		else
			hexa = ft_strdup("0123456789ABCDEF");
		ft_putchar_fd(hexa[nb], 1);
		free(hexa);
	}
}

// int	main(void)
// {
// 	ft_putnbr_base(42, 16, 'm');
// 	return (0);
// }
