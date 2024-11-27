void	strcp_alphabeth(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	// n = 0;
	while (src[i] != ':' && dest[i] != ':')
		i++;
	i = i + 1;
	while (src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';
}