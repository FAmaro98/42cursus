/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:59:26 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:59:27 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/push_swap.h"

static void	swap(t_stack *stack)
{
	t_node	*new_top;

	if (!stack || stack->size < 2)
		return ;
	if (stack->size == 2)
	{
		stack->top = stack->top->next;
		return ;
	}
	new_top = stack->top->next;
	stack->top->next->prev = new_top->prev->prev;
	stack->top->prev = new_top;
	stack->top->next = new_top->next;
	stack->top->prev->next = stack->top;
	stack->top = stack->top->prev;
	stack->top->prev->next = stack->top;
	stack->top->next->next->prev = stack->top->next;
	return ;
}

/**
 * @brief Swap a: Swap the first 2 elements at the top of stack "a". 
 * Do nothing if there is only one or no elements.
*/
static void	sa(t_stack *stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

/**
 * @brief Swap b: Swap the first 2 elements at the top of stack "b". 
 * Do nothing if there is only one or no elements.
*/
static void	sb(t_stack *stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

/**
 * @brief Swap a & b: Swap the first 2 elements at the top of stack "a" & "b". 
 * Do nothing if there is only one or no elements.
*/
void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

void	sx(t_stack *stack)
{
	if (stack->name == 'a')
		sa(stack);
	if (stack->name == 'b')
		sb(stack);
}
