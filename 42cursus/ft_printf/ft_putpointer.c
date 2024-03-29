/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:54:53 by franalme          #+#    #+#             */
/*   Updated: 2023/04/19 18:54:54 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_base_ptr(uintptr_t ptr)
{
	char	*base;
	int		l;

	l = 0;
	base = "0123456789abcdef";
	l += ft_putchar(base[ptr]);
	return (l);
}

int	ft_print_ptr(uintptr_t ptr)
{
	int				l;

	l = 0;
	if (ptr >= 16)
	{
		l += ft_print_ptr(ptr / 16);
		l += ft_print_ptr(ptr % 16);
	}
	if (ptr <= 15)
		l += ft_puthex_base_ptr(ptr);
	return (l);
}

int	ft_putpointer(unsigned long long ptr)
{
	int	l;

	if (!ptr)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	l = 0;
	l += ft_putstr("0x");
	l += ft_print_ptr(ptr);
	return (l);
}
