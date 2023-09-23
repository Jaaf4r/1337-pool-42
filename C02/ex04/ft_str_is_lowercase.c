int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	char	x[]="abcdefjh";
	char	y[]="abcdEfjh";
	char	z[]="";

	printf("it should print 1 | %d\n", ft_str_is_lowercase(x));
	printf("it should print 0 | %d\n", ft_str_is_lowercase(y));
	printf("it should print 1 | %d\n", ft_str_is_lowercase(z));
}*/
