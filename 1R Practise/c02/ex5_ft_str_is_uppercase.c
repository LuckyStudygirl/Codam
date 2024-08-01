#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if(!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

int main(void)
{
	char *str = "It's all Good";
	char *str1 = "HAHAHA";
	printf("%s -> %d\n", str, ft_str_is_uppercase(str));
	printf("%s -> %d", str1, ft_str_is_uppercase(str1));
	return (0);
}