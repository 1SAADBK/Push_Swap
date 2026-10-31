/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:22:28 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 12:32:24 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_check(const char *str)
{
	int			i;
	long long	nbr;
	int			sign;

	nbr = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - 48);
		if ((nbr > 2147483647 && sign == 1) || (nbr > 2147483648 && sign == -1))
			return (0);
		i++;
	}
	nbr *= sign;
	return (1);
}
