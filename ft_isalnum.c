/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:56:22 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/11 17:28:18 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("A: %d\n", ft_isalnum('A'));     // should be 1
	printf("z: %d\n", ft_isalnum('z'));     // should be 1
	printf("5: %d\n", ft_isalnum('5'));     // should be 1
	printf("!: %d\n", ft_isalnum('!'));     // should be 0
	printf("space: %d\n", ft_isalnum(' ')); // should be 0
	return (0);
}
*/
