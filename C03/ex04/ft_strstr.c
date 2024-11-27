/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:44:58 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/25 18:58:17 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	k;

	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[j])
	{
		k = 0;
		while (to_find[k] == str[j + k] && to_find[k] != '\0')
		{
			k++;
		}
		if (to_find[k] == '\0')
		{
			return (str + j);
		}
		j++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	stringa [] = "I tori giocavano a palla con i sommozzatori increduli";
	char	da_cercare [] = "giocavano";

	printf("Risultato ricerca = %s\n", ft_strstr(stringa, da_cercare));
}*/
