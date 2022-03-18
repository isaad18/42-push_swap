#include"push_swap.h"

int counter(int *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int *rrb(t_data *data)
{
    int i;
    int j;
	int	d;
    int *c;

    i = counter(data->final);
    c = malloc(sizeof(int) * i);
    d = data->final[i - 1];
    i = 0;
    j = 0;
    while (data->final[j + 1])
    {
		c[i] = data->final[j];
		j++;
		i++;
    }
	c[i] = 0;
	i = 0;
	j = 0;
	while (data->final[j])
	{
		data->final[j] = c[i];
		j++;
		i++;
	}
    data->final[j] = d;
	return (data->final);
}