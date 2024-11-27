/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:28:05 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/18 11:22:16 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp_swap;

	temp_swap = *a;
	*a = *b;
	*b = temp_swap;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 12;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}*/
