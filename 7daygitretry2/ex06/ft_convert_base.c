/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:50:52 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/17 16:22:40 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int i;
	int base;
	char *result;

	i = 0;
	while (*nbr != 0)
	{
		*result = *nbr % *base_from + '*result' ;
		*nbr = *nbr / *base_from;
	}
	return *nbr;
}
int main()
{
	char *nbr = "10"
	return 0;
}
