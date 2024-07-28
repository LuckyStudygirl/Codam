/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/09 11:10:50 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/18 10:57:49 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
