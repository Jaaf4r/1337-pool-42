#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(char v[], int size, int last)
{
	int	i;
	
	i = 0;
	if (v[0] == last)
	{
		while (i < size)
			ft_putchar(v[i++]);
		write(1, ".\n", 2);
		return ;
	}
	while (i < size)
		ft_putchar(v[i++]);
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	v[10];
	char	v_max[10];
	int	flag;
	int	base;
	int	i;

	i = 0;
	if (n <= 0 || n > 10)
	{
		write(1, "Insert an 0<n<10\n", 17);
		return ;
	}
	while (i < n)
	{
		v[i] = i + 48;
		v_max[i] = (10 - n) + i + 48;
		i++;
	}
	print_array(v, n, v_max[0]);
	while (v[0] != v_max[0])
	{
		flag = n-1;
		while (v[flag] == v_max[flag])
			--flag;
		base = ++(v[flag]);
		while (flag < n-1)
			v[++flag] = ++base;
		print_array(v, n, v_max[0]);
	}
}
/*
int		main(void)
{
	ft_print_combn(1);
	ft_putchar('\n');
	ft_print_combn(2);
	ft_putchar('\n');
	ft_print_combn(3);
	ft_putchar('\n');
	ft_print_combn(4);
	ft_putchar('\n');
	ft_print_combn(5);
	ft_putchar('\n');
	ft_print_combn(6);
	ft_putchar('\n');
	ft_print_combn(7);
	ft_putchar('\n');
	ft_print_combn(8);
	ft_putchar('\n');
	ft_print_combn(9);
	ft_putchar('\n');
}*/
