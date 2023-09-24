char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	x[]="FREEDOM";
	char	y[]="THiRTeEN tHIrTY SevEN";

	printf("%s\n", ft_strlowcase(x));
	printf("%s\n", ft_strlowcase(y));
}*/
