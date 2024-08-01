/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:39:09 by tnayir            #+#    #+#             */
/*   Updated: 2024/08/01 14:18:35 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int		low;
	int		mid;
	int		high;
	long	square;

	if (nb < 1)
		return (0);
	low = 1;
	high = nb;
	while (low <= high)
	{
		mid = (low + high) / 2;
		square = (long)mid * mid;
		if (square == nb)
			return (mid);
		else if (square < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}

// int main(void)
// {
// 	int nb = 100000000;
// 	printf("The square root of number %d is %d", nb, ft_sqrt(nb));
// 	return (0);
// }
