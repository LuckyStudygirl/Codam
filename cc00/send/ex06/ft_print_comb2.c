/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:42:13 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/17 14:51:33 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_to_char(char *str)
{
	write (1, str, 5);
}

void	ft_print_comb2(void)
{
	int		first;
	int		second;
	char	str[6];

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			str[0] = (first / 10) + '0';
			str[1] = (first % 10) + '0';
			str[2] = ' ';
			str[3] = (second / 10) + '0';
			str[4] = (second % 10) + '0';
			str[5] = '\0';
			str_to_char(str);
			if (first != 98 || second != 99)
			{
				write(1, ", ", 2);
			}
			second++;
		}
		first++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
