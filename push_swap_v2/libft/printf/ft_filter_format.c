/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filter_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:49:50 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:49:51 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_filter_format(char c, va_list ap)
{
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if (c == 'p')
		return (ft_putptr(va_arg(ap, void *)));
	if (c == 'u')
		return (ft_put_unsigned(va_arg(ap, unsigned int)));
	if (c == 'x')
		return (ft_puthexa(va_arg(ap, unsigned int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_puthexa(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	return (0);
}
