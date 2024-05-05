/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:50:34 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:50:35 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	signal;

	signal = 0;
	if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
		signal = 1;
	}
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (ft_counter(n) + signal);
}
