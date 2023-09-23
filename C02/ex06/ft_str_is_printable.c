int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	x[]="abCdEF123!@#$%./?";
	char	y[]="\n\t\v\f";
	char	z[]="";

	printf("it should print 1 | %d\n", ft_str_is_printable(x));
	printf("it should print 0 | %d\n", ft_str_is_printable(y));
	printf("it should print 1 | %d\n", ft_str_is_printable(z));
}*/
