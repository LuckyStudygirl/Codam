/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:56:24 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/23 12:54:17 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "12345";
// 	char	str2[] = "123abc";
// 	char	str3[] = "";

// 	printf("Test 1: %s -> %d\n", str1, ft_str_is_numeric(str1));
// 	printf("Test 2: %s -> %d\n", str2, ft_str_is_numeric(str2));
// 	printf("Test 3: %s -> %d\n", str3, ft_str_is_numeric(str3));
// 	return (0);
// }
