/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:41:52 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/22 18:52:06 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (size < i)
	{
		return (10 + size);
	}
	
	while ((*src != '\0') && (i < size - 1))
	{
		dest[i++] = *src++;
	}
	dest[i] = '\0';
	return (i);

	new_length = size - i - 1
}

int	main(void)
{
	unsigned int size1 = 12;
	size_t size2 = size1;
	char	dest1[25] = "It's the best";
	char	src1[] = " day ever.";
	char	dest2[25] = "It's the best";
	char	src2[] = " day ever.";
	
	unsigned int return_value = ft_strlcat(dest1, src1, size1);
	char	*s = "and the total length is :";
	char	*s1 = "Original function:";
	
	printf("Destination string: '%s' %s %d\n", dest1, s, return_value);
	printf("%s '%s' %s %zu\n",s1,dest2,s,strlcat(dest2, src2, size2));
	
	return (0);
}
// Compile with "cc -Wall -Wextra -Werror ft_strlcat.c -lbsd"
// try it with 0 again
