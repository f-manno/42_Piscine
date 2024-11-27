/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:21:50 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/21 19:06:09 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9) && (str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

#include <stdio.h>

int main() {
    // Test con numeri positivi e negativi
    printf("%d\n", ft_atoi("  \t\n-42"));   // -42
    printf("%d\n", ft_atoi("42"));          // 42
    printf("%d\n", ft_atoi("+1234"));       // 1234
    printf("%d\n", ft_atoi(" 0042"));       // 42
    printf("%d\n", ft_atoi("  +0042"));     // 42
    printf("%d\n", ft_atoi("  -0042"));     // -42

    // Test senza segno
    printf("%d\n", ft_atoi("000123"));      // 123

    // Test con stringhe vuote
    printf("%d\n", ft_atoi(""));            // 0
    printf("%d\n", ft_atoi("    "));        // 0

    return 0;
}
