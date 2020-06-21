#include <unistd.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb >= 2)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return(1);
}

/*
int		main(void)
{
	printf("%i\n", ft_recursive_factorial(10));
	return (0);
}
*/
