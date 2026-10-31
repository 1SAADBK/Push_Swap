/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_elements.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:02:21 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 14:09:16 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_two_elements(t_list **a)
{
	if ((*a)->next && (*a)->content > (*a)->next->content)
		sa(a);
}

static void	sort_3(t_list **a)
{
	if ((*a)->content < (*a)->next->content
		&& (*a)->next->content < (*a)->next->next->content)
		return ;
	else if ((*a)->content > (*a)->next->content
		&& (*a)->content < (*a)->next->next->content)
		sa(a);
	else if ((*a)->content > (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content)
	{
		sa(a);
		rra(a);
	}
	else if ((*a)->content > (*a)->next->content
		&& (*a)->next->content < (*a)->next->next->content)
		ra(a);
	else if ((*a)->content < (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content
		&& (*a)->content < (*a)->next->next->content)
	{
		sa(a);
		ra(a);
	}
	else
		rra(a);
}

void	sort_three_elements(t_list **a)
{
	if (lstsize(*a) <= 2)
		sort_two_elements(a);
	else
		sort_3(a);
}
