/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:38:09 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/07 01:02:02 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	while (i < size)
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}
