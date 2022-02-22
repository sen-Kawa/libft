/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:16:39 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/22 19:34:44 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	lens1;

	i = 0;
	lens1 = ft_strlen(s);
	substring = malloc(len + 1);
	if (!s && !substring)
		return (NULL);
	if (start >= lens1)
	{
		substring[0] = 0;
		return (substring);
	}
	while (i < len && s[i + start])
	{
		substring[i] = s[i + start];
		i++;
	}	
	substring[i] = '\0';
	return (substring);
}
