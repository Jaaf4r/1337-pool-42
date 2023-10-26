#include <unistd.h>

int	main(void)
{
	int	n;

	for (n = '9'; n >= '0'; n--)
	{
		write(1, &n, 1);
	}
	return (0);
}
