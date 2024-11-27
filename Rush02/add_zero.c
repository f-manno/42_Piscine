void	ft_word_comp(int number, char *dict);
int		ft_strlen(char *string);
int		ft_power(int nb, int npower);

int	add_zero(int number, char *string, char *dict)
		// int number e da atoi.c e string e da dal main -> av
{
	int j;
	j = ft_strlen(string) - 1;
	int module;

	if (number)
	{
		module = number % ft_power(10, j);
		number = number / ft_power(10, j);
	}
	j = 0;
	while (j < ft_strlen(string))
	{
		number *= 10;
		j++;
	}
	ft_word_comp(number, dict);
	if (module > 9)
		add_zero(module, string, dict);
	return (number);
}