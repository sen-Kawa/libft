/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:17:58 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/08 11:18:01 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*locatedat;

	ptr = (unsigned char *)s;
	locatedat = NULL;
	while ((s != NULL) && (n--))
	{
		if (*ptr != (unsigned char)c)
		{
			ptr++;
		}
		else
		{
			locatedat = ptr;
			break ;
		}
	}
	return (locatedat);
}
