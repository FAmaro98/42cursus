/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 23:00:49 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 23:00:50 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void	error(int status)
{
	ft_printf("Error\n");
	exit(status);
}

void	free_stacks(t_stack *stack_a, t_stack *stack_b, int status)
{
	free_stack(stack_a);
	free_stack(stack_b);
	exit(status);
}
