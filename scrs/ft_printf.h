/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:25:49 by bcoenon           #+#    #+#             */
/*   Updated: 2021/11/17 23:36:43 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int     ft_putchar(char c);
int     ft_putnbr(int n);
int     ft_putstr(char* str);

int     ft_strlen(char* str);
int     ft_hexa(unsigned int n);
int     ft_hexaverrmaj(unsigned int n);
int     ft_printf(const char *type, ...);
#endif
