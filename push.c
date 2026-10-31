/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:35:17 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 12:35:18 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **f, t_list **s)
{
	t_list	*tmp;

	if (!*s)
		return ;
	tmp = *s;
	(*s) = (*s)->next;
	tmp->next = *f;
	*f = tmp;
}

void	pa(t_list **a, t_list **b)
{
	push(a, b);
	write (1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	push(b, a);
	write (1, "pb\n", 3);
}
