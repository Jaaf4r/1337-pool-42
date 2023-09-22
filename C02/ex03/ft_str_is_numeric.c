int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	x[]="1234567890";
	char	y[]="12345a7890";
	char	z[]="";

	printf("it should print 1 | %d\n", ft_str_is_numeric(x));
	printf("it should print 0 | %d\n", ft_str_is_numeric(y));
	printf("it should print 1 | %d\n", ft_str_is_numeric(z));
}
