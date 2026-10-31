CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi_check.c\
		ft_strlcpy.c\
		make_a.c\
		reverse_rotate.c\
		ft_error_free.c\
		parsing_functions.c\
		rotate.c\
		check_doubles.c\
		ft_parsing.c\
		lst_index.c\
		push.c\
		sort_five_elements.c\
		ft_split.c\
		lstsize.c\
		sort_three_elements.c\
		ft_atoi.c\
		ft_strjoin.c\
		main.c\
		swap.c\
		k_sort.c\
		free_stack.c\
		free_strs.c\
		sort_100.c\
		sort_500.c\
		is_sorted.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean