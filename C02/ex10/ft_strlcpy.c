int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = ft_strlen(src);
	if (size)
	{
		while (size && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}

#include <stdio.h>

int	main(void)
{
	char	dest[]="idk what";
	char	src[]="to write xd";

	printf("%d | %s\n", ft_strlcpy(dest, src, 6), dest);
}
