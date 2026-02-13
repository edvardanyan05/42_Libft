/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:45:51 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/11 14:30:53 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	const char	*tests[] = {"", "Hello", "42", "libft is fun",
	"Lorem ipsum dolor sit amet"};
	i = 0;
	while (i < 5)
	{
		printf("ft_strlen(\"%s\") = %zu\n", tests[i], ft_strlen(tests[i]));
		i++;
	}
	return (0);
}
*/