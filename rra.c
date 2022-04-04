#include"push_swap.h"

int *rra(t_data *data)
{
    int i;
    int j;

	i = data->j - 1;
	while (i)
	{
		j = data->final[i];
		data->final[i] = data->final[i - 1];
		data->final[i - 1] = j;
		i--;
	}
    ft_printf("%s\n", "rra");
	return (data->final);
}