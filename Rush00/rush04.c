/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhefif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:32:56 by abkhefif          #+#    #+#             */
/*   Updated: 2024/11/10 21:38:16 by abkhefif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_corner(int xx, int yy, int x, int y)
{
	if (xx == 0 && yy == 0)
		ft_putchar('A');
	else if (xx == 0 && yy == x - 1)
		ft_putchar('C');
	else if (xx == y - 1 && yy == 0)
		ft_putchar('C');
	else if (xx == y - 1 && yy == x - 1)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	xx;
	int	yy;

	xx = 0;
	while (xx < y)
	{
		yy = 0;
		while (yy < x)
		{
			if (xx == 0 || xx == y - 1 || yy == 0 || yy == x - 1)
			{
				print_corner(xx, yy, x, y);
			}
			else
			{
				ft_putchar(' ');
			}
			yy++;
		}
		ft_putchar('\n');
		xx++;
	}
}
