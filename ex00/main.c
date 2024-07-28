/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:16 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 19:15:42 by msirenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_reader.h"

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include <ft.h>

#include "num_words_dict.h"
#include "utils.h"
#include "parsing_rules.h"
#include "number_printing.h"

int	try_read_dict(char *dict_path)
{
	int		fd;

	fd = open(dict_path, O_RDONLY);
	if (fd == -1)
	{
		ft_puterr("Dict Error\n");
		return (0);
	}
	if (!read_dict_from_file(fd))
	{
		close(fd);
		ft_puterr("Dict Error\n");
		return (0);
	}
	close(fd);
	return (1);
}

int	try_print_number(char *nbr)
{
	char			*words;
	int				is_success;
	t_parsing_rules	rules;

	if (ft_strcmp(nbr, "0") == 0)
	{
		words = try_get_words(nbr);
		if (words == NULL)
			return (0);
		ft_putstr(words);
		ft_putstr("\n");
		return (1);
	}
	rules = get_parsing_rules();
	is_success = print_number(nbr, rules, 0, 0);
	if (is_success)
		ft_putstr("\n");
	return (is_success);
}

int	process_number(char *nbr, char *dict_path)
{
	char			*trimmed_nbr;
	int				is_success;

	trimmed_nbr = trim_spaces(nbr);
	if (trimmed_nbr == NULL || !validate_number(trimmed_nbr))
	{
		free(trimmed_nbr);
		ft_puterr("Error\n");
		return (0);
	}
	if (!try_read_dict(dict_path))
	{
		free(trimmed_nbr);
		return (0);
	}
	is_success = try_print_number(trimmed_nbr);
	free(trimmed_nbr);
	if (!is_success)
		ft_puterr("Dict error\n");
	return (is_success);
}

int	main(int argc, char **argv)
{
	char	*nbr;
	int		is_success;

	is_success = 0;
	if (argc == 1)
	{
		nbr = read_from_file(STDIN_FILENO, 0);
		is_success = process_number(nbr, "numbers.dict");
		free(nbr);
	}
	else if (argc == 2)
		is_success = process_number(argv[1], "numbers.dict");
	else if (argc == 3)
		is_success = process_number(argv[1], argv[2]);
	else
		ft_puterr("Error\n");
	if (is_success)
		return (0);
	return (-1);
}
