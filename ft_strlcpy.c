/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:52:07 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/11 14:30:53 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[5];
	size_t	ret;

	ret = ft_strlcpy(dst, "HelloWorld", sizeof(dst));
	printf("dst = \"%s\"\n", dst);
	printf("return (= %zu\n", ret));
	ret = ft_strlcpy(dst, "Hi", sizeof(dst));
	printf("dst = \"%s\"\n", dst);
	printf("return (= %zu\n", ret));
	ret = ft_strlcpy(dst, "Test", 0);
	printf("return (size=0) = %zu\n", ret);
	return (0);
}
*/