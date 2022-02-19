/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:30:17 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/18 21:26:48 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <strings.h>
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	lensrc;
	size_t	lendst;

	k = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	i = lendst;
	if (dstsize == 0 || dstsize < lendst)
		return (lensrc + dstsize);
	while (src[k] && i < dstsize - 1)
		dst[i++] = src[k++];
	dst[i] = 0;
	return (lendst + lensrc);
}
