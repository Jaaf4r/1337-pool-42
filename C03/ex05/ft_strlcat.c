int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	destlen = i;
	srclen = ft_strlen(src);
	if (size < destlen)
		return (size + srclen);
	while (src[j] && j < size - destlen - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (destlen + srclen);
}

#include <stdio.h>

int	main(void)
{
	char	dest[]="Hello, ";
	char	src[]="world!";

	printf("The new string is %s | Its full length is %d\n",dest , ft_strlcat(dest, src, 4));
}
