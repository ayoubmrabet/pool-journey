int	ft_iterative_factorial(int nb)
{
	int	i;
	int	facto;

	i = 0;
	facto = 0;
	if (nb < 0)
		return (0);
	while(i <= nb)
	{
		if (i == 0)
			facto = 1;
		else
			facto *= i;
		i++;
	}
	return (facto);
}
