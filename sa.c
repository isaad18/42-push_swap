#include"push_swap.h"

int	*sa(t_data *data)
{
	int	c;

	c = data->final[0];
	data->final[0] = data->final[1];
	data->final[1] = c;
	return (data->final);
}
