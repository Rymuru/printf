/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:26:49 by bcoenon           #+#    #+#             */
/*   Updated: 2021/11/21 20:12:54 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void    ft_print_addr(uint64_t nb)
{  
    char    *stock = "0123456789abcdef";
 
    if (nb <= 16)
	    ft_putchar(stock[nb]);
    else if (nb > 16)
{
	    ft_print_addr(nb / 16);
	    ft_print_addr(nb % 16);
    }
}

static int	nb_carac(unsigned int n)
{
	int total;

	total = 0;
	if (n == 0)
		total = 1;
	while (n > 0)
	{
		total++;
		n = n / 16;
	}
	return (total);
}

int ft_adress(void *addr)
{
    uint64_t nb;
    

    nb = (uint64_t)addr;
    ft_putchar('0');
    ft_putchar('x');
    ft_print_addr(nb);
    return (nb_carac(nb ) + 2);
}