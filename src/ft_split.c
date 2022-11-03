/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 08:19:12 by isaad             #+#    #+#             */
/*   Updated: 2022/11/03 13:22:04 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/push_swap.h"

#include"../includes/push_swap.h"

int	wordscount(char const *s, char c)
{
	int	i;
	int	words;
	int	flag;

	i = 0;
	words = 0;
	flag = 1;
	while (s[i])
	{
		if (s[i] == c && !flag)
			flag = 1;
		else if (s[i] != c && flag)
		{
			words++;
			flag = 0;
		}
		i++;
	}
	return (words);
}

char	*wordscut(char const *s, int len, int start, t_data *data)
{
	int		i;

	i = 0;
	data->cc = (char *)malloc(len + 1);
	if (!data->cc)
		return (0);
	while (len > 0)
	{
		data->cc[i++] = s[start - len];
		len--;
	}
	data->cc[i] = '\0';
	return (data->cc);
}

void	wordsplit(t_data *data, char c, char const *s)
{
	int	i;
	int	strl;
	int	word;

	i = 0;
	word = 0;
	strl = 0;
	while (word < data->words)
	{
		while (s[i] && s[i] == c)
			++i;
		while (s[i] != c && s[i])
			if (i++ >= 0)
				strl++;
		data->tc[word++] = wordscut(s, strl, i, data);
		strl = 0;
	}
	data->tc[word] = 0;
}

char	**ft_split(char const *s, char c, t_data *data)
{
	if (!s)
		return (0);
	data->words = wordscount(s, c);
	data->tc = (char **)malloc((data->words + 1) * sizeof(char *));
	if (!data->tc)
		return (0);
	wordsplit(data, c, s);
	return (data->tc);
}
