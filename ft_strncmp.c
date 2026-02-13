/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:02:02 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/11 14:30:53 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", strncmp("hello", "hello", 5)); // 0
	printf("%d\n", strncmp("hello", "hellp", 5)); // < 0
	printf("%d\n", strncmp("hellp", "hello", 5)); // > 0
	printf("%d\n", strncmp("hello", "hello", 3)); // 0
	printf("%d\n", strncmp("hello", "he", 5));    // > 0
	printf("%d\n", strncmp("he", "hello", 5));    // < 0
	printf("%d\n", strncmp("hello", "hello", 0)); // 0
	return (0);
}
*/