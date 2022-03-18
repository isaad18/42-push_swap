#include"push_swap.h"

int counter(int *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int *rb(int *ss)
{
	int i;
	int j;
	int	d;
	int *c;

	i = counter(ss);
	c = malloc(sizeof(int) * i);
	d = ss[0];
	i = 0;
	j = 1;
	while (ss[j])
	{
		c[i] = ss[j];
		j++;
		i++;
	}
	c[i] = 0;
	i = 0;
	while (ss[j])
	{
		ss[i] = c[i];
		j++;
		i++;
	}
	ss[i] = d;
	return (ss);
}