#include"push_swap.h"

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
	s[i] = data->stack[i];
	i++;
	j = 0;
	while (j < data->j)
	{
		s[i] = data->final[j];
		i++;
		j++;
	}
	i = 0;
	j = 1;
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
	i = 0;
	data->i -= 1;
	ft_printf("%s\n", "pa");
	return (s);
}