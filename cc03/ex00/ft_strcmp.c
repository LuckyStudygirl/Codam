/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:56:04 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/24 12:42:56 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
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
// 	char *str1 = "apple";
// 	char *str2 = "apple";
// 	char *str3 = "apples";
// 	char *str4 = "";
// 	char *str5 = "banana";

// 	printf("Original : %d ", strcmp(str1, str2));
//  	printf(",  my function: %d\n ", ft_strcmp(str1, str2));
// 	printf("Original : %d ", strcmp(str1, str3));
//  	printf(",  my function: %d\n ", ft_strcmp(str1, str3));
// 	printf("Original : %d ", strcmp(str3, str1));
//  	printf(",  my function: %d\n ", ft_strcmp(str3, str1));
// 	printf("Original : %d ", strcmp(str1, str4));
//  	printf(",  my function: %d\n ", ft_strcmp(str1, str4));
// 	printf("Original : %d ", strcmp(str1, str5));
//  	printf(",  my function: %d\n ", ft_strcmp(str1, str5));
// 	return (0);
// }
