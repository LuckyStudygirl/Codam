/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:04:34 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/23 12:56:03 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_it_uppercase_char(char c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_it_uppercase_char(str[i]))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "HELLO WORLD";
// 	char	str2[] = "HaHaHaHa!";
// 	char	str3[] = "hELLokiNG1234";
// 	char	str4[] = "";

// 	printf("Original: %s -> Lowercase: %s\n", str1, ft_strlowcase(str1));
// 	printf("Original: %s -> Lowercase: %s\n", str2, ft_strlowcase(str2));
// 	printf("Original: %s -> Lowercase: %s\n", str3, ft_strlowcase(str3));
// 	printf("Original: %s -> Lowercase: %s\n", str4, ft_strlowcase(str4));
// 	return (0);
// }
