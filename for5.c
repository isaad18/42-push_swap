#include"push_swap.h"

void	gofront(t_data *data, int i)
{
	while (i < data->j)
	{
		data->final = rra(data);
		i++;
	}
}

void	goback(t_data *data, int i)
{
	while (i)
	{
		data->final = ra(data);
		i--;
	}
}

void	helper5(t_data *data)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < data->j)
	{
		if (data->final[i] > data->final[j])
		{
			i++;
			j = 0;
		}
		j++;
	}
	if (i > data->j / 2)
		gofront(data, i);
	if (i <= data->j / 2)
		goback(data, i);
}

void	helper5x1(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < data->j)
	{
		if (data->final[i] < data->final[j])
		{
			i++;
			j = 0;
		}
		j++;
	}
	if (i > data->j / 2)
		gofront(data, i);
	if (i <= data->j / 2)
		goback(data, i);
}

int	sort5(t_data *data)
{
	if (data->j > 3 && data->j < 6)
	{
		helper5(data);
		helper4(data);
		checkstop(data);
		data->stack = pb(data);
		helper5x1(data);
		data->stack = pb(data);
		sort3(data);
		data->final = pa(data);
		data->final = ra(data);
		data->final = pa(data);
		freeextra(data);
	}
	return (0);
}