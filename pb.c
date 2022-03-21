#include"push_swap.h"
int *pb(t_data *data)
{
	int	i;
	int	*s;
	int	j;
	int	*c;

	i = 0;
	c = malloc((sizeof(int) * (data->j)));
	s = malloc((sizeof(int) * (data->i + 2)));
	data->i += 1;
	s[i] = data->final[i];
	i++;
	j = 0;
	while (j < data->i)
	{
		s[i] = data->stack[j];
		i++;
		j++;
	}
	i = 0;
	j = 1;
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
	i = 0;
	data->j -= 1;
	ft_printf("%s\n", "pb");
	return (s);
}