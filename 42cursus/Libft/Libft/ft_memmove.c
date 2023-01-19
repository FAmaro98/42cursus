/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:57:38 by franalme          #+#    #+#             */
/*   Updated: 2022/12/20 16:57:39 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	if (!str1 && !str2)
		return (0);
	i = 0;
	if ((size_t)str1 - (size_t)str2 < n)
	{
		i = n - 1;
		while (i >= 0 && i < n)
		{
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
			i++;
		}
	}
	return (str1);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstring";

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 2);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }