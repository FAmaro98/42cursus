/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_setters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 23:00:20 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 23:00:20 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

/**
 * @brief Set stack to point to the cheapest target node 
 */
void	set_cheapest(t_stack *stack)
{
	int		i;
	t_node	*current;

	i = 0;
	if (!stack || !stack->top)
		return ;
	stack->cheapest_node = stack->top;
	current = stack->top;
	while (i < stack->size)
	{
		if (current->price > 0 && current->price < stack->cheapest_node->price)
			stack->cheapest_node = current;
		current = current->next;
		i++;
	}
}

/**
 * @brief Set stack with its minimun and maximun value.
*/
void	set_min_max(t_stack *stack)
{
	int		i;

	i = 0;
	if (!stack || !stack->top)
		return ;
	stack->minimum_node = stack->top;
	stack->maximum_node = stack->top;
	while (i < stack->size)
	{
		if (stack->top->value < stack->minimum_node->value)
			stack->minimum_node = stack->top;
		if (stack->top->value > stack->maximum_node->value)
			stack->maximum_node = stack->top;
		stack->top = stack->top->next;
		i++;
	}
}
