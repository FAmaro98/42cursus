/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:42:28 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:42:29 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (!lst || ! new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (last->next)
		last = last->next;
	last->next = new;
}

/*int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    t_list *first;
    t_list *second;
    t_list *third;

    first = ft_lstnew(&a);
    second = ft_lstnew(&b);
    third = ft_lstnew(&c);

    first->next = second;
    second->next = NULL;

    ft_lstadd_back(&first, third);
    
    while(first)
    {
        printf("%d\n", *(int *)first->content);
        first = first->next;
    }    
}*/
