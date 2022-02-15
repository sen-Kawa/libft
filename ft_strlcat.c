/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcatprogram.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:30:17 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/15 13:35:07 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <strings.h>
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	lendst;
	int	lensrc;
	int	newdstlen;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	ft_memcpy(dst + lendst, src, lensrc);
	newdstlen = ft_strlen(dst);
	dst[newdstlen] = 0;
	return (newdstlen);
}
