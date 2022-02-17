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
	size_t	i;

	bufdestination = (char *)dst;
	bufsource = (char *)src;
	i = 0;
	if (bufsource == NULL && bufdestination == NULL)
		return (NULL);
	if (bufsource < bufdestination)
	{
		while (i++ <= len)
			bufdestination[len - i] = bufsource[len - i];
	}
	else
		while (len-- > 0)
			*(bufdestination++) = *(bufsource++);
	return (dst);
}
