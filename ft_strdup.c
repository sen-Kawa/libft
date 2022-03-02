/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 01:47:53 by kaheinz           #+#    #+#             */
/*   Updated: 2022/03/02 06:06:19 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstring;

	newstring = malloc(ft_strlen(s) + 1);
	ft_strlcpy(newstring, s, ft_strlen(newstring));
	if (newstring == NULL)
		return (NULL);
	return (newstring);
	free (newstring);
}
