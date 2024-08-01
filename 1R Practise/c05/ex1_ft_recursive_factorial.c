#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	else if(nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}

int main(void)
{
	int nb = ;
	printf("Factorial of %d -> %d", nb, ft_recursive_factorial(nb));
	return (0);
}