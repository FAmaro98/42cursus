/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:58:36 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:58:37 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

/**
 * @brief Initialize node
 * 
 * @brief
 * - @c value: value parameter.
 * @brief
 * - @c position: 0.
 * @brief
 * - @c price: INT_MAX.
 * @brief
 * - @c move: 0.
 * @brief
 * - @c target: NULL.
 * @brief
 * - @c next: NULL.
 * @brief
 * - @c prev: NULL.
 */
void	node_init(t_node *node, int value)
{
	node->value = value;
	node->position = 0;
	node->price = INT_MAX;
	node->move = 0;
	node->target = NULL;
	node->next = NULL;
	node->prev = NULL;
}
