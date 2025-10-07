/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:50:44 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/22 17:31:46 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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
	ft_str_is_lowercase("asdasdasd");
	write(1, "\n", 1);
	ft_str_is_lowercase("");
        write(1, "\n", 1);
	ft_str_is_lowercase("asdaAdasd");
        write(1, "\n", 1);
	ft_str_is_lowercase("Asdasdasd");
        write(1, "\n", 1);
	ft_str_is_lowercase("sdasdasdA");
	//to test add write before the return
}*/
