/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:34:29 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/23 12:58:18 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (original_dest);
}

// int	main(void)
// {
// 	char	dest[100];
// 	char	src[] = "Do not take life too seriously.";

// 	printf("%s\n", ft_strcpy(dest, src));
// 	return (0);
// }
