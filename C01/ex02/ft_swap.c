void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 4;
	ft_swap(&a, &b);
	printf("a = %d, b = %d", a, b);
}*/
