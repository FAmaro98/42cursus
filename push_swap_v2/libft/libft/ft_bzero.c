/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:41:23 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:41:24 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((char *)s)[i] = '\0';
		i++;
		n--;
	}
}

/* 
int main()
{
    char s[] = "AAAAAAAAAAAAAA";
    char b[] = "AAAAAAAAAAAAAA";
    
    ft_bzero(s + 2, 4);
    puts(s);
    
    bzero(b + 2, 4);
    puts(b);
} */
