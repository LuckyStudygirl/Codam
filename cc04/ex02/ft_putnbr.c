/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:49:20 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/25 18:08:51 by tnayir           ###   ########.fr       */
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
	while(nb > 0)
	{
		reverse[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while(i > 0)
	{
		write(1, &reverse[--i], 1);
	}
}

int main(void)
{
	ft_putnbr(100);
	return(0);
}