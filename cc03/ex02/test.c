
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i++] = src[j++];
	}
	dest[i]= '\0';
	return (dest);
}

int	main(void)
{
	char dest1[50] = "It's the best";
	char src1[] = " day ever.";
	char dest2[50] = "It's the best";
	char src2[] = " day ever.";

	printf("My function : '%s'\n", ft_strcat(dest1, src1));
	printf("Original function : '%s'\n", strcat(dest2, src2));
	return (0);
}