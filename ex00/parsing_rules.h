/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing_rules.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:38 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 19:05:51 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_RULES_H
# define PARSING_RULES_H

typedef struct s_parsing_rules
{
	int		group_size; // 3
	char	*group_separators[100]; // " and ", "-"
	int		comma_before_uncompleted_last; // 0
	int		use_comma; // 1
	char	*comma; // ", "
	int		last_treat_special_amount; // 2
	char	*default_separator; // " "
}	t_parsing_rules;

t_parsing_rules	get_parsing_rules(void);
t_parsing_rules	get_jp_parsing_rules(void);

#endif
