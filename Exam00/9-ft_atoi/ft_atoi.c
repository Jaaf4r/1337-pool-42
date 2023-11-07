int	ft_atoi(const char *str)
{
	int	i = 0;
	int	sign = 1;
	int	number = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number *= 10 + str[i] - '0';
		i++;
	}
	return (number * sign);
}
