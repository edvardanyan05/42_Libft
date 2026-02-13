/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:55:33 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/11 14:30:53 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && j > i)
	{
		if (!ft_strchr(set, s1[i]) && !ft_strrchr(set, s1[j - 1]))
			break ;
		if (ft_strchr(set, s1[i]))
			i++;
		if (ft_strrchr(set, s1[j - 1]))
			j--;
	}
	if (i == j)
		return (ft_strdup(""));
	new_str = malloc(j - i + 1);
	if (!new_str)
		return (0);
	ft_strlcpy(new_str, s1 + i, j - i + 1);
	return (new_str);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strtrim("hello", "gfhpo"));
	return (0);
}
*/
