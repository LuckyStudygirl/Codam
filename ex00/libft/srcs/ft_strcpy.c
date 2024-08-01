/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:04:34 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:04:35 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
