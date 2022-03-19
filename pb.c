#include"push_swap.h"
int *pb(t_data *data)
{
	int	i;
	int	*s;
	int	j;

	i = 0;
	s = malloc((sizeof(int) * (data->j + 2)));
	s[i] = data->final[i];
	i++;
	j = 0;
	while (j < data->j)
	{
		s[i] = data->stack[j];
		i++;
		j++;
	}
	return (s);
}