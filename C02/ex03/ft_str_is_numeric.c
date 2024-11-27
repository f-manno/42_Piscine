/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:01:20 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/19 18:11:00 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (!((str[l] >= '0') && (str[l] <= '9')))
		{
			return (0);
		}
		l++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char	str1[] = " ";
	char	str2[] = "58902";
	char	str3[] = "245prova";
	char    str4[] = "00 000";
	char	str5[] = "pr0va";

	int	output1 = ft_str_is_numeric(str1);
	int     output2 = ft_str_is_numeric(str2);
	int     output3 = ft_str_is_numeric(str3);
	int     output4 = ft_str_is_numeric(str4);
	int     output5 = ft_str_is_numeric(str5);

	printf("stringa1 : %d\n", output1);
	printf("stringa2 : %d\n", output2);
	printf("stringa3 : %d\n", output3);
	printf("stringa4 : %d\n", output4);
	printf("stringa5 : %d\n", output5);
}*/
