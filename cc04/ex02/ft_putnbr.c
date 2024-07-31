/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:49:20 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/29 13:20:43 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	reverse[50];

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		reverse[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		write(1, &reverse[--i], 1);
	}
}

// int main(void)
// {
// 	ft_putnbr(2147483647);
// 	return(0);
// }
