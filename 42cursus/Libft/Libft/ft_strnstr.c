/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:59:27 by franalme          #+#    #+#             */
/*   Updated: 2022/12/20 16:59:27 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *wrd, size_t len)
{
	size_t	d;
	size_t	p;

	if ((!str || !wrd) && (len == 0))
		return (NULL);
	d = 0;
	if (wrd[0] == '\0')
		return ((char *)str);
	if ((str == wrd) && (len > ft_strlen(str)))
		return ((char *)str);
	while (str[d] != '\0')
	{
		p = 0;
		while (str[d + p] == wrd[p] && (d + p) < len)
		{
			if (str[d + p] == '\0' && wrd[p] == '\0')
				return ((char *)&str[p]);
			p++;
		}
		if (wrd[p] == '\0')
			return ((char *)str + d);
		d++;
	}
	return (0);
}
