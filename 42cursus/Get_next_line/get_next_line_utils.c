/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:17:51 by franalme          #+#    #+#             */
/*   Updated: 2023/01/18 13:17:54 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_bzero(void *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) str)[i] = '\0';
		i++;
	}
	return (str);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str != (unsigned char)c)
		if (!*str++)
			return (0);
	return ((char *)str);
}

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*res;

	res = malloc(size * nitems);
	if (!res)
		return (0);
	ft_bzero(res, size * nitems);
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while (*c++)
		++count;
	return (count);
}
