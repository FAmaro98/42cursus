/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:58:16 by franalme          #+#    #+#             */
/*   Updated: 2024/05/05 22:58:17 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

/**
 * @brief Check if arguments have repeated numbers.
 * @return Return 1 if true and 0 if false.
 */
static int	is_repeated(int num, char **args, int i)
{
	i++;
	while (args[i])
	{
		if (ft_atoi(args[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

/**
 * @brief Check if string is representing a number.
 * @return Return 1 if true and 0 if false.
 */
static int	is_number(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

static long	ft_atol(const char *str)
{
	long	num;
	int		is_negative;
	int		i;

	num = 0;
	is_negative = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		is_negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * is_negative);
}

/**
 * @brief Check if args are valid for the program. 
 * Exit if args not valid
 * @return Return array of strings with args numbers.
 */
char	**get_valid_args(int argc, char **argv)
{
	int		i;
	long	tmp;
	char	**args;	

	i = 0;
	args = ++argv;
	if (argc == 2)
		args = ft_split(args[0], ' ');
	while (args[i])
	{
		tmp = ft_atol(args[i]);
		if (!is_number(args[i]))
			error(0);
		if (is_repeated(tmp, args, i))
			error(0);
		if (tmp < -2147483648 || tmp > 2147483647)
			error(0);
		i++;
	}
	return (args);
}
