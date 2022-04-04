/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 09:52:03 by isaad             #+#    #+#             */
/*   Updated: 2022/04/04 13:45:08 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freeall(t_data *data)
{
	free (data->final);
	free (data->test);
}

void	freeextra(t_data *data)
{
	free (data->final);
	free (data->stack);
	free (data->test);
}

int	ft_atoi(const char *str, t_data *data)
{
	int				i;
	int				j;
	long long int	check;
	int				res;

	j = 1;
	i = 0;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		check = res;
		res = (res * 10) + (str[i] - '0');
		check = (check * 10) + (str[i] - '0');
		if (res != check)
		{
			write(2, "Error\n", 6);
			freeall(data);
			exit(0);
		}
		i++;
	}
	return (res * j);
}
