/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:43:03 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:43:03 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst-> next;
	}
	return (lst);
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

    printf("%d\n", ft_lstlast(first) == third);
}*/
