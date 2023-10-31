#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	z;

	z = 'z';
	while (z >= 'a')
	{
		if (z % 2 != 0)
			ft_putchar(z - 32);
		else
		{
			ft_putchar(z);
		}
		z--;
	}
	write(1, "\n", 1);
	return (0);
}
