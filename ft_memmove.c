/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:34:55 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/11 14:30:53 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "AAAAAAAAAA";
	int		i;

	char	src[20]  = "1234567890";
	printf("Before memmove:\n");
	printf("src : %s\n", src);
	printf("dest: %s\n", dest);
	// Move 5 bytes from src to dest
	ft_memmove(dest, src, 5);
	printf("\nAfter memmove:\n");
	printf("src : %s\n", src);
	printf("dest: %s\n", dest);
	// Overlapping test: move first 5 bytes to src+2
	ft_memmove(src + 2, src, 5);
	printf("\nAfter memmove (overlap in src):\n");
	printf("src : %s\n", src);
	printf("dest: %s\n", dest);
	// Visualize memory byte by byte
	printf("\nDest bytes: ");
	for (i = 0; i < 10; i++)
	printf("%02X ", (unsigned char)dest[i]);
	printf("\n");
	return (0);
}
*/