
#include"push_swap.h"
int	sort3(t_data *data)
{
	if (data->j == 2)
	{
		sa(data);
		checkstop(data);
	}
	if (data->j <= 3)
	{
		if (data->final[0] < data->final[1] && data->final[0] < data->final[2])
		{
			if (data->final[1] > data->final[2])
			{
				data->final = sa(data);
				data->final = ra(data);
			}
		}
		if (data->final[1] < data->final[0] && data->final[1] < data->final[2])
		{
			if (data->final[0] < data->final[2])
				data->final = sa(data);
			if (data->final[0] > data->final[2])
				data->final = ra(data);
		}
		if (data->final[2] < data->final[0] && data->final[2] < data->final[1])
		{
			if (data->final[0] < data->final[1])
				data->final = rra(data);
			if (data->final[0] > data->final[1])
			{
				data->final = sa(data);
				data->final = rra(data);
			}
		}
		if (data->final[0] > data->final[1])
			data->final = sa(data);
	}
	return (0);
}

int	sort5(t_data *data)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (data->j > 3 && data->j < 6)
	{
		while (j < data->j)
		{
			if (data->final[i] > data->final[j])
			{
				i++;
				j = 0;
			}
			j++;
		}
		if (i > data->j / 2)
		{
			while (i < data->j)
			{
				data->final = rra(data);
				i++;
			}
		}
		if (i <= data->j / 2)
		{
			while (i)
			{
				data->final = ra(data);
				i--;
			}
		}
		if (data->j == 4)
		{
			data->stack = pb(data);
			sort3(data);
			data->final = pa(data);
			freeextra(data);
			return (0);
		}
		checkstop(data);
		data->stack = pb(data);
		j = 0;
		i = 0;
		while (j < data->j)
		{
			if (data->final[i] < data->final[j])
			{
				i++;
				j = 0;
			}
			j++;
		}
		if (i > data->j / 2)
		{
			while (i < data->j)
			{
				data->final = rra(data);
				i++;
			}
		}
		if (i <= data->j / 2)
		{
			while (i)
			{
				data->final = ra(data);
				i--;
			}
		}
		data->stack = pb(data);
		sort3(data);
		data->final = pa(data);
		data->final = ra(data);
		data->final = pa(data);
		freeextra(data);
	}
	return (0);
}

int	pushit(t_data *data, int i)
{
	if (i > data->j / 2)
	{
		while (i < data->j)
		{
			data->final = rra(data);
			i++;
		}
		data->stack = pb(data);
	}
	else if (i <= data->j / 2)
	{
		while (i)
		{
			data->final = ra(data);
			i--;
		}
		data->stack = pb(data);
	}
	return (0);
}

int	sendback(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (data->i)
	{
		while (j < data->i)
		{
			if (data->stack[i] < data->stack[j])
			{
				i++;
				j = 0;
			}
			j++;
		}
		if (i > data->i / 2)
		{
			while (i < data->i)
			{
				data->stack = rrb(data);
				i++;
			}
			data->final = pa(data);
			i = 0;
			j = 0;
		}
		else if (i <= data->i / 2)
		{
			while (i)
			{
				data->stack = rb(data);
				i--;
			}
			data->final = pa(data);
			i = 0;
			j = 0;
		}
	}
	return (0);
}

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
		while (i < data->j && j >= 0)
		{
			if (data->final[i] <= data->test[n])
			{
				pushit(data, i);
				i = 0;
				j = data->j;
			}
			else if (data->final[j] <= data->test[n])
			{
				pushit(data, j);
				i = 0;
				j = data->j;
			}
			i++;
			j--;
		}
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

int	*startshit(t_data *data)
{
	int	i;
	int a;

	i = 0;
	data->j = wordscount(data->str, ' ');
	free(data->str);
	if (data->j == 1)
	{
		free(data->tc[0]);
		free (data->tc);
		exit(0);
	}
	data->i = 0;
	if (data->j > 3)
		data->stack = malloc(sizeof(int) * (data->j));
	data->final = malloc(sizeof(int) * (data->j));
	data->test = malloc(sizeof(int) * (data->j));
	while (i < data->j)
	{
		data->final[i] = ft_atoi(data->tc[i], data);
		data->test[i] = data->final[i];
		free(data->tc[i]);
		i++;
	}
	free (data->tc);
	i = 0;
	while (i < data->j)
	{
		a = fft_strchr(data->final, data->final[i], i, data);
		if (a == 0)
		{
			write(2, "Error\n", 6);
			if (data->j < 4)
				freeall(data);
			else
				freeextra(data);
			exit(0);
		}
		i++;
	}
	i = 0;
	sortshit(data);
	return (data->final);
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
				if ((argv[i][j] > 47 && argv[i][j] < 58) && (argv[i][j + 1] == '-' || argv[i][j + 1] == '+'))
				{
					write(2, "Error\n", 6);
					exit(0);
				}
				if ((argv[i][j] == '-' && !(argv[i][j + 1] > 47 && argv[i][j + 1] < 58)) || (argv[i][j] == '+' && !(argv[i][j + 1] > 47 && argv[i][j + 1] < 58)))
				{
					write(2, "Error\n", 6);
					exit(0);
				}
				if (!((argv[i][j] > 47 && argv[i][j] < 58) || argv
					[i][j] == ' ' || argv[i][j] == '-' || argv[i][j] == '+'))
				{
					write(2, "Error\n", 6);
					exit(0);
				}
				j++;
				c++;
			}
			i++;
		}
	}
	else
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	c += i - 2;
	return (c);
}

int	main(int argc, char **argv)
{
	t_data	data;
	int		i;
	int		j;
	int		c;

	i = 1;
	c = 0;
	j = jawaker(argc, argv);
	data.str = (char *)malloc(j + 1);
	data.str[j] = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				data.str[c] = argv[i][j];
				c++;
				j++;
			}
			i++;
			if (argv[i] != (void *)0)
			{
				data.str[c] = ' ';
				c++;
			}
		}
	}
	else
		write(2, "Error\n", 6);
	data.tc = ft_split(data.str, ' ', &data);
	startshit(&data);
}
