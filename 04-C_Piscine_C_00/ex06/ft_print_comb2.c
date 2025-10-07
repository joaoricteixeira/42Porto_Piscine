/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:34:20 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/19 16:40:15 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	n[5];
	char	x;
	char	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			n[0] = x / 10 + '0';
			n[1] = x % 10 + '0';
			n[2] = ' ';
			n[3] = y / 10 + '0';
			n[4] = y % 10 + '0';
			write(1, n, 5);
			if (!(x == 98 && y == 99))
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
/*
int main (void)
{
        ft_print_comb2();
        return (0);
}
*/
