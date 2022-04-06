#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>
# include<strings.h>
# include"./ft_printf/ft_printf.h"
# include<limits.h>
# include<stdio.h>

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
	int		z;
}		t_data;

void	giveerror(void);
int		checksort(t_data *data);
int		*rrb(t_data *data);
int		*rra(t_data *data);
int		*ra(t_data *data);
int		*rb(t_data *data);
int		*sb(t_data *data);
int		*pb(t_data *data);
int		*pa(t_data *data);
int		*sa(t_data *data);
int		sendback(t_data *data);
int		sort3(t_data *data);
void	etla3(t_data *data);
void	helper3(t_data *data);
int		checkstop(t_data *data);
int		draftsort(t_data *data);
int		actual100(t_data *data);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	freeall(t_data *data);
int		sort5(t_data *data);
void	helper4(t_data *data);
void	freeextra(t_data *data);
void	duplicates(t_data *data);
void	helper5(t_data *data);
int		pushit(t_data *data, int i);
void	helper5x1(t_data *data);
int		checkstopfor5(t_data *data);
int		fft_strchr(int *s, int c, int j, t_data *data);
char	**ft_split(char const *s, char c, t_data *data);
void	helper100(t_data *data, int i, int j, int n);
int		ft_atoi(const char *str, t_data *data);
void	takeargs(t_data *data, char **argv);
void	checkinput(char **argv, int i, int j);
int		ft_strchr(int *s, int c, int i);
int		wordscount(char const *s, char c);
char	*ft_itoa(int n);
int		ft_strncmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);
int		ft_strlen(const char *s);

#endif
