#include"push_swap.h"

int counter(int *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int *rrb(int *ss)
{
    int i;
    int j;
	int	d;
    int *c;

    i = counter(ss);
    c = malloc(sizeof(int) * i);
    d = ss[i - 1];
    i = 0;
    j = 0;
    while (ss[j + 1])
    {
		c[i] = ss[j];
		j++;
		i++;
    }
	c[i] = 0;
	i = 0;
	j = 0;
	while (ss[j])
	{
		ss[j] = c[i];
		j++;
		i++;
	}
    ss[j] = d;
	return (ss);
}