RCS	= push_swap.c\
utils.c\
ft_split.c\
ft_atoi.c\
ft_itoa.c\
ft_strncmp.c\
ft_strdup.c\
ft_strlen.c\
ft_strchr.c\

OBJS	= $(RCS:.c=.o)

NAME	= push_swap

CFLAGS	= -Wall -Werror -Wextra -g

ft_printf = ./ft_printf/libftprintf.a

$(NAME)	:
		make -C ./ft_printf
		gcc $(CFLAGS) -o push_swap $(RCS) $(ft_printf)

all	: $(NAME)

clean :
		rm -f $(OBJS)
		make clean -C ft_printf

fclean : clean
		rm -f $(NAME)
		make fclean -C ft_printf

re : fclean all
