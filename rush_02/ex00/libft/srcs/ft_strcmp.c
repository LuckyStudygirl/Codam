/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 15:58:50 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/18 10:54:51 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	c1;
	unsigned char	c2;

	c1 = (unsigned char)*s1++;
	c2 = (unsigned char)*s2++;
	if (c1 == '\0')
		return ((int)c1 - (int)c2);
	while (c1 == c2)
	{
		c1 = (unsigned char)*s1;
		c2 = (unsigned char)*s2;
		s1++;
		s2++;
		if (c1 == '\0')
			return ((int)c1 - (int)c2);
	}
	return ((int)c1 - (int)c2);
}
