#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int a = 5;
	int b = 6;
	printf("OLD: a -> %d and b -> %d\n", a, b);
	ft_swap(&a, &b);
	printf("NEW: a -> %d and b -> %d\n", a, b);
	return (0);
}
