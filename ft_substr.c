/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:16:39 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/22 19:31:16 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	i = 0;
	substring = malloc(len + 1);
	if (!s || !substring)
		return (NULL);
	while (i < len)
	{
		*(substring + i) = *(s + start);
		i++;
		start++;
	}	
	*(substring + i) = 0;
	return (substring);
}
