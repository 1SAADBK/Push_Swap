/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:34:56 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 12:33:22 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len = 0;
	len2 = 0;
	while (s1[len])
		len++;
	while (s2[len2])
		len2++;
	if (len > SIZE_MAX - len2 - 1)
		return (NULL);
	s3 = (char *)malloc(len + len2 + 2);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, len + len2 + 2);
	ft_strlcpy(s3 + len, " ", len2 + 2);
	ft_strlcpy(s3 + len + 1, s2, len2 + 1);
	return (s3);
}
