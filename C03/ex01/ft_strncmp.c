/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:31:35 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/25 16:23:29 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && (s1[i] == s2[i]))
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char str0[] = "Prova";
	char str1[] = "Prova";
	char str2[] = "Pro";
	char str3[] = "Testo";
	
	printf("%d\n", ft_strncmp(str0, str1, 4));
	printf("%d\n", ft_strncmp(str0, str2, 4));
	printf("%d\n", ft_strncmp(str0, str3, 4));
}*/
