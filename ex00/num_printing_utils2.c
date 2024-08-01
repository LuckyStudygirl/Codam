/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_printing_utils2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:43:59 by msirenev          #+#    #+#             */
/*   Updated: 2024/07/29 18:44:36 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "num_printing_utils.h"

#include <stdlib.h>
#include <stdio.h>
#include <ft.h>

#include "num_words_dict.h"
#include "utils.h"

char	*allocate_empty_str(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char));
	result[0] = '\0';
	return (result);
}

char	*select_group(char *nbr, int start, int size)
{
	//(54)(354)(235)(423)(243)
	// 54 -> 054, start = -1
	char	*dest;
	int		i;

	dest = (char *)malloc((size + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (start + i < 0)
			dest[i] = '0';
		else
			dest[i] = nbr[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*combine_parts(char *first, char *sep, char *second)
{
	char	*result;
	char	result_length;

	result_length = ft_strlen(first) + ft_strlen(sep) + ft_strlen(second);
	result = (char *)malloc((result_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	ft_strcat(result, first);
	ft_strcat(result, sep);
	ft_strcat(result, second);
	return (result);
}

char	*get_name_for_digit(char digit)
{
	char	*digit_str;
	char	*name;

	digit_str = (char *)malloc(2 * sizeof(char));
	digit_str[0] = digit;
	digit_str[1] = '\0';
	name = try_get_words(digit_str);
	free(digit_str);
	return (name);
}

// 100 = "hundred"
// 40 = "forty"
// 400 = FAIL
// 1000 = "thousand"
// 1000000 = "million"
char	*get_name_group(char begin, int zeros_amount)
{
	char	*nbr;
	char	*result;
	int		i;

	nbr = (char *)malloc((zeros_amount + 2) * sizeof(char));
	if (nbr == NULL)
		return (NULL);
	nbr[0] = begin;
	i = 1;
	while (i <= zeros_amount)
	{
		nbr[i] = '0';
		i++;
	}
	nbr[zeros_amount + 1] = '\0';
	result = try_get_words(nbr);
	free(nbr);
	return (result);
}
