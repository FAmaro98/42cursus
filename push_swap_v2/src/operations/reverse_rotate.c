/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:59:15 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:59:16 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/push_swap.h"

static void	reverse_rotate(t_stack *stack)
{
	if (!stack || !stack->top || stack->size < 2)
		return ;
	stack->top = stack->top->prev;
}

/**
 * @brief Reverse rotate a: Shift down all elements of stack "a" by 1. 
 * The last element becomes the first one.
*/
static void	rra(t_stack *stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

/**
 * @brief Reverse rotate b: Shift down all elements of stack "b" by 1. 
 * The last element becomes the first one.
*/
static void	rrb(t_stack *stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

/**
 * @brief Rotate reverse a & b. Shift down all elements of stack "a" & "b" by 1. 
 * The last element becomes the first one.
*/
void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}

void	rrx(t_stack *stack)
{
	if (stack->name == 'a')
		rra(stack);
	if (stack->name == 'b')
		rrb(stack);
}
