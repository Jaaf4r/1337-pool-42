#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	range = malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
