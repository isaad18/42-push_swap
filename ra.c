#include"push_swap.h"

int	*ra(t_data *data)
{
	int	j;
	int	i;

	i = 0;
	while (i < data->j - 1)
	{
		j = data->final[i];
		data->final[i] = data->final[i + 1];
		data->final[i + 1] = j;
		i++;
	}
	ft_printf("%s\n", "ra");
	return (data->final);
}
