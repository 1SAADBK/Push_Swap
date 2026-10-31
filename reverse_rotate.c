/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:01:56 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 13:01:57 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **a)
{
	t_list	*tmp;
	t_list	*second_last;
	t_list	*last;

	if (!*a || !(*a)->next)
		return ;
	second_last = *a;
	while (second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	tmp = *a;
	*a = last;
	(*a)->next = tmp;
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	write (1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	write (1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write (1, "rrr\n", 4);
}
