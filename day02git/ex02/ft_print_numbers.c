/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:19:01 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/07 00:28:42 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char number_1);

void	ft_print_numbers(void)
{
	char	number_1;
	char	number_9;

	number_1 = '0';
	number_9 = '9';
	while (number_1 <= number_9)
	{
		ft_putchar(number_1);
		number_1++;
	}
	return ;
}
