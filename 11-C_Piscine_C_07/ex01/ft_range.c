/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:57:45 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/30 15:27:13 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	dif;
	int	*array;

	dif = max - min;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(dif * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int main(void)
{
    int min = 10;
    int max = 30;
    int *range = ft_range(min, max);

    if (range == NULL)
        return 1;

    for (int i = 0; i < max - min; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);
    return 0;
}*/
