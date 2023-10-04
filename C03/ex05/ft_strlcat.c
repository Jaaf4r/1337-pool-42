unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (src[j] == '\0')
		return (dest);
	while (dest[i])
	{
		while (dest[i + j] && src[j] &&
