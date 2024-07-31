/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:29:41 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/29 13:22:18 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isspace(char c)
{
	if (!(c == ' ' || c == '\f' || c == '\n'
			|| c == '\r' || c == '\t' || c == '\v'))
	{
		return (0);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	if (*str == '\0')
		return (0);
	while (ft_isspace(*str))
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

// int	main(void)
// {
// 	char	*str;

// 	str = "            +--++-+2147483648";
// 	printf("%d\n", ft_atoi(str));
// 	return (0);
// }
