/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:48:24 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:48:25 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	while (--i >= 0)
	{
		s--;
		if (*s == (char)c)
			return ((char *)s);
	}
	return (0);
}

/*int main()
{
	printf("FAKE: %s\n", ft_strrchr("hello", 'l'));
	printf("ORIGINAL: %s\n", strrchr("hello", 'l'));
}*/
