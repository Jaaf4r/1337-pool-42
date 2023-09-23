int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	x[]="ABCDEFGH";
	char	y[]="ABCDeFGH";
	char	z[]="";

	printf("it should print 1 | %d\n", ft_str_is_uppercase(x));
	printf("it should print 0 | %d\n", ft_str_is_uppercase(y));
	printf("it should print 1 | %d\n", ft_str_is_uppercase(z));
}*/
