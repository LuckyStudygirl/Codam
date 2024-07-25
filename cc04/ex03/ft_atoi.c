/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:29:41 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/25 18:15:48 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	while (isspace(*str))
	{
		str++;
	}
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -sign;
		}
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int	main(void)
{
	char	*str;

	str = "          --+-++---239409u84";
	printf("%d\n", ft_atoi(str));
	return (0);
}
