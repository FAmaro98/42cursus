/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:43:42 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:43:43 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int main()
{
	t_list *first;
	t_list *second;
	t_list *third;

	int a = 1;
	int b = 2; 
	int c = 3;

	first = ft_lstnew(&a);
	second = ft_lstnew(&b);
	third = ft_lstnew(&c);

	first->next = second;
	second->next = third;
	third->next = NULL;

	printf("number of nodes: %d\n", ft_lstsize(first));
}*/
