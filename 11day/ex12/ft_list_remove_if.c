/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 04:17:55 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/23 14:41:31 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *tmp2;

	tmp2 = NULL;
	tmp = begin_list;
	while (tmp != NULL)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
		{
			tmp2 = tmp;

		}
		tmp = tmp->next;
		free(tmp2);
	}
}
