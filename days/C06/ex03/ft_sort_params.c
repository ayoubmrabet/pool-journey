#include <unistd.h>

void	ft_putstr(char *str);

void	ft_swap(char **s1, char **s2);

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	index;

	if (argc <= 1)
		return (0);
	i = 1;
	while (i < argc)
	{
		index = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[index], argv[j]) < 0)
				index = j;
			j++;
		}
		ft_swap(&argv[i], &argv[index]);
		i++;
	}
	i = 0;
	while ((i++) < (argc - 1))
		ft_putstr(argv[i]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] || s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*p;

	p = *s1;
	*s1 = *s2;
	*s2 = p;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
