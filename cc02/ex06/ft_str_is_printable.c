/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:18:50 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/23 12:55:16 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "Hello, World!";
// 	char	str2[] = "Hello\nWorld";
// 	char	str3[] = "Printable123";
// 	char	str4[] = "";
// 	char	str5[] = "Hello\tWorld";

// 	printf("Test 1: %s -> %d\n", str1, ft_str_is_printable(str1));
// 	printf("Test 2: %s -> %d\n", str2, ft_str_is_printable(str2));
// 	printf("Test 3: %s -> %d\n", str3, ft_str_is_printable(str3));
// 	printf("Test 4: %s -> %d\n", str4, ft_str_is_printable(str4));
// 	printf("Test 5: %s -> %d\n", str5, ft_str_is_printable(str5));
// 	return (0);
// }
