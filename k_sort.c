/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:35:51 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 14:49:48 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	best_move(t_list **b, int target)
{
	int		top_way;
	int		bottom_way;
	t_list	*tmp;

	tmp = *b;
	top_way = 0;
	bottom_way = 0;
	while (tmp->index != target)
	{
		tmp = tmp->next;
		top_way++;
	}
	bottom_way = lstsize(*b) - top_way;
	if (top_way < bottom_way)
		return (1);
	return (2);
}

void	push_back_to_a(t_list **a, t_list **b)
{
	int	target;

	target = lstsize(*b) - 1;
	while (target >= 0)
	{
		if (best_move(b, target) == 1)
		{
			while ((*b)->index != target)
				rb(b);
			pa(a, b);
		}
		else
		{
			while ((*b)->index != target)
				rrb(b);
			pa(a, b);
		}
		target--;
	}
}

void	k_sort(t_list **a, int asize)
{
	if (asize <= 100)
		sort_100(a, asize);
	else
		sort_500(a);
}
