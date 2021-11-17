/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:25:49 by bcoenon           #+#    #+#             */
/*   Updated: 2021/11/17 21:17:52 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int     ft_putchar(char c);
int     ft_putnbr(int n);
int     ft_putstr(char* str);

int     ft_strlen(char* str);
int     ft_hexa(unsigned int n);
int     ft_printf(const char *type, ...);
#endif
