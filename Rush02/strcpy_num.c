char	*strcp_num(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != ':')
	{
		if (src[i] >= '0' && src[i] <= '9')
			dest[i] = src[i];
		i++;
	}
	dest[i] = ':';
	return (dest);
}
