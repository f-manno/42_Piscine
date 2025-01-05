/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhefif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:26:50 by abkhefif          #+#    #+#             */
/*   Updated: 2024/11/10 21:20:59 by abkhefif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] >= 9 && str[i] <= 13 && str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if ((is_number(argv[1]) && is_number(argv[2]) == 1))
			rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else
			write(1, "Please enter a positive integers for x and y.\n", 46);
	}
	else
	{
		if (argc > 3)
			write(1, "Too many arguments, please enter both x and y.", 45);
		else if (argc < 3)
			write(1, "Not enough arguments, please enter both x and y.", 48);
	}
	return (0);
}
