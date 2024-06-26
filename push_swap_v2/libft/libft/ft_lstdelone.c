/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:42:48 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:42:48 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*void ft_freeNode(void *node)
{
    node = NULL;   
}

int main()
{
    int a = 1;
    int b = 2;
    
    t_list *first;
    t_list *second;

    first = ft_lstnew(&a);
    second = ft_lstnew(&b);
       
    first->next = second;
    second->next = NULL;

    while (first)
    {    
        printf("%d\n", *(int *)first->content);
        first = first->next;
    }
    
    ft_lstdelone(first, &ft_freeNode);
    
}*/
