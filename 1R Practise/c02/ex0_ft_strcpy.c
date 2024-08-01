#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (ptr);
}

int main(void)
{
	char dest[10];
	char src[] = "yeah and yeah";
	printf("%s\n", dest);
	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}