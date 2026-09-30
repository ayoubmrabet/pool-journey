#include <unistd.h>

int	check_base(char	*base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long int	nbr_l;

	nbr_l = nbr;
	if (nbr_l < 0)
	{
		write(1, "-", 1);
		nbr_l = -nbr_l;
	}
	len = check_base(base);
	if (len == 1 || len == 0)
		return;
	if (nbr_l / len)
		ft_putnbr_base(nbr_l / len, base);
	write(1, &base[nbr_l % len], 1);
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
