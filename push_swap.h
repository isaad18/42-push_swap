#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>
# include<strings.h>
# include"./ft_printf/ft_printf.h"
#include <limits.h>

int	ft_strchr(int *s, int c, int i);

char	**ft_split(char const *s, char c);

int	ft_atoi(char *str);

typedef struct t_data
{
	char	*str;
	char	**tc;
	int		**final;
}		s_data;

#endif
