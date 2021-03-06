/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:49:33 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/18 21:23:54 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*bufdestination;
	char	*bufsource;

	bufdestination = (char *)dst;
	bufsource = (char *)src;
	if (!len || dst == src)
		return (dst);
	if (src < dst)
		while (len-- > 0)
			*(bufdestination + len) = *(bufsource + len);
	else
		while (len-- > 0)
			*(bufdestination++) = *(bufsource++);
	return (dst);
}
