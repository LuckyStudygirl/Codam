/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   number_printing.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 15:45:42 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 18:55:29 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "number_printing.h"

#include <stdlib.h>

#include <ft.h>

#include "num_words_dict.h"
#include "num_printing_utils.h"
#include "utils.h"

char	*get_with_end_part(char *words, int zeros_amount, char *sep)
{
	char	*end_part;
	char	*result;

	if (ft_strlen(words) == 0)
		return (allocate_empty_str());
	if (zeros_amount == 0)
		return (ft_strdup(words));
	end_part = get_name_group('1', zeros_amount);
	if (end_part == NULL)
		return (NULL);
	result = combine_parts(words, sep, end_part);
	free(end_part);
	return (result);
}

char	*process_group(
	char *nbr, t_parsing_rules rules, int group_start_index, int zeros_amount)
{
	char	*group;
	char	*words;

	group = select_group(nbr, group_start_index, rules.group_size);
	if (group == NULL)
		return (NULL);
	words = get_words_for_group(group, rules);
	free(group);
	if (words == NULL)
		return (NULL);
	group = get_with_end_part(words, zeros_amount, rules.default_separator);
	free(words);
	if (group == NULL)
		return (NULL);
	return (group);
}

int	is_first_sep_needed(char *nbr, t_parsing_rules rules, int group_index)
{
	int		group_start_index;

	if (rules.comma_before_uncompleted_last)
		return (0);
	if (group_index > 0)
		return (0);
	group_start_index = ft_strlen(nbr) - rules.group_size * (group_index + 1);
	if (nbr[group_start_index] != '0')
		return (0);
	return (1);
}

int	is_comma_before_needed(
	char *nbr, char *group, t_parsing_rules rules, int group_index)
{
	if (!rules.use_comma)
		return (0);
	if (is_first_sep_needed(nbr, rules, group_index))
		return (0);
	if (ft_strlen(group) == 0)
		return (0);
	return (1);
}

int	print_number(
	char *nbr, t_parsing_rules rules, int group_index, int need_comma)
{
	char	*group;
	int		group_start_index;

	group_start_index = ft_strlen(nbr) - rules.group_size * (group_index + 1);
	if (group_start_index + rules.group_size <= 0)
		return (1);
	group = process_group(
			nbr, rules, group_start_index, group_index * rules.group_size);
	if (group == NULL)
		return (0);
	if (print_number(nbr, rules, group_index + 1,
			is_comma_before_needed(nbr, group, rules, group_index)))
	{
		if (ft_strlen(group) > 0
			&& is_first_sep_needed(nbr, rules, group_index))
			ft_putstr(rules.group_separators[0]);
		ft_putstr(group);
		if (need_comma)
			ft_putstr(", ");
		free(group);
		return (1);
	}
	free(group);
	return (0);
}
