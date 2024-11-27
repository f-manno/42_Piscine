/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:58:15 by fmanno            #+#    #+#             */
/*   Updated: 2024/11/27 11:45:23 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
int	main(void)
{
#include <stdio.h>

	int main()
	{
		char str[] = "Questo testo di prova non ha un problema";

		ft_strlen(str);
		printf("%d\n", ft_strlen(str));
	}*/
