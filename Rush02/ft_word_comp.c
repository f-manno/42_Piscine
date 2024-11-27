char	*ft_itoa(int nbr);
int		ft_strlen(char *string);
void	ft_strcmp(char *dict, char *n_cmp);

void	ft_word_comp(int number, char *dict)
{
	int i;
	char *string;
	char ten[3];  //
	char unit[2]; //

	string = ft_itoa(number);
	i = ft_strlen(ft_itoa(number)); // vediamo se norminette sbrocca
	if (i == 2)
		ft_strcmp(dict, string);
	else if ((i - 2) % 6 == 0)
	{
		ten[0] = string[0]; // prendo prima cifra numero a sx
		ten[1] = string[1]; // prendo seconda cifra numero a sx
		ft_strcmp(dict, ten);
	}
	else if ((i - 3) % 6 == 0)
	{
		unit[0] = string[0]; // prendo prima cifra numero a sx
		ft_strcmp(dict, unit);
		ft_putstr()
	}
}