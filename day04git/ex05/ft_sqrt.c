/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:52:00 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/08 13:20:59 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int result;
	int i;

	i = 0;
	result = 0;
	
	while (i <= nb)
	{
		if (i * i == nb)
		{
			result = i;
			return (result);
		}
		i++;
	}
	
	return (result);
}