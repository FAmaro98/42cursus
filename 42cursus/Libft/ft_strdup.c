/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:00:08 by franalme          #+#    #+#             */
/*   Updated: 2022/12/20 17:00:09 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup( const char *str1 )
{
	size_t	len;
	char	*out;

	len = ft_strlen(str1);
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (0);
	ft_strlcpy (out, str1, len + 1);
	return (out);
}
