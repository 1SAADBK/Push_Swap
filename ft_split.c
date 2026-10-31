/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:33:08 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/16 12:33:08 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			wc++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (wc);
}

static char	**ft_free(char **s, size_t wn)
{
	size_t	i;

	i = 0;
	while (i < wn)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static void	ft_word_manipulate(char const *s, char c, char *w)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	while (s[i] && s[i] != c)
	{
		w[j] = s[i];
		i++;
		j++;
	}
	w[j] = '\0';
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	wn;
	size_t	i;
	char	**strs;

	if (!s)
		return (NULL);
	i = 0;
	wn = 0;
	strs = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (wn < ft_wordcount(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		strs[wn] = (char *)malloc(ft_wordlen(s + i, c) + 1);
		if (!strs[wn])
			return (ft_free(strs, wn));
		ft_word_manipulate(s + i, c, strs[wn]);
		i += ft_wordlen(s + i, c);
		wn++;
	}
	strs[wn] = NULL;
	return (strs);
}
