/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 02:59:17 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/25 22:06:35 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*tmp3;

	tmp3 = NULL;
	tmp2 = NULL;
	tmp = *begin_list;
	if (*begin_list == NULL || tmp->next == NULL)
	{
	}
	else
	{
		while (tmp != NULL)
		{
			tmp2 = tmp->next;
			tmp->next = tmp3;
			tmp3 = tmp;
			tmp = tmp2;
		}
		*begin_list = tmp3;
	}
}
