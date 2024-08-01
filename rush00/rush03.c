/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:46:52 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/14 15:59:48 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char start, char middle, char end, int width);

void	rush(int width, int hight)
{
	int	i;

	i = 1;
	while (i <= hight)
	{
		if (i == 1 || i == hight)
		{
			ft_putchar('A', 'B', 'C', width);
		}
		else
		{
			ft_putchar('B', ' ', 'B', width);
		}
		i++;
	}
}
