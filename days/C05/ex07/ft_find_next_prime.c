int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb <= 0)
		nb = 1;
	while (nb)
	{
		if(ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while(i < nb)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}
