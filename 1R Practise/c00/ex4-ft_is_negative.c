#include <stdio.h>

char	ft_is_negative(int n)
{
	if (n < 0)
		return ('N');
	return ('P');
}

int	main(void)
{
	int n = -2147483648;
	if(ft_is_negative(n) == 'N')
		printf("number is negative");
	else
		printf("number is positive");
	return (0);
}