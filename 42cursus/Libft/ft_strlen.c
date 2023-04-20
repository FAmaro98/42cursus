/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:58:37 by franalme          #+#    #+#             */
/*   Updated: 2022/12/12 17:58:38 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while (*c++)
		++count;
	return (count);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[20]="Program";
//     char b[20]={'P','r','o','g','r','a','m','\0'};

//     // using the %zu format specifier to print size_t
//     printf("Length of string a = %zu \n",strlen(a));
//     printf("Length of string b = %zu \n",strlen(b));

//     printf("Length of string a = %zu \n",ft_strlen(a));
//     printf("Length of string b = %zu \n",ft_strlen(b));

//     return 0;
// }