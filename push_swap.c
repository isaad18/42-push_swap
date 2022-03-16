#include"push_swap.h"

int	*startshit(s_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = wordscount(data->str, ' ');
	data->final = malloc((sizeof(data) * (j + 1)));
	while (data->tc[i])
	{
		data->final[i] = ft_atoi(data->tc[i]);
		i++;
	}
	data->final[i] = 0;
	i = 0;
	while (data->final[i])
	{
		printf("%d\n", data->final[i]);
		i++;
	}
	i = 0;
	j = 0;
	while (data->final[i])
	{
		j = fft_strchr(data->final, data->final[i], i);
		if (j == 0)
		{
			ft_printf("%s\n", "error, duplicated number");
			exit(0);
		}
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
				if ((argv[i][j] == ' ' && argv[i][j + 1] == ' ') || argv[i][0] == ' ')
				{
					ft_printf("%s\n", "error, wrong input");
					exit(0);
				}
				if (!((argv[i][j] > 47 && argv[i][j] < 58) || argv[i][j] == ' ' || argv[i][j] == '-'))
				{
					ft_printf("%s\n", "error, wrong input");
					exit(0);
				}
				j++;
				c++;
			}
			if (argv[i][j - 1] == ' ')
			{
				ft_printf("%s\n", "error, wrong input");
				exit(0);
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
	printf("%s\n", data.str);
	data.tc = ft_split(data.str, ' ');
	startshit(&data);
}
