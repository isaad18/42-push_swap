#include"../includes/push_swap.h"

void	gofrontt(t_data *data, int i)
{
	while (i < data->i)
	{
		data->stack = rrb(data);
		i++;
	}
}

void	gobackk(t_data *data, int i)
{
	while (i)
	{
		data->stack = rb(data);
		i--;
	}
}

void	helper100(t_data *data, int i, int j, int n)
{
	while (i < data->j && j >= 0)
	{
		if (data->final[i] <= data->test[n])
		{
			pushit(data, i);
			i = 0;
			j = data->j;
		}
		else if (data->final[j] <= data->test[n])
		{
			pushit(data, j);
			i = 0;
			j = data->j;
		}
		i++;
		j--;
	}
}

void	trying(t_data *data, int i, int j)
{
	while (j < data->i)
	{
		if (data->stack[i] < data->stack[j])
		{
			i++;
			j = 0;
		}
		j++;
	}
	if (i > data->i / 2)
	{
		gofrontt(data, i);
		data->final = pa(data);
		i = 0;
		j = 0;
	}
	else if (i <= data->i / 2)
	{
		gobackk(data, i);
		data->final = pa(data);
		i = 0;
		j = 0;
	}
}

int	sendback(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (data->i)
	{
		trying(data, i, j);
	}
	return (0);
}