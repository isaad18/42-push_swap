/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 09:52:03 by isaad             #+#    #+#             */
/*   Updated: 2022/03/18 11:56:49 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				res;
	int				j;
	long long int	check;

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
			ft_printf("%s\n", "error, out of INT range");
			exit(0);
		}
		i++;
	}
	if (!(str[i] == '\0'))
	{
		ft_printf("%s\n", "error, wrong input");
		exit(0);
	}
	return (res * j);
}
