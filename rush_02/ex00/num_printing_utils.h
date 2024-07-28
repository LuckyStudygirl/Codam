/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   num_printing_utils.h                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:22 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 18:46:43 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_PRINTING_UTILS_H
# define NUM_PRINTING_UTILS_H

# include "parsing_rules.h"

char	*combine_parts(char *first, char *sep, char *second);
char	*get_name_for_digit(char digit);
char	*get_name_digit_and_zeros(char digit, int zeros_amount, char *sep);
char	*get_words_for_group(char *group, t_parsing_rules rules);
char	*get_name_group(char begin, int zeros_amount);
char	*get_special_value(char *nbr, char **to_combine);
char	*select_group(char *nbr, int start, int size);
char	*allocate_empty_str(void);

#endif
