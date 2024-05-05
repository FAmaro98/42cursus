/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:51:12 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:51:13 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_put_unsigned(unsigned int n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		write (1, &c, 1);
	}
	else
	{
		ft_put_unsigned(n / 10);
		ft_put_unsigned(n % 10);
	}
	return (ft_counter(n));
}
