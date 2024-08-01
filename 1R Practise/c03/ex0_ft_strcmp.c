#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while((*s1 && *s2))
	{
		if(*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if(*s1 == *s2)
		return (0);
	return (*s1 - *s2);
}

int	main(void)
{
	char *str1 = "alregttyl";
	char *str2 = "al";
	printf("My func: %d\n", ft_strcmp(str1, str2));
	printf("Original: %d", strcmp(str1, str2));
	return (0);
}