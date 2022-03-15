#include"push_swap.h"

int	ft_strchr(int *s, int c, int i)
{
	i++;
	while (s[i])
	{
		if (s[i] == (char )c)
			return (s[i]);
		i++;
	}
	if (s[i] == (char )c)
		return (s[i]);
	return (0);
}
