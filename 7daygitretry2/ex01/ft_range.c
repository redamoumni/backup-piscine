/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:47:31 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/19 01:59:54 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *result;
	int i;

	i = 0;
	if (!(result = malloc(sizeof(result) * (max - min))))
		return (NULL);
	if (min >= max)
	{
		result = NULL;
		return (result);
	}
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
