/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:28:14 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/28 15:13:46 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int i = 0;
	if(argc == 2)
	{

		i = atoi(argv[1]);
		printf("%d\n", ft_sqrt(i));
	}
}*/
