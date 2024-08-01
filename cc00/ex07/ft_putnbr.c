/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:52:04 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/25 20:06:48 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_it_out(char c)
{
	write(1, &c, 1);
}

void	funct(int nb)
{
	int		i;
	char	array[10];

	i = 0;
	while (nb > 0)
	{
		array[i++] = nb % 10 + '0';
		nb /= 10;
	}
	while (i > 0)
	{
		write_it_out(array[--i]);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write_it_out('0');
	}
	else if (nb > 0)
	{
		funct(nb);
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write_it_out('-');
		nb = -nb;
		funct(nb);
	}
}


int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}

