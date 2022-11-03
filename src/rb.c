#include"../includes/push_swap.h"

int	*rb(t_data *data)
{
	int	j;
	int	i;

	i = 0;
	while (i < data->i - 1)
	{
		j = data->stack[i];
		data->stack[i] = data->stack[i + 1];
		data->stack[i + 1] = j;
		i++;
	}
	printf("%s\n", "rb");
	return (data->stack);
}
