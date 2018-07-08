RAJOUTER HEADER

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

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
