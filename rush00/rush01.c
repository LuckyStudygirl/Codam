/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:32:27 by ehazouei          #+#    #+#             */
/*   Updated: 2024/07/14 16:40:05 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char start, char middle, char end, int width);

void	rush(int width, int hight)
{
	int	i;

	i = 1;
	while (i <= hight)
	{
		if (i == 1)
		{
			ft_putchar('/', '*', '\\', width);
		}
		else if (i == hight)
		{
			ft_putchar('\\', '*', '/', width);
		}
		else
		{
			ft_putchar('*', ' ', '*', width);
		}
		i++;
	}
}
