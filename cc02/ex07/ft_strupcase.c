/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:30:33 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/23 12:55:36 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_it_lowercase_char(char c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_it_lowercase_char(str[i]))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "hello world";
// 	char	str2[] = "HaHaHaHa!";
// 	char	str3[] = "1234";
// 	char	str4[] = "";

// 	printf("Original: %s -> Uppercase: %s\n", str1, ft_strupcase(str1));
// 	printf("Original: %s -> Uppercase: %s\n", str2, ft_strupcase(str2));
// 	printf("Original: %s -> Uppercase: %s\n", str3, ft_strupcase(str3));
// 	printf("Original: %s -> Uppercase: %s\n", str4, ft_strupcase(str4));
// 	return (0);
// }
