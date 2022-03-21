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
	while (i < data->j)
	{
		if (data->final[i] < data->final[i + 1])
			j++;
		i++;
	}
	if (j == data->j)
	{
		write(1, "Error\n", 6);
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
		exit(0);
	}
	return (0);
}