/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:54:45 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/20 10:17:43 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char	str0[] = " ";
	char	str1[] = "prova";
	char	str2[] = "01234";
	char	str3[] = "Pr0vA" ;

	int	output0 = ft_str_is_printable(str0);
	int	output1 = ft_str_is_printable(str1);
	int	output2 = ft_str_is_printable(str2);
	int	output3 = ft_str_is_printable(str3);

	printf("stringa0: %d\n", output0);
	printf("stringa1: %d\n", output1);
	printf("stringa2: %d\n", output2);
	printf("stringa3: %d\n", output3);	
}*/
