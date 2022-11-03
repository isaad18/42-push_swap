#include"../includes/push_swap.h"

void	helper4(t_data *data)
{
	if (data->j == 4)
	{
		data->stack = pb(data);
		sort3(data);
		data->final = pa(data);
		freeextra(data);
		exit(0);
	}
}