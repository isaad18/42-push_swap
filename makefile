RCS	= push_swap.c\

OBJS	= $(RCS:.c=.o)

NAME	= push_swap

CFLAGS	= -Wall -Werror -Wextra -g

ft_printf = ./ft_printf/libftprintf.a

$(NAME)	:
		make -C ./ft_printf
		gcc $(CFLAGS) -o push_swap $(RCS) $(ft_printf) -framework OpenGL -framework AppKit

all	: $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all