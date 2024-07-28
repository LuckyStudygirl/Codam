/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:04:37 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:04:38 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	return (ft_strcpy(dest, src));
}
