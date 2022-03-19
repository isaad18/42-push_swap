#include"push_swap.h"

int *rra(t_data *data)
{
    int i;
    int j;
	int	d;
    int *c;

    c = malloc(sizeof(int) * data->j);
    d = data->final[data->j - 1];
    i = 1;
    j = 0;
    while (j < data->j - 1)
    {
		c[i] = data->final[j];
		j++;
		i++;
    }
    c[0] = d;
	return (c);
}