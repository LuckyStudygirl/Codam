/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:48:33 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/25 15:55:36 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	str_length;

	str_length = 0;
	while (str[str_length] != '\0')
	{
		str_length++;
	}
	return (str_length);
}

// int	main(void)
// {
// 	char *str = "Willy Wonka's Chocolate Factory";
// 	printf("'%str' has %d characters!", str, ft_strlen(str));
// 	return (0);
// }