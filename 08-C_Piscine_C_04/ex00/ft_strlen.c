/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:58:05 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/27 12:54:11 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *test1 = "Hello, world!";
    char *test2 = "";
    char *test3 = "42 is the answer.";

    printf("Length of '%s': %d\n", test1, ft_strlen(test1));
    printf("Length of empty string: %d\n", ft_strlen(test2));
    printf("Length of '%s': %d\n", test3, ft_strlen(test3));

    return 0;
}*/
