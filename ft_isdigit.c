/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:13:47 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/11 14:30:53 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	tests[] = {'0', '5', '9', 'a', 'Z', ' ', '1'};
	int		i;

	i = 0;
	while (i < 7)
	{
		printf("ft_isdigit('%c') = %d\n", tests[i], ft_isdigit(tests[i]));
		i++;
	}
	return (0);
}
*/