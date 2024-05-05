/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_service.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:58:41 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:58:42 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

/**
 * @brief Allocate memory for t_node size and initiates node
 * @return Returns a node.
*/
t_node	*new_node(int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (node)
		node_init(node, value);
	return (node);
}
