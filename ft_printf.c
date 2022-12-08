/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:57:02 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/08 10:33:54 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char			c = 'c';
	char*			s = "Hello World";
	int				d = -142;
	int				i = 142;
	unsigned int	u = -42;

	printf("c : %15c\n", c);
	printf("s : %15s\n", s);
	printf("p : %15p\n", s);
	printf("d : %d\n", d);
	printf("i : % -15i\n", i);
	printf("u : %15u\n", u);
	printf("x : %x\n", d);
	printf("X : %15X\n", i);
	printf("%#%\n");
	return (0);
}
