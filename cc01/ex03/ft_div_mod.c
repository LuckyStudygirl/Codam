/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:26:56 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/18 11:25:51 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;

	a = 20;
	b = 7;
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d, b: %d, mod: %d, div: %d\n\n", a, b, mod, div);
	return (0);
}
*/