/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   number_printing.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:35 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 18:38:02 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_PRINTING_H
# define NUMBER_PRINTING_H

# include "parsing_rules.h"

int	print_number(
		char *nbr, t_parsing_rules rules, int group_index, int need_comma);

#endif
