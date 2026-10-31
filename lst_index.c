/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:33:31 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 12:33:32 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_index(t_list *a)
{
	int		k;
	t_list	*tmp;
	t_list	*tmp2;

	tmp = a;
	while (tmp)
	{
		k = 0;
		tmp2 = a;
		while (tmp2)
		{
			if (tmp->content > tmp2->content)
				k++;
			tmp2 = tmp2->next;
		}
		tmp->index = k;
		tmp = tmp->next;
	}
}
