/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 02:45:48 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/20 02:58:17 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tmp;

	i = 1;
	tmp = begin_list;
	if (begin_list == NULL)
		return (NULL);
	else
	{
		while (i <= nbr && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
			if (i <= nbr && tmp == NULL)
				return (NULL);
		}
	}
	return (tmp);
}
