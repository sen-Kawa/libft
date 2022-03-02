/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:40:38 by kaheinz           #+#    #+#             */
/*   Updated: 2022/03/02 06:49:44 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	count;

	count = 1;
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
			if (*s)
				count++;
		}
		if (*s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	spl = ft_calloc(count((char *)s, c) + 1, sizeof(char *));
	if (!spl)
		return (NULL);
	while (*s)
	{
		if (s[i] == c || !s[i])
		{
			*spl = ft_substr(s, 0, i);
			while (s[i] == c)
				i++;
			spl++;
			s += i;
			i = 0;
		}
		else
			i++;
	}
	return (spl);
}
