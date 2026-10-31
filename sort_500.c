/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:19:53 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 13:44:41 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*set_sort_500_values(int *min, int *max, int *window_size)
{
	*min = 0;
	*window_size = 30;
	*max = *window_size - 1;
	return (NULL);
}

void	sort_500(t_list **a)
{
	t_list	*b;
	int		window_size;
	int		min;
	int		max;

	b = set_sort_500_values(&min, &max, &window_size);
	while (lstsize(*a) > 0)
	{
		if ((*a)->index < min)
		{
			pb (a, &b);
			min++;
			max++;
		}
		else if ((*a)->index >= min && (*a)->index <= max)
		{
			pb(a, &b);
			rb(&b);
			min++;
			max++;
		}
		else 
			ra(a);
	}
	push_back_to_a(a, &b);
}
