#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>
# include<strings.h>
# include"./ft_printf/ft_printf.h"
# include<limits.h>
# include<stdio.h>

int		ft_strchr(int *s, int c, int i);

char	**ft_split(char const *s, char c);

int		ft_atoi(const char *str);

int		wordscount(char const *s, char c);

char	*ft_itoa(int n);

int		ft_strncmp(const char *s1, const char *s2);

char	*ft_strdup(const char *s1);

int		ft_strlen(const char *s);

int		fft_strchr(int *s, int c, int j);


typedef struct s_data
{
	char	*str;
	char	**tc;
	int		*final;
	int		*stack;
	int		j;
	int		i;
}		t_data;

int		checksort(t_data *data);
int 	*rrb(t_data *data);
int 	*rra(t_data *data);
int 	*ra(t_data *data);
int		*rb(t_data *data);
int		*sb(t_data *data);
int 	*pb(t_data *data);
int 	*pa(t_data *data);
int		*sa(t_data *data);
int		checkstop(t_data *data);

#endif
