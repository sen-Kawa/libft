/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:49:33 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/17 20:34:09 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*bufdestination;
	unsigned char	*bufsource;

	bufdestination = (unsigned char *)dst;
	bufsource = (unsigned char *)src;
	if (!len || dst == src)
		return (dst);
	if (src < dst)
	{
		while (len-- > 0)
			*bufdestination + (len - 1) = *bufsource + (len - 1);
	}
	else
	{
		while (!len)
		{
			len --;
			*(bufdestination++) = *(bufsource++);
		}
	}
	return (dst);
}
