/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:39:41 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/20 17:43:24 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

-  verifica puntatore != NULL
- iterare
- copia anche \0
- funzione deve terminare con \0

ciclo con while
 */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	ui;

	ui = 0;
	while (ui < n && src[ui] != '\0')
	{
		dest[ui] = src[ui];
		ui++;
	}
	dest[ui] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[] = "Testo di prova";
	char dest[100];

	ft_strncpy(dest, src, 5);
	printf("Destinazione: %s\n", dest);
}*/
