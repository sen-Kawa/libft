/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:40:38 by kaheinz           #+#    #+#             */
/*   Updated: 2022/03/02 06:42:09 by kaheinz          ###   ########.fr       */
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

static void	split(char const *s, char c, char **split)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (s[i] == c || !s[i])
		{
			*split = ft_substr(s, 0, i);
			while (s[i] == c)
				i++;
			split++;
			s += i;
			i = 0;
		}
		else
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**spl;

	if (!s)
		return (NULL);
	while (*s == c)
		s++;
	spl = ft_calloc(count((char *)s, c) + 1, sizeof(char *));
	if (!spl)
		return (NULL);
	split(s, c, spl);
	return (spl);
}
