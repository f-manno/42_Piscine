/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhefif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:20:25 by abkhefif          #+#    #+#             */
/*   Updated: 2024/11/10 21:22:12 by abkhefif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_corner(int xx, int yy, int x, int y)
{
	if (xx == 0 && yy == 0)
		ft_putchar('/');
	else if (xx == 0 && yy == x - 1)
		ft_putchar('\\');
	else if (xx == y - 1 && yy == 0)
		ft_putchar('\\');
	else if (xx == y - 1 && yy == x - 1)
		ft_putchar('/');
	else
		ft_putchar('*');
}

int	error(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write(1, "Please enter a positive value between 1 and 2147483647", 54);
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	xx;
	int	yy;

	xx = 0;
	if ((error(x, y) == 1))
		return ;
	if ((error(x, y)) == 0)
	{
		while (xx < y)
		{
			yy = 0;
			while (yy < x)
			{
				if (xx == 0 || xx == y - 1 || yy == 0 || yy == x - 1)
					print_corner(xx, yy, x, y);
				else
					ft_putchar(' ');
				yy++;
			}
			ft_putchar('\n');
			xx++;
		}
	}
}
