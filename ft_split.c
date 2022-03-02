/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:40:38 by kaheinz           #+#    #+#             */
/*   Updated: 2022/03/02 07:04:48 by kaheinz          ###   ########.fr       */
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
	int		beg;
	int		end;

	beg = 0;
	i = 0;
	if (!s)
		return (NULL);
	spl = ft_calloc(count((char *)s, c) + 1, sizeof(char *));
	if (!spl)
		return (NULL);
	while (s[beg])
	{
		while (s[beg] == c && s[beg])
			beg++;
		end = beg;
		while ((s[end] != c) && s[end])
			end++;
		if (s[beg])
			spl[i] = ft_substr(s, beg, end - beg);
		i++;
		beg = end;
	}
	return (spl);
}
