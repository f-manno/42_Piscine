/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:59:26 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/19 20:17:41 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char	str0[] = "Testo";
	char	str1[] = "di";
	char	str2[] = "prOvA";

	ft_strupcase(str0);
	ft_strupcase(str1);
	ft_strupcase(str2);
	printf("Stringa0 %s\n", str0);
	printf("Stringa1 %s\n", str1);
	printf("Stringa2 %s\n", str2);
}*/
