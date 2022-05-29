/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:59:47 by kaheinz           #+#    #+#             */
/*   Updated: 2022/05/29 02:11:08 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	len;

	len = n;
	if (len < 0)
	{
		ft_putchar_fd('-', 1);
		len *= -1;
	}
	if (len <= 9)
		ft_putchar_fd(len + '0', 1);
	else
	{
		ft_putnbr(len / 10);
		ft_putnbr(len % 10);
	}
}

int	nbr_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	unsigned_nbr(unsigned int n)
{
	if (n >= 10)
	{
		unsigned_nbr(n / 10);
		unsigned_nbr(n % 10);
	}
	else
		ft_putchar_fd(n + '0', 1);
}
