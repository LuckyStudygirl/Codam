/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:28:29 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/14 20:54:09 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	t_print_numbers(void)
{
	char	convert;
	int		x;

	x = 0;
	while (x < 10)
	{
		convert = x + '0';
		write(1, &convert, 1);
		write(1, " ", 1);
		x++;
	}
}

/*
int	main(void){s
	ft_print_numbers();
	return (0);
}
*/
