/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:28:40 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/30 16:00:16 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	dif;
	int	*array;

	if (min >= max)
		return (0);
	dif = max - min;
	array = (int *)malloc(dif * sizeof(int));
	if (!array)
		return (-1);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (dif);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*range;
	int	size;

	// Test case 1: Normal case
	printf("Test case 1: Normal case (min < max)\n");
	size = ft_ultimate_range(&range, 5, 10);
	if (size == -1)
	{
		printf("Allocation failed.\n");
	}
	else if (size == 0)
	{
		printf("Min is not less than max.\n");
	}
	else
	{
		printf("Range: ");
		for (int i = 0; i < size; i++)
		{
			printf("%d ", range[i]);
		}
		printf("\nSize: %d\n", size);
		free(range);
	}
// Test case 2: Min equals max
	printf("\nTest case 2: Min equals max\n");
	size = ft_ultimate_range(&range, 10, 10);
	if (size == -1)
	{
		printf("Allocation failed.\n");
	}
	else if (size == 0)
	{
		printf("Min is not less than max.\n");
	}
	else
	{
		printf("Range: ");
		for (int i = 0; i < size; i++)
		{
			printf("%d ", range[i]);
		}
		printf("\nSize: %d\n", size);
		free(range);
	}
// Test case 3: Min greater than max
	printf("\nTest case 3: Min greater than max\n");
	size = ft_ultimate_range(&range, 20, 10);
	if (size == -1)
	{
		printf("Allocation failed.\n");
	}
	else if (size == 0)
	{
		printf("Min is not less than max.\n");
	}
	else
	{
		printf("Range: ");
	for (int i = 0; i < size; i++)
	{
	printf("%d ", range[i]);
	}
	printf("\nSize: %d\n", size);
	free(range);
	}
	return 0;
}*/
