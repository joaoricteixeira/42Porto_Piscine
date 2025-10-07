/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:25:49 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/22 17:34:16 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	ft_str_is_numeric("123234345");
	write(1, "\n", 1);
	ft_str_is_numeric("");
	write(1, "\n", 1);
	ft_str_is_numeric("123A123");
	write(1, "\n", 1);
	ft_str_is_numeric("123A");
	write(1, "\n", 1);
	ft_str_is_numeric("A123235");
}*/
