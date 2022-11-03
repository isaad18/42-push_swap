#include"../includes/push_swap.h"

void	helper3(t_data *data)
{
    if (data->final[0] < data->final[1] && data->final[0] < data->final[2])
	{
		if (data->final[1] > data->final[2])
		{
			data->final = sa(data);
			data->final = ra(data);
		}
	}
	if (data->final[1] < data->final[0] && data->final[1] < data->final[2])
	{
		if (data->final[0] < data->final[2])
			data->final = sa(data);
		if (data->final[0] > data->final[2])
			data->final = ra(data);
	}
}

int	sort3(t_data *data)
{
	if (data->j == 2)
	{
		sa(data);
		checkstop(data);
	}
	if (data->j <= 3)
	{
		helper3(data);
		if (data->final[2] < data->final[0] && data->final[2] < data->final[1])
		{
			if (data->final[0] < data->final[1])
				data->final = rra(data);
			if (data->final[0] > data->final[1])
			{
				data->final = sa(data);
				data->final = rra(data);
			}
		}
		if (data->final[0] > data->final[1])
			data->final = sa(data);
	}
	return (0);
}