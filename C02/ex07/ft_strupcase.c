char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	x[]="vinland";
	char	y[]="PeaCe";

	printf("%s\n", ft_strupcase(x));
	printf("%s\n", ft_strupcase(y));
}*/
