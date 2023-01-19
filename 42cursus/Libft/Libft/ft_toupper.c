/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:58:09 by franalme          #+#    #+#             */
/*   Updated: 2022/12/20 16:58:10 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i = i - 32);
	else
		return (i);
}

// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     char c;

//     c = 'm';
//     printf("%c -> %c", c, toupper(c));

//     c = 'D';
//     printf("\n%c -> %c", c, toupper(c));

//     c = '9';
//     printf("\n%c -> %c\n", c, toupper(c));

//     c = 'm';
//     printf("%c -> %c", c, ft_toupper(c));

//     c = 'D';
//     printf("\n%c -> %c", c, ft_toupper(c));

//     c = '9';
//     printf("\n%c -> %c", c, ft_toupper(c));
//     return 0;
// }
