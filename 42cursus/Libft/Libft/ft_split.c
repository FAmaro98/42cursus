/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:57:11 by franalme          #+#    #+#             */
/*   Updated: 2023/01/10 14:57:12 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	wordcount(char const *s, char c)
{
	int	i;
	int	count;

	if (!s)
		return (0);
	count = 0;
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			if (!i)
				count++;
			i = 1;
		}
		else
			i = 0;
		s++;
	}
	return (count);
}

static char	*strwrite(char *wrd, char **split, size_t i, char c)
{
	char	*end;

	end = ft_strchr(wrd, c);
	if (!end)
		end = ft_strchr(wrd, '\0');
	split[i] = malloc(end - wrd + 1);
	if (!split[i])
		return (NULL);
	ft_memcpy(split[i], wrd, end - wrd);
	split[i][end - wrd] = '\0';
	return (end);
}	

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	count;
	char	*wrd;

	count = wordcount((char *)s, c);
	split = malloc(count * sizeof(s) + sizeof(s));
	if (!split)
		return (NULL);
	split[count] = 0;
	wrd = (char *)s;
	i = 0;
	while (i < count)
	{
		while (*wrd == c)
			wrd++;
		wrd = strwrite(wrd, split, i, c);
		i++;
	}
	return (split);
}
