/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <sbenkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:35:07 by sbenkass          #+#    #+#             */
/*   Updated: 2026/03/26 08:10:07 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Libraries

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

// linked list

typedef struct s_list {
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

// functions

char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_atoi(const char *str);
int		ft_atoi_check(const char *str);
char	**ft_parsing(int argc, char **argv);
int		ft_error_free(t_list *a);
int		check_arg(char *str);
int		check_strs(char **strs);
int		check_strs_two(char **strs);
t_list	*make_a(char **strs);
int		check_doubles(t_list *a);
int		lstsize(t_list *a);
void	lst_index(t_list *a);
t_list	*make_a(char **strs);
char	**free_strs(char **strs);
void	free_stack(t_list *a);
int		is_sorted(t_list *a);

// moves

void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

// sort tiny stacks
void	sort_three_elements(t_list **a);
void	sort_five_elements(t_list **a);

// sort large stacks

void	k_sort(t_list **a, int size);
int		best_move(t_list **b, int target);
void	push_back_to_a(t_list **a, t_list **b);
void	sort_100(t_list **a, int asize);
void	sort_500(t_list **a);

#endif