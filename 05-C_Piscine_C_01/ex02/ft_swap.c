/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:00:10 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/22 12:07:45 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
/*
void	putchar(int c)
{
	char b = c + '0';
	write(1, &b, 1);
}

int	main(void)
{
	int x = 3;
	int y = 4;
	
	write(1, "before x: ", 10);
	putchar(x);
	write(1, " before y: ", 11);
	putchar(y);
	write(1, "\n", 1);

	ft_swap(&x, &y);

	write(1, "after x: ", 9);
	putchar(x);
	write(1, " after y: ", 10);
	putchar(y);
}
*/
