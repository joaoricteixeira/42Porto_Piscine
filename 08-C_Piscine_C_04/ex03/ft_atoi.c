/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:44:40 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/27 13:54:17 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	s;
	int	c;

	i = 0;
	n = 0;
	s = 1;
	c = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c++;
		i++;
	}
	if (c % 2 != 0)
		s = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * s);
}
/*
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char *tests[] = {
        "42",
        "   123",
        "+56",
        "-789",
        "++123",
        "--123",
        "+-123",
        "-+--+123",
        "   ---+--+1234ab567",
        "\t\n\r\v\f  -42",
        "  -42abc56",
        "   +--+12x34",
        "abc123",
        "--",
        "2147483647",
        "-2147483648",
        "99999999999", // overflow case
        "0000123",
        "   -0000",
        NULL // Sentinel to end the loop
    };

    int i = 0;
    while (tests[i] != NULL)
    {
        printf("ft_atoi(\"%s\") = %d\n", tests[i], ft_atoi(tests[i]));
        i++;
    }

    return 0;
}*/
