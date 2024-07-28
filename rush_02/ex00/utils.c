/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:44 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:04:56 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

#include <stdlib.h>

#include <ft.h>

int	validate_number(char *str)
{
	if (*str == '\0')
		return (0);
	if (str[0] == '0' && str[1] != '\0')
		return (0);
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int	is_space(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

char	*trim_spaces(char *str)
{
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(str);
	while (start < ft_strlen(str) && is_space(str[start]))
		start++;
	while (end > 0 && is_space(str[end - 1]))
		end--;
	if (start >= end)
		return (NULL);
	return (duplicate_substring(str, start, end));
}

int	is_empty(char *str)
{
	int	result;

	result = 1;
	while (result && *str != '\0')
	{
		result = result && is_space(*str);
		str++;
	}
	return (result);
}

char	*duplicate_substring(char *str, int start, int end)
{
	char	*dest;
	int		i;

	dest = (char *)malloc((end - start + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		dest[i] = str[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
