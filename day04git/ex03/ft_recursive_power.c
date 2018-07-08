/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 04:07:25 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/08 12:30:22 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int result;
	int i;

	i = 1;
	result = nb;
	if (power >  1)
	{
		result = result * ft_recursive_power(nb,power-1);
		nb = 1;
	}
	else
	{

	}
	return (result);
}
