/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:27:02 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/31 17:15:47 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (j);
}

void	ft_putnbr(int nbr, int base_length, char *base)
{
	char	reverse[50];
	int		j;

	j = 0;
	while (nbr > 0)
	{
		reverse[j] = base[nbr % base_length];
		nbr /= base_length;
		j++;
	}
	while (j > 0)
	{
		write(1, &reverse[--j], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_length;

	if (!(check_base(base)))
		return ;
	base_length = check_base(base);
	if (base_length < 2)
		return ;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	ft_putnbr(nbr, base_length, base);
}

// int main(void)
// {
// 	int	nbr = -64;
// 	char *base1 = "0123456789ABCDEF";
// 	char *base2 = "01";
// 	char *base3 = "poneyvif";
// 	char *base4 = "0123456789";

// 	printf("Hexadecimal =  \n");
// 	ft_putnbr_base(nbr, base1);
// 	printf("\n");
// 	printf("Binary = \n");
// 	ft_putnbr_base(nbr, base2);
// 	printf("\n");
// 	printf("Poneyvif = \n");
// 	ft_putnbr_base(nbr, base3);
// 	printf("\n");
// 	printf("Decimal = \n");
// 	ft_putnbr_base(nbr, base4);
// 	printf("\n");

// 	return (0);
// }