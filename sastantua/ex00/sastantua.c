/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:29:18 by rmoumni           #+#    #+#             */
/*   Updated: 2018/07/08 11:55:09 by rmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	end_line(int size)
{
	int stage;
	int end_line
	int add;

	add = 6;
	end_line = 1;
	stage = 1;
	while (stage <= size)
	{
		end_line = end_line + 2;
		if ( stage == size)
		{
			end_line = end_line + 6
		}
		stage++;
				
	}
}
void print_line(int i, int line, int carac)
{
	int add;
	int j;

	add = 6;
	j = 1;
	carac = 3;

	while (j <= line)
		{
			carac
		}
	carac = carac + 


	//des qu'il arrive a la dernier ligne il fais ajout 

	while (j != carac)
	{
		ft_putchar('*');
		j++;
	}

		//afficher les espaces
		//afficher les caracteres
}

void print_stage(int i,int line_count)
{
	int line = 2 + i;
	int j;
	int add;
	int carac;


	add =
	carac = 
	
	j = 1;
	line_count = 0;
	while (j <= line)
	{
		carac = carac +
		print_line(i,line);
		ft_putchar('\n')
		j++;
	}
	//ft_putchar('\n');
}

void	sastantua(int size)
{
	int i;
	//int end_line = //recuperation  taille derniere ligne
	int line_count;
	int line_stage;
	
	i = 1;
	line_count = 0;
	line_stage = 3;
	while (i <= size)
	{
		line_count = line_count + line_stage;
		line_stage += 1;
		i++;
	}


	i = 1;
	//iter la conception de letage tant que i<=size
	while (i <= size )
	{
		print_stage(i,line_count);
		i++;
	}
			//affiche les ligne du bloc en question (en prenant en compte les espace avant les ligne et le fais que 1er carac = / et dernier \
		//incremente nbline et j revient a 1
	//conception etage finis	
		
		return ;
}
