int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("hello world", "hello horld", 6));
	printf("%d\n", ft_strncmp("hello world", "hello horld", 7));
	printf("%d\n", ft_strncmp("hello world", "hello worlz", 11));
}
