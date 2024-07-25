/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:25:46 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/20 18:55:08 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if(power < 0)
		return (0);
	else if(nb == 1)
		return (1);
	while(power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int main(void)
{
	int nb = 1;
	int power = 0;
	printf("%d to the power of %d is %d\n", nb, power, ft_iterative_power(nb, power));
	return (0);
}
