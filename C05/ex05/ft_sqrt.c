int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	n = nb;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	i = 2;
	if (n >= 2 )
	{
		while (i * i <= n)
		{
			if (i * i == n)
				return (i);
			i++;
		}
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
}
