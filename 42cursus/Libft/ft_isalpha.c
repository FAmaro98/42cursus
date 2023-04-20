/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:55:03 by franalme          #+#    #+#             */
/*   Updated: 2022/12/05 10:56:05 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (c);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c;

//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if (isalpha(c) == 0)
//          printf("%c is not an alphabet.", c);
//     else
//          printf("%c is an alphabet.", c);

//     return 0;
// }