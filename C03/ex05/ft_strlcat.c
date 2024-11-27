/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:40:32 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/27 09:41:10 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// non compila
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = 0;
	src_len = 0;
	j = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	msg[] = "ciao hello helloo";
	char	msg2[] = "prova";

	msg[23] = 0;
	// printf("%ld\n", strlcat(msg, msg2, 35));
	printf("%d\n", ft_strlcat(msg, msg2, 35));
	printf("\n%s\n", msg);
	printf("%s\n", msg2);
}*/
