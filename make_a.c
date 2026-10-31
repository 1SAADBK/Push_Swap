/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:33:59 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 14:43:10 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	add_to_a(int n, t_list **a)
{
	t_list	*new;
	t_list	*tmp;

	new = malloc (sizeof(t_list));
	if (!new)
	{
		new = NULL;
		return (0);
	}
	new->content = n;
	new->next = NULL;
	tmp = *a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (1);
}

t_list	*make_a(char **strs)
{
	t_list	*a;
	int		n;
	int		i;
	int		error_check;

	i = 1;
	a = malloc(sizeof(t_list));
	if (!strs || !a)
		return (NULL);
	n = ft_atoi(strs[0]);
	a->content = n;
	a->next = NULL;
	while (strs[i])
	{
		n = ft_atoi(strs[i]);
		error_check = add_to_a(n, &a);
		if (!error_check)
			ft_error_free(a);
		i++;
	}
	return (a);
}
