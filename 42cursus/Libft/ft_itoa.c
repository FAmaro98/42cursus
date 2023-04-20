/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:43:34 by franalme          #+#    #+#             */
/*   Updated: 2023/01/10 15:43:35 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	digits(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static void	ft_writestr(int n, char *res, int len)
{
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		if (n == -2147483648)
		{
			res[1] = '2';
			n = 147483648;
			res += 2;
			len -= 2;
		}
		else
		{
			n = -n;
			res++;
			len--;
		}
	}
	while (len)
	{
		res[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int			len;
	char		*res;

	len = digits(n);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	ft_writestr(n, res, len);
	return (res);
}
