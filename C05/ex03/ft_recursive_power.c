int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	if (power > 1)
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 3));
}
