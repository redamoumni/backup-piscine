/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:14:02 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/07 02:05:06 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	exchange;
	int		size2;

	i = 0;
	size = 0;
	size2 = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	size2 = size - 1;
	while (i < size / 2)
	{
		exchange = str[i];
		str[i] = str[size2 - i];
		str[size2 - i] = exchange;
		i++;
	}
	return (str);
}
