char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	i;

	if (nb < 1)
		return (dest);
	len = 0;
	i = 0;
	while (dest[len])
		len++;
	while (src[i] && (i < nb))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[i + len] = 0;
	return (dest);
}
