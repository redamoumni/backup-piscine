/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 11:40:15 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/07 00:26:06 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;
	char	z;

	c = 'a';
	z = c + 26;
	while (c != z)
	{
		ft_putchar(c);
		c++;
	}
	return ;
}