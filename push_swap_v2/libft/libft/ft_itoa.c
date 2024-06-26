/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:42:21 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:42:22 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	ft_count_digits(long n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
		digits++;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	size_t		i;
	char		*str;
	int			signal;

	i = ft_count_digits(n);
	signal = 1;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		signal = -1;
	}
	else if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[i] = 48 + ((n % 10) * signal);
		n /= 10;
		i--;
	}
	return (str);
}

/*int main()
{
    int n;

    n = -21;
    printf("Decimal number: %d, string convertion: %s\n", n, ft_itoa(n));
}*/
