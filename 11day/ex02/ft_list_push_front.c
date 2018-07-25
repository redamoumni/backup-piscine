/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 00:05:32 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/20 03:38:35 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;
	t_list *tmp;

	list = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = list;
	else
	{
		tmp = *begin_list;
		list->next = tmp;
		*begin_list = list;
	}
}
