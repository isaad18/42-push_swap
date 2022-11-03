#include"../includes/push_swap.h"

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
	printf("%s\n", "ra");
	return (data->final);
}
