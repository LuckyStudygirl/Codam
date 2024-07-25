/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:15:09 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/22 12:32:20 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	mid;
	if (nb <= 1)
		return 0;
	mid = (nb + 1) / 2;
	while (mid >= 2)
	{
		if(nb % mid == 0)
			return 0;
		mid--;
	}
	return 1;
}

int main(void)
{
	int	nb;
	int	is_prime;

	nb = 97;
	is_prime = ft_is_prime(nb);
	if (is_prime == 1)
		printf("Number %d is prime", nb);
	else
		printf("NUmber %d is not prime",nb);
	return (0);
}
