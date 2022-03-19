#include"push_swap.h"

int *pa(t_data *data)
{
	int	i;
	int	*s;
	int	j;

	i = 0;
	s = malloc((sizeof(int) * (data->j + 2)));
	s[i] = data->stack[i];
	i++;
	j = 0;
	while (j < data->j)
	{
		s[i] = data->final[j];
		i++;
		j++;
	}
	return (s);
}