/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:15:30 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/24 13:22:01 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*original;

	original = dest;
	while (*dest)
	{
		dest++;
	}
	i = 0;
	while (i < nb && *src)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (original);
}

// int	main(void)
// {
// 	unsigned int	nb;
// 	char	dest1[50] = "It's the best";
// 	char	src1[] = " day ever.";
// 	char	dest2[50] = "It's the best";
// 	char	src2[] = " day ever.";

// 	nb = -2;
// 	printf("My function : '%s'\n", ft_strncat(dest1, src1, nb));
// 	printf("Original function : '%s'\n", strncat(dest2, src2, nb));
// 	return (0);
// }
