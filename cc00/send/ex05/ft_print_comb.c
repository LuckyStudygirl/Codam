/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:06:57 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/17 14:49:31 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char i, char j, char k, int boolean)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (!boolean)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;
	char	*space;
	int		boolean;

	space = ", ";
	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				boolean = (i == '7' && j == '8' && k == '9');
				ft_write(i, j, k, boolean);
				k++;
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
