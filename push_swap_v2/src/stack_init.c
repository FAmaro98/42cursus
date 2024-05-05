/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 23:00:04 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 23:00:05 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

/**
 * @brief Set properties of stack with initial values.
 * 
 * @brief
 * - @c top: NULL.
 * @brief
 * - @c minimum_node: NULL.
 * @brief
 * - @c maximum_node: NULL.
 * @brief
 * - @c cheapest_node: NULL.
 * @brief
 * - @c size: 0.
 * @brief
 * - @c name: stack name parameter.
*/
void	stack_init(t_stack *stack, char stack_name)
{
	stack->top = NULL;
	stack->minimum_node = NULL;
	stack->maximum_node = NULL;
	stack->cheapest_node = NULL;
	stack->size = 0;
	stack->name = stack_name;
}
