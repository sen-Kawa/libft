/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 06:27:47 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/17 06:30:56 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <ctype.h>
#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		sign = 1;
		str++;
	}
	
	while (*str && ft_isdigit(*str) == 1 && (*str == ' ' || *str == '\n'
			                           || *str == '\f' || *str == '\r' 
									   || *str == '\t' || *str == '\v'))
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}
