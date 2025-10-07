/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joateixe <joateixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 22:42:09 by joateixe          #+#    #+#             */
/*   Updated: 2025/07/30 02:16:51 by joateixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	if (src == NULL)
		return (NULL);
	while (src[i])
		i++;
	dest = (char *)malloc(i + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
    char *original = "Hello, World!";
    char *duplicate;

    // Test the ft_strdup function
    duplicate = ft_strdup(original);

    if (duplicate == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);

    // Free the allocated memory
    free(duplicate);

    // Test with NULL input
    char *null_duplicate = ft_strdup(NULL);
    if (null_duplicate == NULL)
    {
        printf("ft_strdup correctly handled NULL input.\n");
    }

    return 0;
}*/
