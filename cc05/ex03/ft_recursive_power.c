/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:29:31 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/20 19:52:10 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
    if (power == 0)
        return 1;
    if (power < 0)
        return 0;
    if (nb == 0)
        return 0;
    return nb * ft_recursive_power(nb, power - 1);
}

int main(void)
{
	int nb = -3;
	int power = 0;
	printf("%d to the power of %d is %d\n", nb, power, ft_recursive_power(nb, power));
	return (0);
}
