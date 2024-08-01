#include <unistd.h>
#include <stdio.h> //remove

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

void	put_nbr(int nbr)
{	
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr>=10)
		put_nbr(nbr/10);
	char c =nbr%10 + '0';
	write (1, &c, 1);	
}

int main(void)
{
	int tab[] = {14, 234, 33, 42, 5};
	int size = sizeof(tab)/ sizeof(tab[0]);

	ft_rev_int_tab(tab, size);
	int i = 0;
	printf("this is tab array\n");
	while(size > i)
	{
		put_nbr(tab[i++]);
		write(1, " ", 1);
	}
	return (0);
}
