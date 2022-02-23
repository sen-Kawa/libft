/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:33:38 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/23 13:34:15 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	start(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s1[i])
	{
		while (set[k])
		{
			if (s1[i] == set[k])
			{
				i++;
				k = 0;
				break ;
			}
			k++;
		}
		if (k == ft_strlen(set))
			break ;
	}
	return (i);
}

static size_t	end(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	i = ft_strlen(s1) - 1;
	k = 0;
	while (s1[i])
	{
		while (set[k])
		{
			if (s1[i] == set[k])
			{
				if (i != 0)
					i--;
				else
					return (i);
				k = 0;
				break ;
			}
			k++;
		}
		if (k == ft_strlen(set))
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	i = start(s1, set);
	k = end(s1, set);
	if (k == 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, i, (k - i) + 1));
}
