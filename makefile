RCS	= ./src/push_swap.c\
./src/utils.c\
./src/ft_split.c\
./src/ft_atoi.c\
./src/ft_strncmp.c\
./src/ft_strdup.c\
./src/ft_strlen.c\
./src/ft_strchr.c\
./src/sa.c\
./src/sb.c\
./src/pa.c\
./src/pb.c\
./src/ra.c\
./src/rb.c\
./src/rra.c\
./src/rrb.c\
./src/parsing.c\
./src/for3.c\
./src/for4.c\
./src/for5.c\
./src/for100.c\
./src/for100x1.c\
./src/ft_calloc.c\
./src/ft_bzero.c

OBJS	= $(RCS:.c=.o)

NAME	= push_swap

CFLAGS	= -Wall -Werror -Wextra -g

$(NAME)	: $(OBJS)
		gcc $(CFLAGS) -o push_swap $(RCS)

all	: $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all
