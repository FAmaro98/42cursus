/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:44:56 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:44:57 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*new_dest;
	char	*new_src;

	new_dest = (char *)dest;
	new_src = (char *)src;
	if (src < dest)
	{
		while (n > 0)
		{
			new_dest[n - 1] = new_src[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*int main()
{
	char dest[] = "1234";
	char src[] = "abc";
	char dest2[] = "1234";
	char src2[] = "abc";
	
	puts(dest);
	ft_memmove(dest, src, 2);
	puts(dest);

	printf("\n");

	puts(dest2);
	memmove(dest2, src2, 2);
	puts(dest2);
}*/ 
