/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:23:53 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/29 13:19:12 by tnayir           ###   ########.fr       */
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

int	change_base(char *str, char *base)
{
	int	base_length;
	int	result;
	int	i;

	base_length = 0;
	while (base[base_length] != '\0')
	{
		base_length++;
	}
	result = 0;
	while (*str)
	{
		i = 0;
		while (i < base_length && *str != base[i])
		{
			i++;
		}
		if (i == base_length)
		{
			return (0);
		}
		result = (result * base_length) + i;
		str++;
	}
	return (result);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;

	if (!check_base(base))
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
	if (!change_base(str, base))
		return (0);
	result = change_base(str, base) * sign;
	return (result);
}

// int main()
// {
//     char binary[] = "10000000";
//     char hex[] = "80";
//     char decimal[] = "128";
// 	char poneyvif[] = "npp";

//     char binary_base[] = "01";
//     char hex_base[] = "0123456789ABCDEF";
//     char decimal_base[] = "0123456789";
// 	char poneyvif_base[] = "poneyvif";

//     int binary_result = ft_atoi_base(binary, binary_base);
//     int hex_result = ft_atoi_base(hex, hex_base);
//     int decimal_result = ft_atoi_base(decimal, decimal_base);
// 	int poneyvif_result = ft_atoi_base(poneyvif, poneyvif_base);

//     printf("Binary: '%s' integer: %d\n", binary, binary_result);
//     printf("Hexadecimal: '%s' integer: %d\n", hex, hex_result);
//     printf("Decimal: '%s' integer: %d\n", decimal, decimal_result);
// 	printf("Poneyvif: '%s' integer: %d\n", poneyvif, poneyvif_result);
//     return (0);
// }
