/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dictionary.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:59 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:04:00 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
# define DICTIONARY_H

typedef struct s_dict_entry
{
	char	*key;
	char	*value;
}	t_dict_entry;

char	*try_get_item(char *key);
int		try_insert_item(char *key, char *value);
void	free_dictionary(void);

#endif
