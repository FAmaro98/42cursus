/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:23:58 by franalme          #+#    #+#             */
/*   Updated: 2023/01/04 10:23:59 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	i;

	i = 0;
	while (*src && i + 1 < dstlen)
	{
		*dst++ = *src++;
		++i;
	}
	if (i < dstlen)
		*dst = 0;
	while (*src++)
		++i;
	return (i);
}
