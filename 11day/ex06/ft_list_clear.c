/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 02:34:01 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/25 22:00:51 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = NULL;
	tmp = *begin_list;
	if (*begin_list == NULL)
		*begin_list = NULL;
	else
	{
		while (tmp != NULL)
		{
			tmp2 = tmp;
			tmp = tmp->next;
			free(tmp2);
		}
		*begin_list = NULL;
	}
}
