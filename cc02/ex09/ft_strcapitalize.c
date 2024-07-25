/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnayir <tnayir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:54:23 by tnayir            #+#    #+#             */
/*   Updated: 2024/07/23 18:16:40 by tnayir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_alphanumeric(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

void	if_its_lowercase_char(char *c)
{
	if ('a' <= *c && *c <= 'z')
	{
		*c = *c - 32;
	}
}

void	if_its_uppercase_char(char *c)
{
	if ('A' <= *c && *c <= 'Z')
	{
		*c = *c + 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_letter_of_the_word;

	i = 0;
	first_letter_of_the_word = 1;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if (first_letter_of_the_word)
				if_its_lowercase_char(&str[i]);
			else if (!first_letter_of_the_word)
				if_its_uppercase_char(&str[i]);
			first_letter_of_the_word = 0;
		}
		else
			first_letter_of_the_word = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str1[] = "hello world! 42foo bar";
// 	char str2[] = "HELLO WORLD! 42FOO BAR";
// 	char str3[] = "123hello 456WORLD";
// 	char str4[] = "salut, comment tu vas ? 
// 	42mots quarante-deux; cinquante+et+un";

// 	printf("Capitalized: %s\n", ft_strcapitalize(str1));
// 	printf("Capitalized: %s\n", ft_strcapitalize(str2));
// 	printf("Capitalized: %s\n", ft_strcapitalize(str3));
// 	printf("Capitalized: %s\n", ft_strcapitalize(str4));
// 	return (0);
// }
