/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:37:38 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/11 14:30:53 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	str = malloc(s_len + 1);
	if (!str)
		return (0);
	return ((char *)ft_memcpy(str, s, (s_len + 1)));
}
/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
		char	*src;
		char	*dup;

		src = "Hello, 42!";
		dup = ft_strdup(src);
		if (!dup)
		{
				printf("ft_strdup failed\n");
				return (1);
		}
		printf("Original: %s\n", src);
		printf("Duplicate: %s\n", dup);
		free(dup);
		retu

*/