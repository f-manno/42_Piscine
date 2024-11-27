/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:03:43 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/18 17:08:57 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("Risultato divione: %d\n", a);
	printf("Resto: %d\n", b);
}*/
