/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:12:08 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/23 12:54:53 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char	str1[] = "abcde";
// 	char	str2[] = "123abc";
// 	char	str3[] = "";
// 	char	str4[] = "abcdEFG";

// 	printf("Test 1: %s -> %d\n", str1, ft_str_is_lowercase(str1));
// 	printf("Test 2: %s -> %d\n", str2, ft_str_is_lowercase(str2));
// 	printf("Test 3: %s -> %d\n", str3, ft_str_is_lowercase(str3));
// 	printf("Test 3: %s -> %d\n", str4, ft_str_is_lowercase(str4));
// 	return (0);
// }
