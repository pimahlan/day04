#include <stdio.h>

int		ft_sqrt(int nb)
{
	int	root;

	root = 0;
	while (root * root < nb)
	{
		root++;
	}
	if (root * root == nb)
	{
		return (root);
	}
	else
		return (0);
}
/*
int main()
{
    int n = 16;
    printf("%d\n", ft_sqrt(n));

    return 0;
} */
