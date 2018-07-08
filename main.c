#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *str);
int 	ft_strlen(char *str);
char *ft_strrev(char *str);
void ft_print_comb2(void);
int ft_iteractive_factorial(int nb);
void sastantua(int size);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);

int     main(void)
{
/* day 03 exo 5	
   char chaine[] = "lachaine";
   char *P_chaine;

 *P_chaine = &chaine[0];
 ft_putstr(P_chaine);
 return(0);
 */
	/* day 03 exo 6 
	   char chaine[]= "salut";

	   ft_strlen(&str);
	   */
	/* day03 exo 7 
	   char chaine[] = "aventure";
	   char *p = &chaine[0];
	   ft_strrev(p);
	   printf("%s",chaine);
	   */
	/*day 2 exo 5

	  ft_print_comb2();
	  */
	/*day 4 ex00 et ex01

	int n = 5;
	int result = 0;
	result=ft_iteractive_factorial(n);
	printf("%d",result);
	*/
	/*	sastantua(5);*/
	/* day 4 ex02 ex03 
	int nb = 5;
	int power = 3;
	int result = 0;
	result = ft_recursive_power(nb,power);
	printf("%d",result);
*/	
	/*day 04 ex04 
	int index = 5;
	int result = 0;
	result = ft_fibonacci(index);
	printf("%d",result);
	*/
	/*day 04 ex05 */
	int nb = 9;
	int result = ft_sqrt(nb);
	printf("%d",result);
	  
}

