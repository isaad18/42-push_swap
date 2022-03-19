#include"push_swap.h"

int *ra(t_data *data)
{
	int j;
	int	d;
	int *c;
	int	i;

	c = malloc(sizeof(int) * (data->j));
	d = data->final[0];
	i = 0;
	j = 1;
	while (j < data->j)
	{
		c[i] = data->final[j];
		j++;
		i++;
	}
	c[i] = d;
	return (c);
}