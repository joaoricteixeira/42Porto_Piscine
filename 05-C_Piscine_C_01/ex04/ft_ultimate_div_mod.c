/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:49:33 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/21 16:08:27 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *a / *b;
	*b = t % *b;
}
/*
void ft_putchar(int c)
{
	int b = c + '0';
	write(1, &b, 1);
}

int	main(void)
{
	int i = 7;
	int j = 5;

	write(1, "i: ", 3);
	ft_putchar(i);
	write(1, "\nb: ", 4);
	ft_putchar(j);

	ft_ultimate_div_mod(&i, &j);

	write(1, "\na: ", 4);
	ft_putchar(i);
	write(1, "\nb: ", 4);
	ft_putchar(j);
}
*/
