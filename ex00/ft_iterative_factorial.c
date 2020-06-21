#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int fact;
	int i;
	i =1;
	fact =1;
	if(nb < 0)
	{
		return(0);
	}
	else
	{
 	 while(i<=nb)
	 {
			fact = fact*i;
			i++;
	 }
	}
	return(fact);

}
/*
int		main(void)
{
	printf("Fac is = %i\n", ft_iterative_factorial(-10));
	return (0);
}
*/

