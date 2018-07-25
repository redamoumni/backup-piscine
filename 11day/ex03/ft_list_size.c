/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 01:28:13 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/20 01:34:02 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 1;
	if (begin_list == NULL)
		return (0);
	else
	{
		while (begin_list->next != NULL)
		{
			begin_list = begin_list->next;
			i++;
		}
	}
	return (i);
}
