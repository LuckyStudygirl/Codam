/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:32:22 by ehazouei          #+#    #+#             */
/*   Updated: 2024/07/14 16:48:30 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char start, char middle, char end, int width)
{
	int	j;

	j = 1;
	while (j <= width)
	{
		if (j == 1)
		{
			write(1, &start, 1);
		}
		else if (j == width)
		{
			write(1, &end, 1);
		}
		else
		{
			write(1, &middle, 1);
		}
		j++;
	}
	write(1, "\n", 1);
}
