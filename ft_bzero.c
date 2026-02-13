/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:28:01 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/11 22:04:19 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
		char	str[20];
		int		i;

		i = 0;
		while (i < 19)
		{
				str[i] = 'A';
				i++;
		}
		str[19] = '\0';
		printf("Before bzero: \"%s\"\n", str);
		ft_bzero(str, 10);
		printf("After  bzero: \"");
		i = 0;
		while (i < 19)
		{
				if (str[i] == '\0')
				printf("\\0");
				else
				printf("%c", str[i]);
		i++;
}
printf("\"\n");
return (0);
}
*/
