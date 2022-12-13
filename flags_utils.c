/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:41:06 by aaugu             #+#    #+#             */
/*   Updated: 2022/12/13 11:04:38 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_specs	init_specifiers(void)
{
	t_flags	specs;

	specs.precision_width = -1;
	specs.pad_left = -1;
	specs.zero = 0;
	specs.hash = 0;
	specs.space = 0;
	specs.plus = 0;
	return (specs);
}
