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

size_t	ft_strlen(const char *s);

int		fft_strchr(int *s, int c, int j);

typedef struct s_data
{
	char	*str;
	char	**tc;
	int		*final;
}		t_data;

#endif
