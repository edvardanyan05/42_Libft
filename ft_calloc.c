/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:51:30 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/12 22:27:37 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*calloc_ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (0);
	calloc_ptr = malloc(nmemb * size);
	if (!calloc_ptr)
		return (0);
	ft_bzero(calloc_ptr, nmemb * size);
	return ((void *)calloc_ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned char	*p;

	p = ft_calloc(10, sizeof(unsigned char));
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);
	p = 0;
	return (0);
}
*/