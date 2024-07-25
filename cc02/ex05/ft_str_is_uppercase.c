/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:53:32 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/23 12:55:07 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char	str1[] = "ABCDE";
// 	char	str2[] = "123ABC";
// 	char	str3[] = "";
// 	char	str4[] = "abcdEFG";

// 	printf("Test 1: %s -> %d\n", str1, ft_str_is_uppercase(str1));
// 	printf("Test 2: %s -> %d\n", str2, ft_str_is_uppercase(str2));
// 	printf("Test 3: %s -> %d\n", str3, ft_str_is_uppercase(str3));
// 	printf("Test 3: %s -> %d\n", str4, ft_str_is_uppercase(str4));
// 	return (0);
// }