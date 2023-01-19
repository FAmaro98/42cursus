/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:57:53 by franalme          #+#    #+#             */
/*   Updated: 2022/12/20 16:57:54 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstlen)
{
	size_t	i;
	size_t	j;
	int		aux;

	i = 0;
	while (*dst && i < dstlen)
	{
		dst++;
		i++;
	}
	aux = dstlen - i;
	j = ft_strlcpy(dst, src, aux) + i;
	return (j);
}
