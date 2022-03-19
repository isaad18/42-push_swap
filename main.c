#include"push_swap.h"

int	*ii(void)
{
	int	i;
	int	j;
    int *final;

	final = calloc(10, (sizeof(int) * 10));
    i = 0;
    while (i < 11)
    {
        printf("%d\n", final[i]);
        i++;
    }
	return (final);
}

int main(void)
{
    ii();
    return (0);
}