#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strs_len(char **strs, int size, int sep_len)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		total_len += sep_len;
		i++;
	}
	total_len -= sep_len;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	char	*str;
    char    *d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_len = ft_strs_len(strs, size, ft_strlen(sep));
	d = (str = (char *)malloc((total_len + 1) * sizeof(char)));
	if (!str)
		return (NULL);
    i = 0;
    while (i < size)
    {
        ft_strcpy(d, strs[i]);
        d += ft_strlen(strs[i]);
        if (i < size - 1)
        {
            ft_strcpy(d, sep);
            d += ft_strlen(sep);
        }
        i++;
	}
	*d = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"alo", "si", "btata"};
	int	    size = 3;
    char    *sep = " ";
    char    *s = ft_strjoin(size, strs, sep);
	printf("%s$\n", s);
	free(s);
}
*/
