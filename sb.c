#include"push_swap.h"

int	*sb(int *s)
{
	int	c;

	c = s[0];
	s[0] = s[1];
	s[1] = c;
	return (s);
}
