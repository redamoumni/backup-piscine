/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 13:46:01 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/15 14:02:07 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s2 == '*')
	{
		if (!*s1)
		{
			return (nmatch(s1, s2 + 1));
		}
		else
		{
			return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
		}
	}
	else if (*s1 == *s2)
	{
		return (nmatch(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}