/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:41:12 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/24 13:04:59 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (original_dest);
}

// int	main(void)
// {
// 	char dest1[50] = "It's the best";
// 	char src1[] = " day ever.";
// 	char dest2[50] = "It's the best";
// 	char src2[] = " day ever.";

// 	printf("My function : '%s'\n", ft_strcat(dest1, src1));
// 	printf("Original function : '%s'\n", strcat(dest2, src2));
// 	return (0);
// }
