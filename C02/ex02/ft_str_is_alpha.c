int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	w[]="123.,";
	char	x[]="abcdefjh";
	char	y[]="abcd0fjh";
	char	z[]="";

	printf("it should print 0 | %d\n", ft_str_is_alpha(w));
	printf("it should print 1 | %d\n", ft_str_is_alpha(x));
	printf("it should print 0 | %d\n", ft_str_is_alpha(y));
	printf("it should print 1 | %d\n", ft_str_is_alpha(z));
}*/
