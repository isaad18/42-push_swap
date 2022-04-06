#include"push_swap.h"

int	ft_strchr(int *s, int c, int i)
{
	i++;
	while (s[i])
	{
		if (s[i] == (char )c)
			return (s[i]);
		i++;
	}
	if (s[i] == (char )c)
		return (s[i]);
	return (0);
}

int	checksort(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < data->j - 1)
	{
		if (data->final[i] < data->final[i + 1])
			j++;
		i++;
	}
	if (j == data->j)
	{
		if (data->j < 4)
			freeall(data);
		else
			freeextra(data);
		exit(0);
	}
	return (0);
}

int	checkstop(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < data->j)
	{
		if (data->final[i] < data->final[i + 1])
			j++;
		i++;
	}
	if (j == data->j)
	{
		freeall(data);
		exit(0);
	}
	return (0);
}

int	checkstopfor5(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < data->j)
	{
		if (data->final[i] < data->final[i + 1])
			j++;
		i++;
	}
	if (j == data->j)
	{
		freeextra(data);
		// free(data->stack);
		exit(0);
	}
	return (0);
}

void	ft_swap(t_data *data, int i, int c, int d)
{
	if (data->test[i] > data->test[c])
	{
		d = data->test[c];
		data->test[c] = data->test[i];
		data->test[i] = d;
	}
}

int	draftsort(t_data *data)
{
	int	i;
	int	d;
	int	c;

	i = 0;
	d = 0;
	c = 0;
	while (i < data->j)
	{
		c = i;
		while (c < data->j)
		{
			ft_swap(data, i, c, d);
			c++;
		}
		if (checksort(data) == 1)
		{
			return (0);
		}
		else
			c = 0;
		i++;
	}
	return (0);
}
