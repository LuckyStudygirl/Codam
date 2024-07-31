/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:15:09 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/31 13:29:07 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

// int main(void)
// {
// 	int nb = 2147483647;
// 	int is_prime = ft_is_prime(nb);

// 	if (is_prime == 1)
// 		printf("Number %d is prime", nb);
// 	else
// 		printf("Number %d is not prime",nb);

// 	return (0);
// }
