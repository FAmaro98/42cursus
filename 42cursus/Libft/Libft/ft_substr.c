/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:02:30 by franalme          #+#    #+#             */
/*   Updated: 2023/01/09 19:02:31 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	max;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		sub = ft_calloc(1, 1);
		return (sub);
	}
	max = (ft_strlen(s) - start);
	if (len > max)
		sub = (char *)malloc(sizeof(char) * max + 1);
	else
		sub = (char *)malloc((sizeof(char) * (len + 1)));
	if (!sub)
		return (NULL);
	while (s[start] && len > i)
		sub[i++] = ((unsigned char *)s)[start++];
	sub[i] = '\0';
	return (sub);
}
