#include"push_swap.h"

int	*rrb(t_data *data)
{
	int	i;
	int	j;

	i = data->i - 1;
	while (i)
	{
		j = data->stack[i];
		data->stack[i] = data->stack[i - 1];
		data->stack[i - 1] = j;
		i--;
	}
	ft_printf("%s\n", "rrb");
	return (data->stack);
}
