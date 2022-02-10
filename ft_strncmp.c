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
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
		{
	//		if (i == n)
	//			return (0);
		//	s1++;
		//	s2++;
			i++;	
		}
	return(s1[i] - s2[i]);
}

int	main(void)
{
	printf("%i\n", ft_strncmp("hey", "hey", 3));
	printf("%i\n", ft_strncmp("hey", "Hey", 3));
	printf("%i\n", ft_strncmp("hey", "hez", 3));
	printf("%i\n", ft_strncmp("hez", "hey", 3));
	printf("%i\n", ft_strncmp("aey", "hey", 3));
	printf("%i\n", ft_strncmp("hey", "aey", 3));
	return(0);
}
