#include <unistd.h>

void	put_nbr(int nbr1, int nbr2)
{
	char	array[5];

	array[0] = (nbr1 / 10) + '0';
	array[1] = (nbr1 % 10) + '0';
	array[2] = ' ';
	array[3] = (nbr2 / 10) + '0';
	array[4] = (nbr2 % 10) + '0';
	write(1, array, 5);
}
void	ft_print_comb2(void)
{
	int	nbr1;
	int nbr2;

	nbr1 = 0;
	while(nbr1 <= 98)
	{
		nbr2 = nbr1 + 1;
		while(nbr2 <= 99)
		{
			put_nbr(nbr1, nbr2);
			if (!(nbr1 == 98 && nbr2 == 99))
				write(1, ", ", 2);
			nbr2++;
		}
		nbr1++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}