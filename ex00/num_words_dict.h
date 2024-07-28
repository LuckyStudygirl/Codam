/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   num_words_dict.h                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:28 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:03:29 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_WORDS_DICT_H
# define NUM_WORDS_DICT_H

int		read_dict_from_file(int fd);
int		try_put_num_word_pair(char *num, char *words);
char	*try_get_words(char *num);

#endif
