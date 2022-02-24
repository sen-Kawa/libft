/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:02:26 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/24 23:21:58 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	len;

	len = n;
	if (len < 0)
	{
		ft_putchar_fd('-', fd);
		len *= -1;
	}
	if (len <= 9)
		ft_putchar_fd(len + '0', fd);
	else
	{
		ft_putnbr_fd(len / 10, fd);
		ft_putnbr_fd(len % 10, fd);
	}
}
