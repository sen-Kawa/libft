/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:19:52 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/19 23:31:19 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	lengths2;

	lengths2 = ft_strlen(s2);
	if (*s2 == 0)
		return ((char *)s1);
	while (*s1 && n)
	{
		if (ft_strncmp(s1, s2, lengths2) == 0)
			return ((char *)s1);
		if (n <= lengths2)
			break ;
		n--;
		s1++;
	}
	return (NULL);
}
