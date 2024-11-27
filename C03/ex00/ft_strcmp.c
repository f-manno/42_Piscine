/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:45:20 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/20 17:45:33 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main()
{
	char	str0 [] = "Testo";
	char	str1 [] = "Test";
	char	str2 [] = "Testo";
	char	str3 [] = "prova";
	char    str4 [] = "Testone";

	printf("Stringa0 e Stringa1: %d\n", ft_strcmp(str0, str1));
	printf("Stringa0 e Stringa2: %d\n", ft_strcmp(str0, str2));
	printf("Stringa0 e Stringa3: %d\n", ft_strcmp(str0, str3));
	printf("Stringa0 e Stringa4: %d\n", ft_strcmp(str0, str4));
}*/
/* string compare confrontra due stringhe.
Restituisce differenza carattere non coincidente stringhe.

in alternativa posso usare direttamente i puuntatori per iterare

	while(*s1 == *s2 && *s1 != '\0')
		{
		s1++;
		s2++;
		}
		return(*s1 - *s2) */
