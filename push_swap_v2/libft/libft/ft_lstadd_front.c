/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:42:34 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:42:35 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

/* void freeList(t_list *head)
{
	t_list  *tmp;
	while (head)
	{
		tmp = head;
		head = head->next;
		tmp->content = NULL;
		free(tmp);
    }
}

int main()
{
	t_list *first;
	t_list *second;
	t_list *third;
	
	int a = 4;
	int b = 5;
	int c = 6;

	first = ft_lstnew((void *)&a);
	second = ft_lstnew((void *)&b);
	third = ft_lstnew((void *)&c);
	
	first->next = second;
	ft_lstadd_front(&first, third);
	
	while (third)
	{
		printf("%d", *(int *)third->content);
		third = third->next;
	}
	freeList(third);
} */
