/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:22:55 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/18 22:14:17 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_count_words(char *str)
{
	int words;
	int i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
			i++;
		if (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
			words++;
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
				&& str[i] != '\0')
			i++;
	}
	return (words);
}

int		ft_words(char *str, int i, char **tab, int j)
{
	int k;
	int l;
	int n;

	l = i;
	k = 0;
	while (str[l++] > 32)
		k++;
	if (!(tab[j] = (char *)malloc(sizeof(*str) * (k + 1))))
		return (0);
	l = i;
	n = 0;
	while (n < k)
		tab[j][n++] = str[l++];
	tab[j][n] = '\0';
	return (1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		j;
	int		i;

	tab = NULL;
	j = ft_count_words(str);
	if (!(tab = (char **)malloc(sizeof(char *) * (j + 1))))
		return (0);
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == '\n' || str[i] == '\t' ||
					str[i] == ' ') && str[i] != '\0')
			i++;
		if (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
		{
			ft_words(str, i, tab, j);
			j++;
		}
		while (str[i] != 32 && str[i] != 9 && str[i] != '\n' && str[i] != '\0')
			i++;
	}
	tab[j] = 0;
	return (tab);
}
