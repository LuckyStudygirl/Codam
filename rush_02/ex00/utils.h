/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:46 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:03:47 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

int		validate_number(char *str);
char	*trim_spaces(char *str);
int		is_empty(char *str);
char	*duplicate_substring(char *str, int start, int end);

#endif
