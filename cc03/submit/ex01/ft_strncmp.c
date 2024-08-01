/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:36:26 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/24 13:21:29 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n - 1 && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	unsigned int	n;

// 	n = 6;
//     char	*str1 = "apple";
//     char	*str2 = "apple";
//     char	*str3 = "apples";
//     char	*str4 = "";
//     char	*str5 = "banana";

//     printf("Comparing original : %d", strncmp(str1, str2, n));
// 	printf(",  and my function: %d\n", ft_strncmp(str1, str2, n));
//     printf("Comparing original : %d", strncmp(str1, str3, n));
// 	printf(",  and my function: %d\n", ft_strncmp(str1, str3, n));
//     printf("Comparing original : %d", strncmp(str3, str1, n));
// 	printf(",  and my function: %d\n", ft_strncmp(str3, str1, n));
//     printf("Comparing original : %d", strncmp(str1, str4, n));
// 	printf(",  and my function: %d\n", ft_strncmp(str1, str4, n));
//     printf("Comparing original : %d", strncmp(str1, str5, n));
// 	printf(",  and my function: %d\n", ft_strncmp(str1, str5, n));
//     return (0);
// }
