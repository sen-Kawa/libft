/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:49:33 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/17 05:56:15 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*bufdestination;
	char	*bufsource;

	bufdestination = (char *)dst;
	bufsource = (char *)src;
	if (bufsource != NULL)
	{
//		if (bufdestination > bufsource)

		while (len)
		{
			*(bufdestination++) = *(bufsource++);
			len--;
		}
	}
	return (dst);
}
