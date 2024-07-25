/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factoria.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:37:42 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/20 17:57:14 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factoria(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		result = nb * ft_recursive_factoria(nb - 1);
		return (result);
	}
	return (0);
}

int	main(void)
{
	int	nb = 4;
	printf("The factorial of %d is %d", nb, ft_recursive_factoria(nb));
	return (0);
}