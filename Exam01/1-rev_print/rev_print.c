#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_rev_print(char *str)
{
	int	l;

	l = ft_strlen(str) - 1;
	while (l >= 0)
	{
		write(1, &str[l], 1);
		l--;
	}
	return (str);
}
