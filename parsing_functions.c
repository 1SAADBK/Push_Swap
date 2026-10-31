/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:34:59 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 13:32:03 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] != '+' && str[i] != '-' && str[i] != ' '
			&& (str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

int	check_strs(char **strs)
{
	int	i;
	int	j;

	i = 0;
	if (!strs)
		return (0);
	while (strs[i])
	{
		j = 0;
		if (strs[i][j] == '+' || strs[i][j] == '-')
			j++;
		while (strs[i][j])
		{
			if (strs[i][j] < '0' || strs[i][j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	strs_atoi_check(char **strs)
{
	int	i;
	int	n;

	i = 0;
	while (strs[i])
	{
		n = ft_atoi_check(strs[i]);
		if (n == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_strs_two(char **strs)
{
	int	i;
	int	j;
	int	number;

	number = 0;
	i = 0;
	if (!strs || !strs_atoi_check(strs))
		return (0);
	while (strs[i])
	{
		j = 0;
		number = 0;
		while (strs[i][j])
		{
			if (strs[i][j] >= '0' && strs[i][j] <= '9')
				number++;
			j++;
		}
		if (number == 0)
			return (0);
		i++;
	}
	return (1);
}
