/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:19:59 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/19 20:37:51 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int     main()
{
        char    str0[] = "tEsTo";
        char    str1[] = "di";
        char    str2[] = "PROVA";

        ft_strlowcase(str0);
        ft_strlowcase(str1);
        ft_strlowcase(str2);
        printf("%s\n", str0);
        printf("%s\n", str1);
        printf("%s\n", str2);
	return (0);
}*/
