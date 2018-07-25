/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 01:35:08 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/20 03:51:18 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	if (begin_list == NULL)
		return (NULL);
	else
	{
		tmp = begin_list;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		return (tmp);
	}
}
