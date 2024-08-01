/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:00:43 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/23 12:54:09 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_alpha(char c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_alpha(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "helloworld";
// 	char	str2[] = "Hello123";
// 	char	str3[] = "Hello World!";
// 	char	str4[] = "";

// 	printf("Test 1: %s -> %d\n", str1, ft_str_is_alpha(str1));
// 	printf("Test 2: %s -> %d\n", str2, ft_str_is_alpha(str2));
// 	printf("Test 3: %s -> %d\n", str3, ft_str_is_alpha(str3));
// 	printf("Test 4: %s -> %d\n", str4, ft_str_is_alpha(str4));
// 	return (0);
// }
