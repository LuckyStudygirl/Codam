/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dictionary_utils.h                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:54 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:03:55 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_UTILS_H
# define DICTIONARY_UTILS_H

# include "dictionary.h"

t_dict_entry	*create_entry(char *key, char *value);
int				compare_by_key(void *first, void *second);
void			free_dict_entry(void *entry);

#endif
