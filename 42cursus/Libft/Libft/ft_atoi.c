/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:59:36 by franalme          #+#    #+#             */
/*   Updated: 2022/12/20 16:59:37 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	m;
	int	b;

	s = 0;
	m = 1;
	while ((str[s] == ' ') || ((str[s] >= '\a') && (str[s] <= '\r')))
		s++;
	if ((str[s] == '+') || (str[s] == '-'))
	{
		if (str[s] == '-')
			m *= -1;
		s++;
	}
	b = 0;
	while (str[s] && str[s] >= '0' && str[s] <= '9')
	{
		b = (b * 10) + (str[s] - '0');
		s++;
	}
	return (b * m);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main () 
// {
//    int val;
//    char str[20];
//  
//    strcpy(str, "98993489");
//    val = atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);

//    strcpy(str, "tutorialspoint.com");
//    val = atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);

//    return(0);
// }
// 