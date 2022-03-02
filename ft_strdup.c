/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 01:47:53 by kaheinz           #+#    #+#             */
/*   Updated: 2022/03/02 06:21:10 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstring;
	int	i;

	newstring = malloc(ft_strlen(s) + 1);
	if (!newstring)
		return (NULL);
	while (i < ft_strlen(s))
	{
		newstring[i] = s[i];
		i++;
	}
	newstring[i] = 0;
	return (newstring);
	free(newstring);
}
