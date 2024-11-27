/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:37:37 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/19 18:07:18 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		if (!((str[k] >= 'a' && str[k] <= 'z')
				|| (str[k] >= 'A' && str[k] <= 'Z')))
		{
			return (0);
		}
		k++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
    char	str1[] = " ";
    char	str2[] = "ProVa";
    char	str3[] = "prova";
    char	str4[] = "00000";
    char	str5[] = "pr0va";

    int	output1 = ft_str_is_alpha(str1);
    int	output2 = ft_str_is_alpha(str2);
    int	output3 = ft_str_is_alpha(str3);
    int	output4 = ft_str_is_alpha(str4);
    int	output5 = ft_str_is_alpha(str5);

    printf("stringa1 : %d\n", output1); 
    printf("stringa2 : %d\n", output2); 
    printf("stringa3 : %d\n", output3); 
    printf("stringa4 : %d\n", output4); 
    printf("stringa5 : %d\n", output5); 

    return 0;
}
*/
