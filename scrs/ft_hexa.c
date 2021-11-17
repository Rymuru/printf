/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:48:47 by bcoenon           #+#    #+#             */
/*   Updated: 2021/11/17 21:17:54 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_statushexa(int n)
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

int    ft_hexa(unsigned int n)
{
    int     i;
    int     total;
    char    *stock = "0123456789abcdef";

	if (n >= 0 && n <= 16)
		ft_putchar(stock[n]);
	else if (n > 16)
	{
		ft_hexa(n / 16);
		ft_hexa(n % 16);
	}
	return(ft_statushexa(n));
}
