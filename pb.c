#include"push_swap.h"

int counter(int *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int *pa(t_data *data, int *ss)
{
	int j;
	int	i;
	int	*s;

	i = 0;
	j = counter(ss);
	s = malloc((sizeof(int) * (j + 2)));
	s[i] = data->final[i];
	i++;
	j = 0;
	while (ss[j])
	{
		s[i] = ss[j];
		j++;
		i++;
	}
	s[i] = 0;
	i = 0;
	j = 1;
	while (data->final[j])
	{
		data->final[i] = data->final[j];
		j++;
		i++;
	}
	return (s);
}