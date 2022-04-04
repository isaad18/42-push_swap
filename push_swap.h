#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>
# include<strings.h>
# include"./ft_printf/ft_printf.h"
# include<limits.h>
# include<stdio.h>

int		ft_strchr(int *s, int c, int i);



int		wordscount(char const *s, char c);

char	*ft_itoa(int n);

int		ft_strncmp(const char *s1, const char *s2);

char	*ft_strdup(const char *s1);

int		ft_strlen(const char *s);



typedef struct s_data
{
	char	*cc;
	char	*str;
	char	**tc;
	int		words;
	int		*final;
	int		*stack;
	int		*test;
	int		*c;
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
int		draftsort(t_data *data);
int		actual100(t_data *data);
void	freeall(t_data *data);
void	freeextra(t_data *data);
int		fft_strchr(int *s, int c, int j, t_data *data);
char	**ft_split(char const *s, char c, t_data *data);
int		ft_atoi(const char *str, t_data *data);

#endif
