/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:44:18 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:44:20 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!c && !n)
		return (NULL);
	while (i < n)
	{
		if (*(char *)s == (char)c)
			return ((char *)s);
		s++;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

/* int main()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("FAKE: %s\n", ((char *) ft_memchr(s, 0, 0)));
	printf("ORIGINAL: %s\n", ((char *) memchr(s, 0, 0)));
} */
