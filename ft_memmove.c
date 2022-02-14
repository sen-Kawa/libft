/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:49:33 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/14 11:49:36 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *bufdestination;
	char *bufsource;

	bufdestination = (char *)dst;
	bufsource = (char *)src;	
	if((bufdestination != NULL) && (bufsource != NULL))
	{
		while (len)
		{
			*(bufdestination++) = *(bufsource++);
			len--;
		}
	}
	return (dst);
}

int	main(void)
{
	char	s[] = "holiwis";
	char	d[30];

	ft_memmove(d, s, sizeof(char) * 30);
	printf("destination is: %s\n", d);
	ft_memmove(d, s, sizeof(s));
	printf("destination is: %s\n", d);
	return (0);
}
