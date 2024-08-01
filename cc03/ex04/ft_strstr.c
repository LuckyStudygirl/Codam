/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:58:43 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/24 13:19:49 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j])
			{
				j++;
			}
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char str[] = "Hello, world!";
//     char to_find[] = "oR";
//     char *result;

//     result = ft_strstr(str, to_find);
// 	if (result != NULL)
// 		printf("Substring found: '%s'\n", result);
// 	else
// 		printf("Substring not found\n");
// 	return (0);
// }
