/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 13:29:51 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/18 10:54:41 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

#include <unistd.h>

void	ft_putstr(char *str)
{
	write(STDOUT_FILENO, str, ft_strlen(str));
}

void	ft_puterr(char *msg)
{
	write(STDERR_FILENO, msg, ft_strlen(msg));
}
