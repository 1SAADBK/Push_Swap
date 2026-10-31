/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:20:46 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 13:43:26 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	pb_rb(t_list **a, t_list **b)
{
	pb(a, b);
	rb(b);
}

static void	increment_min_max(int *min, int *max)
{
	(*min)++;
	(*max)++;
}

static void	set_window_size(int *window_size, int asize)
{
	if (asize <= 20)
		*window_size = 4;
	else
		*window_size = 13;
}

void	sort_100(t_list **a, int asize)
{
	t_list	*b;
	int		window_size;
	int		min;
	int		max;

	min = 0;
	b = NULL;
	set_window_size(&window_size, asize);
	max = window_size - 1;
	while (lstsize(*a) > 0)
	{
		if ((*a)->index < min)
		{
			pb (a, &b);
			increment_min_max(&min, &max);
		}
		else if ((*a)->index >= min && (*a)->index <= max)
		{
			pb_rb(a, &b);
			increment_min_max(&min, &max);
		}
		else 
			ra(a);
	}
	push_back_to_a(a, &b);
}
