/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:02:48 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 13:02:49 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **a)
{
	int	tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = (*a)->content;
	(*a)->content = ((*a)->next)->content;
	((*a)->next)->content = tmp;
}

void	sa(t_list **a)
{
	swap(a);
	write (1, "sa\n", 3);
}

void	sb(t_list **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
	write (1, "ss\n", 3);
}
