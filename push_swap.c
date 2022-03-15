#include"push_swap.h"

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
	char	*str;
	int		i;
	int		j;
	int		c;

	i = 1;
	c = 0;
	j = jawaker(argc, argv);
	str = (char *)malloc(j + 1);
	str[j] = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				str[c] = argv[i][j];
				c++;
				j++;
			}
			i++;
			if (argv[i] != (void *)0)
			{
				str[c] = ' ';
				c++;
			}
		}
	}
	printf("%s", str);
}