/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:29:39 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/17 14:26:22 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	i;
	char	j;

	i = 'N';
	j = 'P';
	if (n < 0)
	{
		write (1, &i, 1);
	}
	else
	{
		write (1, &j, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(20);
	return (0);
}
*/
