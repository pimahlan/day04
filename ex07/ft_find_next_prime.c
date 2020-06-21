#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
	int div;
	div =2;
   if(nb <=1)
   {
	   return(0);
   }

	while( div < nb)
	{
		if(nb % div ==0)
		{
			return(0);
		}
		div++;
	}
	return(1);
}

int ft_find_next_prime(int nb)
{
	int temp;
	temp = nb;
	while(!(ft_is_prime(temp)))
	{
		temp++;
	}

	return(temp);
}

/*
int main()
{
	printf("%d\n",ft_find_next_prime(8));

	return(0);
}*/
