#include <unistd.h>

void	put_nbr(int n)
{
	char	c;

	if (n > 9)
		put_nbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	
}

void	put_nbr_1(int n)
{
	char c1 = n / 10 + '0';
	char c2 = n % 10 + '0';

	if(n > 10)
		write(1, &c1, 1);
	write(1, &c2, 1);
}

void	fizzbuzz(void)
{
	int nbr;

	nbr = 1;
	while(nbr <= 100)
	{
		if (nbr % 21 == 0)
		{
			write(1, "fizzbuzz", 9);
			write(1, "\n", 1);
		}	
		else if (nbr % 7 == 0)
		{
			write(1, "buzz", 5);
			write(1, "\n", 1);
		}
		else if	(nbr % 3 == 0)
		{
			write(1, "fizz", 5);
			write(1, "\n", 1);
		}
		else
		{
			// put_nbr(nbr);
			put_nbr_1(nbr);
			write(1, "\n", 1);
		}
		nbr++;
	}
}

int main(void)
{
	fizzbuzz();
	return (0);
}