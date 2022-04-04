#include"push_swap.h"

int	pushit(t_data *data, int i)
{
	if (i > data->j / 2)
	{
		while (i < data->j)
		{
			data->final = rra(data);
			i++;
		}
		data->stack = pb(data);
	}
	else if (i <= data->j / 2)
	{
		while (i)
		{
			data->final = ra(data);
			i--;
		}
		data->stack = pb(data);
	}
	return (0);
}

void	etla3(t_data *data)
{
	free(data->tc[0]);
	free (data->tc);
	exit(0);
}