/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:32:47 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/26 07:59:17 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_parsing(int argc, char **argv)
{
	char	*str;
	char	*old_str;
	char	**strs;
	int		i;

	i = 1;
	str = malloc (sizeof(char) * 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	while (i < argc)
	{
		if (!check_arg(argv[i]))
			return (NULL);
		old_str = str;
		str = ft_strjoin(str, argv[i]);
		free(old_str);
		i++;
	}
	strs = ft_split(str, ' ');
	free (str);
	if (!check_strs(strs) || !check_strs_two(strs))
		return (free_strs(strs));
	return (strs);
}
