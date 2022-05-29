/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:59:47 by kaheinz           #+#    #+#             */
/*   Updated: 2022/05/29 02:04:20 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *fmt, ...)
{
	int		len;
	int		i;
	va_list	args;

	va_start(args, fmt);
	len = 0;
	i = 0;
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			i++;
			len += cases(fmt[i], args);
		}
		else
		{
			ft_putchar_fd(fmt[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

int	cases(char type, va_list args)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += conv_c(args);
	else if (type == 's')
		len += conv_s(args);
	else if (type == 'p')
		len += conv_p(args);
	else if (type == 'd' || type == 'i')
		len += conv_i(args);
	else if (type == 'u')
		len += conv_u(args);
	else if (type == 'x')
		len += conv_x(args);
	else if (type == 'X')
		len += conv_upperx(args);
	else if (type == '%')
		len += write(1, "%", 1);
	else
		len += write(1, &type, 1);
	return (len);
}
