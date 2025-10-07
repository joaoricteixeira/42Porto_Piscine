/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:13:03 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/27 16:29:51 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if ((power == 0 && nb == 0) || (power == 0))
		return (1);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
#include <stdio.h>
int	main(void)
{
	printf("2^3 = %d\n", ft_recursive_power(2, 3));   // Expected: 8
	printf("5^0 = %d\n", ft_recursive_power(5, 0));   // Expected: 1
	printf("0^0 = %d\n", ft_recursive_power(0, 0));   // Expected: 1
	printf("3^4 = %d\n", ft_recursive_power(3, 4));   // Expected: 81
	printf("2^-2 = %d\n", ft_recursive_power(2, -2)); // Expected: 0
}*/
