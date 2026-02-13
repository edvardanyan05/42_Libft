/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 21:31:50 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/11 21:57:57 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (i < ft_strlen(s))
	{
		f(i, s + i);
		i++;
	}
}

/*
void	my_func(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main(void)
{
	char	str[] = "abcd";
    
	ft_striteri(str, my_func);
	printf("%s\n", str);
	return (0);
}
*/
