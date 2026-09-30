unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;

	while (dest[len])
		len++;
	while (src[i] && ((i + len) < size))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = 0;
	while (src[i])
		i++;
	return (len + i);
}
