/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaverrmaj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:32:51 by bcoenon           #+#    #+#             */
/*   Updated: 2021/11/17 23:37:45 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_statushexaverrmaj(int n)
{
	int total;

	total = 0;

	while (n > 0)
	{
		total++;
		n = n / 16;
	}
	return (total);
}

int    ft_hexaverrmaj(unsigned int n)
{
    char    *stock = "0123456789ABCDEF";

	if (n <= 16)
		ft_putchar(stock[n]);
	else if (n > 16)
	{
		ft_hexa(n / 16);
		ft_hexa(n % 16);
	}
	return(ft_statushexaverrmaj(n));
}