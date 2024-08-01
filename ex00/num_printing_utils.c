/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_printing_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:03:19 by msirenev          #+#    #+#             */
/*   Updated: 2024/07/29 18:41:26 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "num_printing_utils.h"

#include <stdlib.h>
#include <ft.h>

#include "num_words_dict.h"
#include "utils.h"

// process normal digits (default - hundreds)
// digit = number of hundreds in group
// 400 (4, 2, " ") = "four hundred"
// 100 (1, 2, " ") = "one hundred"
// 50 (5, 1, "") (Japanese) = "go juu"
char	*get_name_digit_and_zeros(char digit, int zeros_amount, char *sep)
{
	char	*digit_str;
	char	*subgroup;
	char	*str;

	digit_str = get_name_for_digit(digit);
	if (digit_str == NULL)
		return (NULL);
	subgroup = get_name_group('1', zeros_amount);
	if (subgroup == NULL)
	{
		free(digit_str);
		return (NULL);
	}
	str = combine_parts(digit_str, sep, subgroup);
	free(digit_str);
	free(subgroup);
	return (str);
}

char	*append_next_normal_part(char *words, char *new_part, char *sep)
{
	char	*prev_part;

	if (new_part == NULL)
	{
		free(words);
		return (NULL);
	}
	prev_part = words;
	if (ft_strlen(words) == 0)
		words = ft_strdup(new_part);
	else
		words = combine_parts(prev_part, sep, new_part);
	free(prev_part);
	free(new_part);
	return (words);
}

// process hundreds (or in other languages other digits that consist
// of only the name of digit and the name of power of 10)
// i.e. 400 = "four hundred", but 20 = "twenty" (a special word)
// 3450 (Japanese) = "san sen, shi hyaku, go juu"
char	*process_normal_part(char *group, t_parsing_rules rules)
{
	int		i;
	char	*words;
	char	*sep;

	i = 0;
	words = allocate_empty_str();
	while (i < rules.group_size - rules.last_treat_special_amount)
	{
		if (i > 0)
			sep = rules.group_separators[i - 1];
		else
			sep = "";
		if (group[i] != '0')
			words = append_next_normal_part(words, get_name_digit_and_zeros(
						group[i], rules.group_size - i - 1,
						rules.default_separator),
					sep);
		if (words == NULL)
			return (NULL);
		i++;
	}
	return (words);
}

char	*get_words_for_group(char *group, t_parsing_rules rules)
{
	int		i;
	char	*words;
	char	*first;
	char	*second;

	i = rules.group_size - rules.last_treat_special_amount;
	first = process_normal_part(group, rules);
	second = get_special_value(group + i, rules.group_separators + i);
	if (first == NULL || second == NULL)
	{
		free(first);
		free(second);
		return (NULL);
	}
	if (ft_strlen(first) > 0 && ft_strlen(second) > 0)
		words = combine_parts(first, rules.group_separators[i - 1], second);
	else if (ft_strlen(first) > 0)
		words = ft_strdup(first);
	else if (ft_strlen(second) > 0)
		words = ft_strdup(second);
	else
		words = allocate_empty_str();
	free(first);
	free(second);
	return (words);
}

char	*get_special_value(char *nbr, char **to_combine)
{
	char	*result;
	char	*first;
	char	*second;

	if (nbr[0] == '\0')
		return (allocate_empty_str());
	if (nbr[0] == '0')
		return (get_special_value(nbr + 1, to_combine + 1));
	result = try_get_words(nbr);
	if (result == NULL)
	{
		first = get_name_group(nbr[0], ft_strlen(nbr) - 1);
		second = get_special_value(nbr + 1, to_combine + 1);
		if (first != NULL && second != NULL)
			result = combine_parts(first, to_combine[0], second);
		free(first);
		free(second);
	}
	return (result);
}
