/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:28:00 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/22 12:09:30 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	j;
	int	c[10];

	i = 0;
	j = 0;
	while (*str)
	{
		i++;
		str++;
	}
	while (i > 0)
	{
		c[j++] = (i % 10) + '0';
		i = i / 10;
	}
	while (--j >= 0)
	{
		write(1, &c[j], 1);
	}
	return (0);
}
/*
int	main(void)
{
	ft_strlen("string to test the code to see if it works well");
}*/
