/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:53:30 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/27 16:12:14 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	else
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
    printf("2^3 = %d\n", ft_iterative_power(2, 3));   // Expected: 8
    printf("5^0 = %d\n", ft_iterative_power(5, 0));   // Expected: 1
    printf("0^0 = %d\n", ft_iterative_power(0, 0));   // Expected: 1
    printf("3^4 = %d\n", ft_iterative_power(3, 4));   // Expected: 81
    printf("2^-2 = %d\n", ft_iterative_power(2, -2)); // Expected: 0

    return (0);
}*/
