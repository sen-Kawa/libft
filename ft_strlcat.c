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
	size_t	lendst;
	size_t	lensrc;
	size_t	newdstlen;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	while (dstsize == 0 || dstsize < lendst)
		return (lensrc + dstsize);
	ft_memcpy(dst + lendst, src, (dstsize - lendst - 1));
	newdstlen = ft_strlen(dst);
	dst[newdstlen] = 0;
	return (lendst + lensrc);
}
