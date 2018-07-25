/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 04:08:59 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/20 04:13:12 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp != NULL)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
			(*f)(tmp->data);
		tmp = tmp->next;
	}
}
