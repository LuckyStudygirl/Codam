/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:05:22 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/29 17:24:25 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[100];
// 	char	src[] = "Why is the ocean so clean? It has mer-maids.";
// 	unsigned int	n;

// 	n = 5;
// 	printf("My function:  %s\n", ft_strncpy(dest, src, n));
// 	printf("Original function:  %s\n", strncpy(dest, src, n));
// 	return (0);
// }
