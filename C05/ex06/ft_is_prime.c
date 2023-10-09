int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 3, ft_is_prime(3));
	printf("%d -> %d\n", 5, ft_is_prime(5));
	printf("%d -> %d\n", 7, ft_is_prime(7));
	printf("%d -> %d\n", 11, ft_is_prime(11));
	printf("%d -> %d\n", 13, ft_is_prime(13));
	printf("%d -> %d\n", 17, ft_is_prime(17));
	printf("%d -> %d\n", 19, ft_is_prime(19));
	printf("%d -> %d\n", 23, ft_is_prime(23));
	printf("%d -> %d\n", 29, ft_is_prime(29));
}
