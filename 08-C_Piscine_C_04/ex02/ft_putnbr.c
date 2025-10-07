/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:21:31 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/27 13:13:11 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-214", 4);
		nb = 7483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
	}
	i = (nb % 10) + '0';
	write (1, &i, 1);
}
/*
int	main(void)
{
	int a = -2147483648;
	ft_putnbr(a);
	write(1, "\n", 1);
	int b = 2147483647;
        ft_putnbr(b);
	write(1, "\n", 1);
	int c = 0;
        ft_putnbr(c);
	write(1, "\n", 1);
	return (0);
}*/
