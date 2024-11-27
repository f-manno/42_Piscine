/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createdict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valucare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:41:07 by valucare          #+#    #+#             */
/*   Updated: 2024/11/24 23:41:09 by valucare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	strcp_num(char *src, char *dest);
int		strlen(char *string);
void	strcp_alphabeth(char *src, char *dest);

char	*readict(char *dict)
{
	int		fd;
	int		size;
	int		n;
	char	*strdict;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (NULL);
	else
	{
		size = read(fd, strdict, 1000);
		strdict = (char *)malloc(ft_strlen(dict) * (sizeof(char) + 1));
		n = close(fd);
	}
	return (strdict);
}

char	**createdict(char *dict)
{
	char *strdict;
	char *num;
	char *word;
	char **matrix;
	int len;

	*num = "";
	*word = "";
	strdict = readict(dict);
	if (strdict != NULL)
	{
		matrix = (char **)malloc((sizeof(char *)) * 2);
		strcpy_num(strdict, dict);
		len = ft_strlen(strcpy_num(strdict, dict));
		*num = malloc(len * (sizeof(char)));
		len = 0;
		strcp_alphabeth(strdict, dict);
		len = ft_strlen(strcp_alphabet(strdict, dict));
		*word = malloc(len * (sizeof(char)));
		matrix[0] = num;
		matrix[1] = word;
	}
}
