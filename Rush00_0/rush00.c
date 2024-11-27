/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhefif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:06:59 by abkhefif          #+#    #+#             */
/*   Updated: 2024/11/10 21:22:46 by abkhefif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

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
			if ((yy == 0 && xx == 0) || (xx == 0 && yy == x - 1)
				|| (xx == y - 1 && yy == x - 1) || (yy == 0 && xx == y - 1))
				ft_putchar('o');
			else if (yy == 0 || yy == x - 1)
				ft_putchar('|');
			else if (xx == 0 || xx == y -1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			yy++;
		}
		ft_putchar('\n');
		xx++;
	}
}
