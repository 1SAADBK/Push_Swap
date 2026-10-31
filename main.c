/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:33:48 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/26 08:23:59 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**strs;
	t_list	*a;

	if (argc == 1)
		return (0);
	strs = ft_parsing(argc, argv);
	if (!strs)
		return (ft_error_free(NULL));
	a = make_a(strs);
	if (!a)
		return (1);
	free_strs(strs);
	if (!check_doubles(a))
		return (ft_error_free(NULL));
	lst_index(a);
	if (is_sorted(a))
		return (0);
	if (lstsize(a) <= 3)
		sort_three_elements(&a);
	else if (lstsize(a) == 4 || lstsize(a) == 5)
		sort_five_elements(&a);
	else
		k_sort(&a, lstsize(a));
	free_stack(a);
	return (0);
}
