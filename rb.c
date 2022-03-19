#include"push_swap.h"

int *rb(t_data *data)
{
	int j;
	int	d;
	int *c;
	int	i;

	c = malloc(sizeof(int) * (data->j));
	d = data->stack[0];
	i = 0;
	j = 1;
	while (j < data->j)
	{
		c[i] = data->stack[j];
		j++;
		i++;
	}
	c[i] = d;
	return (c);
}