#include"push_swap.h"

int counter(int *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int *rb(t_data *data)
{
	int i;
	int j;
	int	d;
	int *c;

	i = counter(data->final);
	c = malloc(sizeof(int) * i);
	d = data->final[0];
	i = 0;
	j = 1;
	while (data->final[j])
	{
		c[i] = data->final[j];
		j++;
		i++;
	}
	c[i] = 0;
	i = 0;
	while (data->final[j])
	{
		data->final[i] = c[i];
		j++;
		i++;
	}
	data->final[i] = d;
	return (data->final);
}