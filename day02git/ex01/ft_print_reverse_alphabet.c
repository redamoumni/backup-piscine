/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:19:54 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/06 22:25:23 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	c;
	char	a;

	c = 'z';
	a = c - 26;
	while (c != a)
	{
		ft_putchar(c);
		c--;
	}
	return ;
}
