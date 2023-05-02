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

size_t	ft_strlen(const char *c)
{
	size_t	k;

	k = 0;
	while (c[k] != '\0')
		k = k + 1;
	return (k);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*t;

	i = 0;
	t = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (t == 0)
		return (0);
	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i] != '\0')
	{
		t[j] = s2[i];
		i++;
		j++;
	}
	t[j] = (0);
	return (t);
}

char	*ft_strdup(const char *s)
{
	char	*i;
	size_t	j;

	if (!s)
		return (0);
	j = 0;
	i = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!i)
		return (NULL);
	while (s[j])
	{
		i[j] = s[j];
		j++;
	}
	i[j] = '\0';
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}
