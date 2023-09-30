#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	nbr = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + 48);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
}*/
