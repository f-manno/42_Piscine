void	ft_strcmp(char *dict, char *n_cmp)
{
	int i;

	i = 0;
	while (n_cmp[i] != '\0')
	{
		if (!(dict[i] == n_cmp[i]))
			return (0);
		i++;
	}
	return (1);
}