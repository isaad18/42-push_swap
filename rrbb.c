#include"push_swap.h"

int *rrb(t_data *data)
{
    int i;
    int j;
	int	d;
    int *c;

    c = malloc(sizeof(int) * data->j);
    d = data->stack[data->j - 1];
    i = 1;
    j = 0;
    while (j < data->j - 1)
    {
		c[i] = data->stack[j];
		j++;
		i++;
    }
    c[0] = d;
    ft_printf("%s\n", "rrb");
	return (c);
}