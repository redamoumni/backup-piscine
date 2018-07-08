/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 03:42:51 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/08 13:26:58 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = 1;
	result = nb;
	while (i < nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
