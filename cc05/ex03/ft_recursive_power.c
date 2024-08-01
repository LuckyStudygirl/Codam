/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:29:31 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/30 13:52:01 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int main(void)
// {
// 	int nb = 0;
// 	int power = 1;
// 	int result = ft_recursive_power(nb, power);
// 	printf("%d to the power of %d is %d\n", nb, power, result);
// 	return (0);
// }
