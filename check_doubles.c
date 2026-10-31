/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doubles.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:31:01 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 12:31:06 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_doubles(t_list *a)
{
	t_list	*i;
	t_list	*j;
	t_list	*k;

	i = a;
	j = a->next;
	k = j;
	while (i->next)
	{
		if (j)
		{
			while (j)
			{
				if (i->content == j->content)
					return (0);
				j = j->next;
			}
		}
		i = i->next;
		k = k->next;
		j = k;
	}
	return (1);
}
