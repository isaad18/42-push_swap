#include"../includes/push_swap.h"

void	yalla(t_data *data, int i, int j, int *c)
{
	while (j < data->i)
	{
		c[i] = data->stack[j];
		i++;
		j++;
	}
	i = 0;
	while (i < data->i - 1)
	{
		data->stack[i] = c[i];
		i++;
	}
}

int	*hh(t_data *data, int i, int j, int *s)
{
	s[i] = data->stack[i];
	i++;
	while (j < data->j)
	{
		s[i] = data->final[j];
		i++;
		j++;
	}
	return (s);
}

int *pa(t_data *data)
{
	int	i;
	int	*s;
	int	j;
	int	*c;

	i = 0;
	c = malloc((sizeof(int) * (data->i)));
	s = malloc((sizeof(int) * (data->j + 2)));
	data->j += 1;
	j = 0;
	s = hh(data, i, j, s);
	i = 0;
	j = 1;
	yalla(data, i, j, c);
	i = 0;
	data->i -= 1;
	free(c);
	while (i < data->j)
	{
		data->final[i] = s[i];
		i++;
	}
	free (s);
	printf("%s\n", "pa");
	return (data->final);
}