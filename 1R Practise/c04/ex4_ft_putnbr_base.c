#include <stdio.h>
#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == ' ' || base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if(base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	str_length(char *base)
{
	int		base_length;

	base_length = 0;
	while (base[base_length])
	{
		base_length++;
	}
	return (base_length);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_length;
	char	c;

	if (!check_base(base))
		return ;
	if (nbr == -2147483648)
		return ;
	base_length = str_length(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_length)
		ft_putnbr_base(nbr / base_length, base);
	c = base[nbr % base_length];
	write(1, &c, 1);
}

int main(void)
{
	char binary[] = "01";
	char hexadec[] = "0123456789ABCDEF";
	int nbr = 128;
	ft_putnbr_base(nbr, binary);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, hexadec);
	write(1, "\n", 1);
	return (0);
}
