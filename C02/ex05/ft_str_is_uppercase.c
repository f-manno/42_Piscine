/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:37:04 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/19 18:53:13 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
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
	char	str1[] = "PROVA";
	char	str2[] = "prova";
	char	str3[] = "pr0va";
	char	str4[] = "01234";

	int	output0 = ft_str_is_uppercase(str0);
	int     output1 = ft_str_is_uppercase(str1);
	int     output2 = ft_str_is_uppercase(str2);
	int     output3 = ft_str_is_uppercase(str3);
	int     output4 = ft_str_is_uppercase(str4);

	printf("stringa0: %d\n", output0);
	printf("stringa1: %d\n", output1);
	printf("stringa2: %d\n", output2);
	printf("stringa3: %d\n", output3);
	printf("stringa4: %d\n", output4);
}*/
