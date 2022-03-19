
#include"push_swap.h"

int	*startshit(t_data *data)
{
	int	i;
	int a;

	i = 0;
	data->j = wordscount(data->str, ' ');
	data->final = malloc(sizeof(int) * (data->j));
	data->stack = malloc(sizeof(int) * (data->j));
	while (i < data->j)
	{
		data->final[i] = ft_atoi(data->tc[i]);
		printf("%d\n", data->final[i]);
		i++;
	}
	data->stack[0] = 4;
	data->stack[1] = 99;
	data->stack[2] = 6;
	i = 0;
	while (i < data->j)
	{
		a = fft_strchr(data->final, data->final[i], i);
		if (a == 0)
		{
			ft_printf("%s\n", "error, duplicated number");
			exit(0);
		}
		i++;
	}
	i = 0;
	printf("%s\n", "eyruigfkhvcybuewgskvsunyretgdscngfuybgt7n834e");
	data->final = rra(data);
	while (i < data->j)
	{
		ft_printf("%d\n", data->final[i]);
		i++;
	}
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
				if ((argv[i][j] == '-' && !(argv[i][j + 1] > 47 && argv[i][j + 1] < 58)) || (argv[i][j] == '+' && !(argv[i][j + 1] > 47 && argv[i][j + 1] < 58)))
				{
					ft_printf("%s\n", "error, wrong input");
					exit(0);
				}
				if (!((argv[i][j] > 47 && argv[i][j] < 58) || argv
					[i][j] == ' ' || argv[i][j] == '-' || argv[i][j] == '+'))
				{
					ft_printf("%s\n", "error, wrong input");
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
		ft_printf("%s\n", "error, wrong number of arguements");
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
	printf("%s\n", data.str);
	data.tc = ft_split(data.str, ' ');
	startshit(&data);
}
