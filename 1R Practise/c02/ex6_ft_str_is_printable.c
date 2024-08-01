#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while(*str)
	{
		if(!(32 <= *str && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

int main(void)
{
	char *str = "hello bye";
	char *str1 = "hello\n BYE";
	char *str2 = "Hello\tDamn";
	printf("%s -> %d\n", str, ft_str_is_printable(str));
	printf("%s -> %d\n", str1, ft_str_is_printable(str1));
	printf("%s -> %d\n", str2, ft_str_is_printable(str2));
	return (0);
}