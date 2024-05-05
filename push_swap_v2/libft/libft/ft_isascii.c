/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:42:01 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:42:02 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int main()
{
	int x;

	x = 127;
	printf("FAKE: %d\n", ft_isascii(x));
	printf("ORIGINAL: %d\n", isascii(x));
}*/
