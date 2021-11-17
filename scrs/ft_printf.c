/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:25:40 by bcoenon           #+#    #+#             */
/*   Updated: 2021/11/17 19:30:02 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int ft_printf(const char *type, ...)
{
    int     i;
    int     status;
    va_list arg;

    va_start(arg, type);
    i= 0;
    status = 0;
    if (type[i])
    {
        if (type[i] == '%')
            status = ft_sort(type[i + 1], arg);
        else
        {
            write(1, &type[i], 1);
            status++;
        }
    }
    va_end(arg);
    return (status);
}

int ft_sort(char flag, va_list arg)
{
    int status;
    
    if (flag == 'c')
        status = ft_putchar (arg);
    else if (flag == 's')
        status = ft_putstr (arg);
    else if (flag == 'd')
        status = ft_putnbr (arg);
    return (status);
}