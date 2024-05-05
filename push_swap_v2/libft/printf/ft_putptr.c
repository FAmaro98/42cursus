/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:50:52 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:50:53 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_puthexa((unsigned long)ptr, \
	"0123456789abcdef"));
}
