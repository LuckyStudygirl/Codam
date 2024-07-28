/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   file_reader.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: msirenev <msirenev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 17:03:11 by msirenev      #+#    #+#                 */
/*   Updated: 2024/07/28 17:03:12 by msirenev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "file_reader.h"

#include <unistd.h>
#include <stdlib.h>

char	*reallocate_buffer(char *buffer, int *buffer_size)
{
	char	*new_buffer;
	int		new_buffer_size;
	int		i;

	new_buffer_size = *buffer_size * 2;
	new_buffer = (char *)malloc(new_buffer_size * sizeof(char));
	if (new_buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	i = 0;
	while (i < *buffer_size)
	{
		new_buffer[i] = buffer[i];
		i++;
	}
	free(buffer);
	*buffer_size = new_buffer_size;
	return (new_buffer);
}

char	*init_buffer(int *buffer_size, int *read_size)
{
	char	*buffer;

	*buffer_size = 128;
	buffer = (char *)malloc(*buffer_size * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	*read_size = 0;
	return (buffer);
}

char	*create_string(char *buffer, int read_size)
{
	char	*result;
	int		i;

	result = (char *)malloc((read_size + 1) * sizeof(char));
	if (result == NULL)
	{
		free(buffer);
		return (NULL);
	}
	i = 0;
	while (i < read_size)
	{
		result[i] = buffer[i];
		i++;
	}
	result[i] = '\0';
	free(buffer);
	return (result);
}

char	*add_next_char(char *buffer, int *buffer_size, int *read_size, char c)
{
	if (*read_size >= *buffer_size)
		buffer = reallocate_buffer(buffer, buffer_size);
	if (buffer == NULL)
		return (NULL);
	buffer[*read_size] = c;
	(*read_size)++;
	return (buffer);
}

char	*read_from_file(int fd, char stop)
{
	char	c;
	int		bytes_read;
	char	*buffer;
	int		buffer_size;
	int		read_size;

	buffer = init_buffer(&buffer_size, &read_size);
	if (buffer == NULL)
		return (NULL);
	bytes_read = read(fd, &c, 1);
	while (bytes_read > 0 && !(stop && c == stop))
	{
		buffer = add_next_char(buffer, &buffer_size, &read_size, c);
		if (buffer == NULL)
			return (NULL);
		bytes_read = read(fd, &c, 1);
	}
	if (bytes_read > 0)
		buffer = add_next_char(buffer, &buffer_size, &read_size, stop);
	if (bytes_read < 0 || buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	return (create_string(buffer, read_size));
}
