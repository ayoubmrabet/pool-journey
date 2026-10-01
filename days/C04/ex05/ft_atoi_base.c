int	is_base(char c, char *base);
int	check_base(char	*base);
int	get_index(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long int		nb;
	int		len;

	i = 0;
	sign = 1;
	nb = 0;
	len = check_base(base);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (is_base(str[i], base))
	{
		nb = (nb * len) + get_index(str[i], base);
		i++;
	}
	return (nb * sign);
}

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int	is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_base(char	*base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (i);
}
