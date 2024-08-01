/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing_rules.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:41 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 19:59:00 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "parsing_rules.h"

#include <stdlib.h>

t_parsing_rules	get_parsing_rules(void)
{
	t_parsing_rules	rules;

	rules.group_size = 3;
	rules.group_separators[0] = " and ";
	rules.group_separators[1] = "-";
	rules.comma_before_uncompleted_last = 0;
	rules.use_comma = 1;
	rules.comma = ", ";
	rules.last_treat_special_amount = 2;
	rules.default_separator = " ";
	return (rules);
}

t_parsing_rules	get_jp_parsing_rules(void)
{
	t_parsing_rules	rules;

	rules.group_size = 4;
	rules.group_separators[0] = "";
	rules.group_separators[1] = "";
	rules.group_separators[2] = "";
	rules.comma_before_uncompleted_last = 1;
	rules.use_comma = 1;
	rules.comma = "、";
	rules.last_treat_special_amount = 1;
	rules.default_separator = "";
	return (rules);
}

t_parsing_rules	get_tr_parsing_rules(void)
{
	t_parsing_rules	rules;

	rules.group_size = 3;
	rules.group_separators[0] = " ";
	rules.group_separators[1] = " ";
	rules.comma_before_uncompleted_last = 1;
	rules.use_comma = 1;
	rules.comma = ", ";
	rules.last_treat_special_amount = 2;
	rules.default_separator = " ";
	return (rules);
}
