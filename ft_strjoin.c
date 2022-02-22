/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:58:49 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/22 20:54:03 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*concatenated;
	int			lens1;
	int			lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	concatenated = malloc(lens1 + lens2 + 1);
	if (concatenated)
	{
		ft_memcpy(concatenated, s1, lens1);
		ft_memcpy(concatenated + lens1, s2, lens2 + 1);
	}
	return (concatenated);
}
