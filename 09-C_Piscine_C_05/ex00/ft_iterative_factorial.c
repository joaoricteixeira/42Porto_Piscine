/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 14:33:46 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/27 14:55:20 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (i < nb)
		{
			j = j * (i + 1);
			i++;
		}
		return (j);
	}
}
/*
#include <stdio.h>
int main(void)
{
    int test_values[] = {0, 1, 5, 10, -3};
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < num_tests; i++)
    {
        int value = test_values[i];
        int result = ft_iterative_factorial(value);
        printf("ft_iterative_factorial(%d) = %d\n", value, result);
    }

    return 0;
}*/
