/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:44:17 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/14 16:51:46 by tnayir           ###   ########.fr       */
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
			ft_putchar('A', 'B', 'A', width);
		}
		else if (i == hight)
		{
			ft_putchar('C', 'B', 'C', width);
		}
		else
		{
			ft_putchar('B', ' ', 'B', width);
		}
		i++;
	}
}
