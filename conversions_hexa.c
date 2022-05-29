/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_hexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:12:42 by kaheinz           #+#    #+#             */
/*   Updated: 2022/05/29 02:11:45 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	conv_p(va_list args)
{
	void	*ptr;
	int		len;

	ptr = va_arg(args, void *);
	if (!ptr)
	{
		write(1, "0x0", 3);
		len = 3;
		return (len);
	}
	else
	{
		len = hexa_len((unsigned long)ptr) + 2;
		write(1, "0x", 2);
		hexa_nbr((unsigned long)ptr, "0123456789abcdef");
		return (len);
	}
}

int	conv_x(va_list args)
{
	int				len;
	unsigned int	nbr;

	nbr = va_arg(args, int);
	len = hexa_len(nbr);
	hexa_nbr((unsigned long)nbr, "0123456789abcdef");
	return (len);
}

int	conv_upperx(va_list args)
{
	int				len;
	unsigned int	nbr;

	nbr = va_arg(args, int);
	len = hexa_len(nbr);
	hexa_nbr((unsigned long)nbr, "0123456789ABCDEF");
	return (len);
}

void	hexa_nbr(unsigned long n, char *str)
{
	int	base;
	int	i;

	base = 16;
	if (n / base != 0)
		hexa_nbr((n / base), str);
	i = n % base;
	write(1, &str[i], 1);
}

int	hexa_len(unsigned long nbr)
{
	int	len;

	len = 1;
	while (nbr / 16)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}
