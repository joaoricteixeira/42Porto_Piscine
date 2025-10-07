/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:22:19 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/22 12:08:02 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
void	ft_putchar(int c)
{
	char b = c + '0';
	write(1, &b, 1);
}

int	main(void)
{
	int x = 7;
	int y = 5;
	int d = 0;
	int m = 0;

	ft_div_mod(x, y, &d, &m);

	write(1, "div:  ", 5);
	ft_putchar(d);
	write(1, "\n", 1);
	write(1, "mod: ", 5);
	ft_putchar(m);
}
*/
