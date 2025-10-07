/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:17:33 by joateixe          #+#    #+#             */
/*   Updated: 2025/08/02 16:10:55 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_lenstrs(int size, char **strs, char *space)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < size)
	{
		c += ft_strlen(strs[i]);
		i++;
	}
	c += ft_strlen(space) * (size - 1);
	return (c);
}

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

char	*ft_strjoin(int size, char **strs, char *space)
{
	char	*str;
	char	*temp;
	int		x;

	x = 0;
	if (size == 0)
		return ((char *)malloc(sizeof (char)));
	str = (char *)malloc(sizeof (char) * (ft_lenstrs(size, strs, space) + 1));
	if (str == NULL)
		return (NULL);
	temp = str;
	while (x < size)
	{
		ft_strcpy(temp, strs[x]);
		temp += ft_strlen(strs[x]);
		if (x < size -1)
		{
			ft_strcpy(temp, space);
			temp += ft_strlen(space);
		}
		x++;
	}
	*temp = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{

	int		size;
	char	*space;
	char	**strs;
	char	*str;

	(void)argc;
	(void)argv;
	strs = (char**)malloc(sizeof (strs) * 5);
	strs[0] = "To";
	strs[1] = "test";
	strs[2] = "the";
	strs[3] = "code";
	strs[4] = "0123";
	space = "=";
	size = 0;
	while (size < 6)
	{
		str = ft_strjoin(size, strs, space);
		printf("%d: %s\n", size, str);
		free(str);
		size++;
	}
}*/
