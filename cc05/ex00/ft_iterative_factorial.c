/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:00:22 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/30 13:40:21 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		result *= (nb--);
	}
	return (result);
}

// int	main(void)
// {
// 	int	nb = 0;
// 	printf("The factorial of %d is %d\n", nb, ft_iterative_factorial(nb));
// 	return (0);
// }
