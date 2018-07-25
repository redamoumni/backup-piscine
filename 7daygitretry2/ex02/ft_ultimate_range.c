/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:22:03 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/19 01:36:39 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *result;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int*)malloc(sizeof(int) * (max - min + 1));
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	result[i] = 0;
	*range = result;
	return (i);
}
