/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:16:27 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/17 20:45:50 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		length;
	int		i;

	i = 0;
	length = 0;
	while (*(src + i) != '\0')
	{
		length++;
		i++;
	}
	length++;
	i = 0;
	if (length > 0)
		result = (char *)malloc(sizeof(result));
	while (*(src + i) != '\0')
	{
		*(result + i) = *(src + i);
		i++;
	}
	*(result + i) = '\0';
	return (result);
}
