#include"push_swap.h"

int	startshit(s_data *data)
{
	int	i = 0;

	while (data->tc[i])
	{
		data->final = ft_atoi(data->tc[i])
		i++;
	}
	return (0);
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
				if (!((argv[i][j] > 47 && argv[i][j] < 58) || argv[i][j] == ' '))
					exit(0);
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
	s_data	data;
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
	data.tc = ft_split(data.str, ' ');
	startshit(&data);
}
