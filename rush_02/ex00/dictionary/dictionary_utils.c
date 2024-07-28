/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dictionary_utils.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:51 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:03:52 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary_utils.h"

#include <stdlib.h>

#include <ft.h>

t_dict_entry	*create_entry(char *key, char *value)
{
	t_dict_entry	*entry;

	if (key == NULL)
		return (NULL);
	entry = (t_dict_entry *)malloc(sizeof(t_dict_entry));
	if (entry == NULL)
		return (NULL);
	entry->key = ft_strdup(key);
	if (entry->key == NULL)
	{
		free(entry);
		return (NULL);
	}
	entry->value = NULL;
	if (value != NULL)
	{
		entry->value = ft_strdup(value);
		if (entry->value == NULL)
		{
			free(entry->key);
			free(entry);
			return (NULL);
		}
	}
	return (entry);
}

int	compare_by_key(void *first, void *second)
{
	char	*first_key;
	char	*second_key;

	first_key = ((t_dict_entry *)first)->key;
	second_key = ((t_dict_entry *)second)->key;
	return (ft_strcmp(first_key, second_key));
}

void	free_dict_entry(void *entry)
{
	free(((t_dict_entry *)entry)->key);
	free(((t_dict_entry *)entry)->value);
	free(entry);
}
