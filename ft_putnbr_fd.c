/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmvarda <edmvarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:52:23 by edmvarda          #+#    #+#             */
/*   Updated: 2026/02/12 22:29:22 by edmvarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(-248, 1);
	printf("%c", '\n');
	ft_putnbr_fd(-2147483648, 1);
	printf("%c", '\n');
	ft_putnbr_fd(0, 1);
	printf("%c", '\n');
	ft_putnbr_fd(1234, 1);
	return (0);
}
*/