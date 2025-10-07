/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:57:36 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/22 18:05:52 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
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
	ft_str_is_uppercase("ADASD");
	write(1, "\n",1);
	ft_str_is_uppercase("asdAasd");
	write(1, "\n",1);
        ft_str_is_uppercase("Aasd");
	write(1, "\n",1);
        ft_str_is_uppercase("asdAasdA");
	write(1, "\n",1);
        ft_str_is_uppercase("");
}
*/
