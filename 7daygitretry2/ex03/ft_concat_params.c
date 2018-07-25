/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:27:14 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/19 02:01:22 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		i;
	int		k;
	int		j;

	j = 0;
	k = 0;
	i = 1;
	result = malloc(sizeof(result) * argc);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			result[k] = argv[i][j];
			j++;
			k++;
		}
		if (i != (argc - 1))
			result[k] = '\n';
		k++;
		i++;
	}
	result[k] = '\0';
	return (result);
}
