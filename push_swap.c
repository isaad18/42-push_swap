#include"push_swap.h"

int	make100(t_data *data)
{
	int	n;
	int	i;
	int	j;
	int	d;
	int	z;

	i = 0;
	j = data->j;
	n = data->j;
	if (n <= 100)
		n /= 6;
	if (n > 100)
		n /= 10;
	d = n;
	z = data->j;
	while (data->j)
	{
		if (n >= z)
			n = z - 1;
		helper100(data, i, j, n);
		n += d;
		i = 0;
		j = data->j;
	}
	return (0);
}

int	sortshit(t_data *data)
{
	checksort(data);
	if (data->j <= 3)
	{
		sort3(data);
		freeall(data);
	}
	if (data->j > 3 && data->j < 6)
		sort5(data);
	if (data->j > 5)
	{
		draftsort(data);
		make100(data);
		sendback(data);
		freeextra(data);
	}
	return (0);
}

void	startshit(t_data *data)
{
	int	i;

	i = 0;
	data->j = wordscount(data->str, ' ');
	free(data->str);
	if (data->j == 1)
		etla3(data);
	data->i = 0;
	if (data->j > 3)
		data->stack = ft_calloc( (data->j) + 1, sizeof(int));
	data->final = ft_calloc( (data->j) + 1, sizeof(int));
	data->test = ft_calloc( (data->j) + 1, sizeof(int));
	while (i < data->j)
	{
		data->final[i] = ft_atoi(data->tc[i], data);
		data->test[i] = data->final[i];
		free(data->tc[i]);
		i++;
		data->z++;
	}
	free (data->tc);
	duplicates(data);
	sortshit(data);
}

int	jawaker(int argc, char **argv)
{
	int		i;
	int		j;
	int		c;

	i = 1;
	j = 0;
	c = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				checkinput(argv, i, j);
				j++;
				c++;
			}
			i++;
		}
	}
	else
		exit(0);
	c += i - 2;
	return (c);
}

int	main(int argc, char **argv)
{
	t_data	data;
	int		j;

	j = jawaker(argc, argv);
	data.z = 0;
	data.str = (char *)malloc(j + 1);
	data.str[j] = 0;
	if (argc > 1)
	{
		takeargs(&data, argv);
	}
	else
		exit(0);
	data.tc = ft_split(data.str, ' ', &data);
	startshit(&data);
}
