/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:36:44 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/30 13:33:05 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	compare(char **s1, char **s2)
{
	char	*str1;
	char	*str2;

	str1 = *s1;
	str2 = *s2;
	while (*str1 && *str2)
	{
		if (*str1 > *str2)
		{
			swap(s1, s2);
			return ;
		}
		else if (*str1 < *str2)
			return ;
		str1++;
		str2++;
	}
	if (*str1 != '\0' && *str2 == '\0')
		swap(s1, s2);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i - 1)
		{
			compare(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
