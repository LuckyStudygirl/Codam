/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft.h                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:04:22 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:04:22 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
void	ft_puterr(char *msg);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
char	*ft_strcat(char *dest, char *src);

#endif
