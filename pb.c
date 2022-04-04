#include"push_swap.h"

void	editfinal(t_data *data, int *c, int i, int j)
{
	while (j < data->j)
	{
		c[i] = data->final[j];
		i++;
		j++;
	}
	i = 0;
	while (i < data->j - 1)
	{
		data->final[i] = c[i];
		i++;
	}
}

int	*ssss(t_data *data, int i, int j, int *s)
{
	s[i] = data->final[i];
	i++;
	while (j < data->i)
	{
		s[i] = data->stack[j];
		i++;
		j++;
	}
	return (s);
}

int *pb(t_data *data)
{
	int	i;
	int	*s;
	int	j;
	int	*c;

	i = 0;
	j = 0;
	c = malloc((sizeof(int) * (data->j)));
	s = malloc((sizeof(int) * (data->i + 2)));
	data->i += 1;
	s = ssss(data, i, j, s);
	i = 0;
	j = 1;
	editfinal(data, c, i, j);
	i = 0;
	data->j -= 1;
	while (i < data->i)
	{
		data->stack[i] = s[i];
		i++;
	}
	free(c);
	free (s);
	ft_printf("%s\n", "pb");
	return (data->stack);
}