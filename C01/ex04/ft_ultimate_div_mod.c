void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = *a / *b;
	tmp_b = *a % *b;
	*a = tmp_a;
	*b = tmp_b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	aa;
	int	bb;

	a = 10;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}*/
