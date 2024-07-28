/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dictionary.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:57 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:03:58 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

#include <stdlib.h>

#include <ft.h>
#include <red_black_tree.h>

#include "dictionary_utils.h"

static t_red_black_tree	*g_root;

char	*try_get_item(char *key)
{
	t_dict_entry	*entry;
	t_dict_entry	*result;

	entry = create_entry(key, NULL);
	if (entry == NULL)
		return (NULL);
	result = search_element(g_root, entry, &compare_by_key);
	free_dict_entry(entry);
	if (result == NULL)
		return (NULL);
	return (ft_strdup(result->value));
}

int	try_insert_item(char *key, char *value)
{
	t_dict_entry		*entry;
	t_red_black_tree	*new_root;

	entry = create_entry(key, value);
	if (entry == NULL)
		return (0);
	if (search_element(g_root, entry, &compare_by_key) != NULL)
	{
		free_dict_entry(entry);
		return (0);
	}
	new_root = insert_new_item(g_root, entry, &compare_by_key);
	if (new_root == NULL)
	{
		free_dict_entry(entry);
		return (0);
	}
	g_root = new_root;
	return (1);
}

void	free_dictionary(void)
{
	free_red_black_tree(g_root, &free_dict_entry);
}
