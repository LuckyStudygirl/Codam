/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 13:30:00 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/18 10:54:57 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	ft_strlen(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result++;
		str++;
	}
	return (result);
}
