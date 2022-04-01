int ft_max(int *arr, int len)
{
    if (!arr)
        return (0);
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return (max);
}

int	max(int *array, int len)
{
	int	i =0, j=0;
	if (!array)
		return (0);
	while (i < len)
	{
		if (array[j] < array[i])
		{
			j++;
			i = 0;
		}
		i++;
	}
	return (array[j]);
}

#include <stdio.h>

int main(void)
{
	int arr[6] = {101, 0, 106, 5, -999, 55};
	printf("Ana %d\n", ft_max(arr, 6));
	printf("Emad %d\n", max(arr,6));
	return 0;
}


