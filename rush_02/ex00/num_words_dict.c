/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   num_words_dict.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:25 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 18:37:57 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "num_words_dict.h"

#include <stdlib.h>

#include <ft.h>

#include "dictionary/dictionary.h"
#include "file_reader.h"
#include "utils.h"

int	try_put_num_word_pair(char *num, char *word)
{
	char	*trimmed_num;
	char	*trimmed_words;
	int		is_success;

	trimmed_num = trim_spaces(num);
	trimmed_words = trim_spaces(word);
	is_success = 1;
	if (trimmed_num != NULL && trimmed_words != NULL
		&& validate_number(trimmed_num) && ft_strlen(trimmed_words) > 0)
		is_success = try_insert_item(trimmed_num, trimmed_words);
	else
		is_success = 0;
	free(trimmed_num);
	free(trimmed_words);
	return (is_success);
}

int	try_put_line(char *line)
{
	int	i;

	i = 0;
	while (i < ft_strlen(line) && line[i] != ':')
		i++;
	if (i >= ft_strlen(line))
		return (0);
	line[i] = '\0';
	return (try_put_num_word_pair(line, &line[i + 1]));
}

int	read_dict_from_file(int fd)
{
	char	*line;
	int		is_success;

	is_success = 1;
	line = read_from_file(fd, '\n');
	while (is_success && line != NULL && ft_strlen(line) > 0)
	{
		if (ft_strcmp(line, "\n") != 0)
		{
			is_success = try_put_line(line);
		}
		free(line);
		line = read_from_file(fd, '\n');
	}
	if (is_success == 0 || line == NULL)
	{
		is_success = 0;
		free_dictionary();
	}
	free(line);
	return (is_success);
}

char	*try_get_words(char *num)
{
	return (try_get_item(num));
}
