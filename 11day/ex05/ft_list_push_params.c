/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 22:43:53 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/20 02:31:56 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*begin_list;
	t_list	*tmp;

	begin_list = NULL;
	tmp = NULL;
	i = 0;
	if (ac == 0)
		return (begin_list);
	while (i < ac)
	{
		begin_list = ft_create_elem(av[i]);
		begin_list->next = tmp;
		tmp = begin_list;
		i++;
	}
	return (begin_list);
}
