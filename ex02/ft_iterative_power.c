#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int count;
	int results;
	results = 1;
	count  = power;
	if(nb < 0)
	{
		return(0);
	}
	else
	{
		while(count !=0)
		{
			results *= nb;
			count--;
		}
	}
	return(results);
}
/*
int main()
{
	printf("%i\n",ft_iterative_power(0,3));
	return(0);
}
*/
