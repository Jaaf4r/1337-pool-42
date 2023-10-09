int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb <= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d -> %d\n", 8439, ft_find_next_prime(8439));
}
