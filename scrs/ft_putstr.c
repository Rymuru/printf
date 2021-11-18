/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:15:23 by bcoenon           #+#    #+#             */
/*   Updated: 2021/11/18 20:47:46 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char* str)
{
    if (!str)
    {
        return (0);
    }
    write(1, str, ft_strlen(str));
    return (ft_strlen(str));
}