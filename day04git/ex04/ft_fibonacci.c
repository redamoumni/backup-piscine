/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:31:53 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/08 12:49:06 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int result;

	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index > 1)
	{
		result = ft_fibonacci(index -1)+ft_fibonacci(index-2);
	}
	else
	{
			return (0);
	}
	return (result);
}
