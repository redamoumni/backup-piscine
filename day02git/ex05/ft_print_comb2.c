/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 12:35:19 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/07 00:09:09 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c ,1);
	return (0);
}

void	print(int i, int j)
{
	int unit;
	int decade;
	
	unit = 0;
	decade = 0;

	if (i<10)
	{
	ft_putchar(0);
	ft_putchar(i);
	}
	else
	{
	ft_putchar(i / 10);
	ft_putchar(i % 10);
	}

	ft_putchar(' ');

	if (j<10)
	{
	ft_putchar(0+48);
	ft_putchar(j+48);
	}
	else
	{
	unit = j / 10;
	decade = j % 10;
	ft_putchar(unit+48);
	ft_putchar(decade+48);
	}

	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	
	i = '0';
	while (i <= 99)
	{	
		j = i + 1;
		while (j <= 99)
		{
			if (i < 99 && j < 98)
			{
				print(i, j);
			}
			j++;
		}
	i++;
	}
}
