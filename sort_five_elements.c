/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_elements.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:02:11 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 14:00:56 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_five(t_list **a, t_list **b)
{
	t_list	*tmp;
	int		i;

	i = 0;
	while (i < 2)
	{
		tmp = *a;
		if (tmp->index == 0 || tmp->index == 1)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
}

static void	sort_four(t_list **a, t_list *b)
{
	t_list	*tmp;
	int		i;

	i = 0;
	while (i < 1)
	{
		tmp = *a;
		if (tmp->index == 0)
		{
			pb(a, &b);
			i++;
		}
		else
			ra(a);
	}
}

void	sort_five_elements(t_list **a)
{
	t_list	*b;

	b = NULL;
	if (lstsize(*a) == 5)
		sort_five(a, &b);
	else
		sort_four(a, b);
	if (lstsize(b) > 1 && b->index == 0)
		rb(&b);
	sort_three_elements(a);
	pa(a, &b);
	if (lstsize(b) == 1)
		pa(a, &b);
}
