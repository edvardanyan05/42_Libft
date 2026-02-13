/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:29:14 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/11 14:30:53 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	str_len;

	if (!s)
		return (0);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	new_str = malloc(len + 1);
	if (!new_str)
		return (0);
	ft_strlcpy(new_str, (s + start), (len + 1));
	return (new_str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*res;

	res = ft_substr("Hello, world!", 0, 5);
	printf("Test 1: \"%s\"\n", res);
	free(res);
	res = ft_substr("Hello, world!", 7, 5);
	printf("Test 2: \"%s\"\n", res);
	free(res);
	res = ft_substr("Hello, world!", 20, 5);
	printf("Test 3 (start too big): \"%s\"\n", res);
	free(res);
	res = ft_substr("", 0, 5);
	printf("Test 4 (empty string): \"%s\"\n", res);
	free(res);
	res = ft_substr("Hello", 2, 50);
	printf("Test 5 (len too big): \"%s\"\n", res);
	free(res);
	res = ft_substr(NULL, 0, 5);
	printf("Test 6 (NULL input): %s\n", res);
	// no free here, should be NULL
	return (0);
}
*/