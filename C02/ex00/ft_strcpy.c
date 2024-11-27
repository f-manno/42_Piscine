/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:39:49 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/18 13:28:40 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// i = operatore di scorrimento

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "prova";
	char	dest[20];

		printf("Stringa di origine = %s\n", src);
	ft_strcpy(dest, src);
	printf("Stringa di destinazione = %s\n", dest);
}*/
