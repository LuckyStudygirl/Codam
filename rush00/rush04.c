/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:52:47 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/14 16:55:24 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char start, char middle, char end, int width);

void	rush(int w, int h)
{
	int	i;

	i = 1;
	if (h >= 1)
	{
		ft_putchar('A', 'B', 'C', w);
	}
	while (i < h -1)
	{
		ft_putchar('B', ' ', 'B', w);
		i++;
	}
	if (i == h -1)
	{
		ft_putchar('C', 'B', 'A', w);
	}
}
