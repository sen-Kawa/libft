/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_icsu.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:59:47 by kaheinz           #+#    #+#             */
/*   Updated: 2022/05/29 02:03:44 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	conv_i(va_list args)
{
	int		i;
	int		len;

	i = va_arg(args, int);
	len = nbr_len(i);
	ft_putnbr(i);
	return (len);
}

int	conv_c(va_list args)
{
	char	character;

	character = (char)va_arg(args, int);
	ft_putchar_fd(character, 1);
	return (1);
}	

int	conv_s(va_list args)
{
	char	*str;
	int		len;

	len = 0;
	str = va_arg(args, char *);
	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[len] != '\0')
	{
		write (1, &str[len], 1);
		len++;
	}
	return (len);
}

int	conv_u(va_list args)
{
	int				len;
	unsigned int	i;

	i = va_arg(args, unsigned int);
	len = nbr_len(i);
	unsigned_nbr(i);
	return (len);
}
