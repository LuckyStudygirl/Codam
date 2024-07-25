/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:39:09 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/22 12:14:51 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	low;
	int	mid;
	int	high;

	if (nb < 2)
		return (0);

	low = 1, high = nb;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}

int main(void)
{
	int nb;
	
	nb = 100;
	printf("The square root of number %d is %d", nb, ft_sqrt(nb));
	return (0);
}