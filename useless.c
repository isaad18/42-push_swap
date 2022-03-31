#include"push_swap.h"

int	findstart(t_data *data, int	x)
{
	int	i;
	int	j;

	i = x;
	j = 0;
	if (i > data->j / 2)
	{
		while (i < data->j)
		{
			data->final = rra(data);
			i++;
		}
	}
	else if (i <= data->j / 2)
	{
		while (i)
		{
			data->final = ra(data);
			i--;
		}
	}
	i = 0;
	j = 0;
	while (data->final[x] < data->stack[i])
		i++;
	if (data->i == 0)
	{
		data->stack = pb(data);
		printf("%d\n", data->stack[i]);
		return (0);
	}
	else if (i > data->i / 2)
	{
		while (i < data->i)
		{
			data->stack = rrb(data);
			i++;
			j++;
		}
	}
	else if (i <= data->i / 2)
	{
		while (i)
		{
			data->stack = rb(data);
			i--;
			j++;
		}
	}
	data->stack = pb(data);
	while (j)
	{
		if (i == 0)
			data->stack = rrb(data);
		if (i > 0)
			data->stack = rb(data);
		j--;
	}
	return (0);
}

int	actual100(t_data *data)
{
	int	j;
	int	i;
	int	x;
	int	y;
	int	d;
	int	c;

	i = 10;
	j = 0;
	c = 0;
	x = 0;
	y = 0;
	d = 0;
	while (i <= data->j)
	{
		j = data->test[i];
		c = data->j;
		while (d < 10)
		{
			while (c && data->final[x])
			{
				if (data->final[x] < j)
				{
					findstart(data, x);
					d++;
					x = 0;
					c = data->j;
				}
				else if (data->final[c] < j)
				{
					findstart(data, c);
					d++;
					x = 0;
					c = data->j;
				}
				c--;
				x++;
			}
		}
		i += 10;
	}
	j = 0;
	if (i - 10 != data->j)
	{
		i -= 10;
		while (data->j)
		{
			i = 0;
			while (j < data->j)
			{
				if (data->final[i] > data->final[j])
				{
					i++;
					j = 0;
				}
				j++;
			}
			findstart(data, i);
		}
	}
	while (data->i)
	{
		data->stack = rrb(data);
		data->final = pa(data);
	}
	return (0);
}

int	sort100(t_data *data)
{
	int	i;
	int	j;
	int	c;

	c = 0;
	i = 0;
	j = 0;
	while (data->j)
	{
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
		{
			while (i < data->j)
			{
				data->final = rra(data);
				i++;
			}
			data->stack = pb(data);
			c++;
			i = 0;
			j = 0;
		}
		else if (i <= data->j / 2)
		{
			while (i)
			{
				data->final = ra(data);
				i--;
			}
			data->stack = pb(data);
			c++;
			i = 0;
			j = 0;
		}
	}
	while(c)
	{
		data->final = pa(data);
		c--;
	}
	i = 0;
	return (0);
}