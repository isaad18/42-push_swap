#include"../includes/push_swap.h"

void	takeargs(t_data *data, char **argv)
{
	int		i;
	int		j;
	int		c;

	i = 1;
	c = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			data->str[c] = argv[i][j];
			c++;
			j++;
		}
		i++;
		if (argv[i] != (void *)0)
		{
			data->str[c] = ' ';
			c++;
		}
	}
}

void	checkinput(char **argv, int i, int j)
{
	if ((argv[i][j] > 47 && argv[i][j] < 58) && (argv[i]
			[j + 1] == '-' || argv[i][j + 1] == '+'))
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	if ((argv[i][j] == '-' && !(argv[i][j + 1] > 47 && argv[i][j + 1] < 58)
			) || (argv[i][j] == '+' && !(argv[i]
					[j + 1] > 47 && argv[i][j + 1] < 58)))
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
}

void	duplicates(t_data *data)
{
	int	i;
	int	a;

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
}
