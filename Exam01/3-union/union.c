#include <unistd.h>

int	check(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	i,j,len;

	i = 0;
	j = 0;
	len = 0;
	while (s1[len])
		len++;
	while (s1[i])
	{
		if ((check(s1, s1[i], i)) == 0)
			write(1, &s1[i], 1);
		i++;
	}
	while (s2[j])
	{
		if ((check(s2, s2[j], j)) == 0 && (check(s1, s2[j], len)) == 0)
			write(1, &s2[j], 1);
		j++;
	}
}

int	main(int ac, char *av[])
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
