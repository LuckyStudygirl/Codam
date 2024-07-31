/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:33:04 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/31 14:41:50 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int next_prime)
{
	int	mid;

	if (next_prime <= 1)
		return (0);
	if (next_prime == 2 || next_prime == 3)
		return (1);
	if (next_prime % 2 == 0 || next_prime % 3 == 0)
		return (0);
	mid = (next_prime + 1) / 2;
	while (mid > 4)
	{
		if (next_prime % mid == 0)
			return (0);
		mid--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	else if (nb > 2147483629)
		return (0);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

// int main(void)
// {
// 	int nb = 10000000;
// 	printf("Next prime after the number %d is %d\n"
// , nb, ft_find_next_prime(nb));
// }
