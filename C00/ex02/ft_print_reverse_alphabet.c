/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:04:10 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/20 11:40:29 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	d;

	d = 'z';
	while (d >= 'a')
	{
		write(1, &d, 1);
		d = d - 1;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
