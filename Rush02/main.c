#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		add_zero(int number, char *string,
			char *dict) char **createdict(char *dict);

int		check(char *str);

void	strcp_num(char *src, char *dest);
		// convertite in compare piuttosto che copy

int	main(int ac, char **av)
{
	char	*pointer;
		int nb;

	createdict("numbers.dict");
	if (ac == 2)
	{
		pointer = av[1];
		if (ft_strcmp(dict, pointer))
		{
			ft_putstr(pointer);
		}
		else
		{
			nb = ft_atoi(pointer);
			add_zero(nb, pointer, dict);
		}
	}
	return (0);
}
