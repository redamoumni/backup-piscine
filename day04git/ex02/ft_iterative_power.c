/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 03:42:51 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/08 12:18:54 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	i = 1;
	result = nb;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
