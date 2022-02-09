/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:40:42 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/06 17:40:46 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && i < n)
		{
			if (*s1 == *s2)
				return (0);
			s1++;
			s2++;
			i++;	
		}
	return(1);
}

int	main(void)
{
	printf("%i", ft_strncmp("Hey", "hey", 2));
	return(0);
}
