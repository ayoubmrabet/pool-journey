int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	i = 1;
	while (2*i <= nb)
	{
		if (i*i == nb)
			return (i);
		i++;
	}
	return (0);
}
