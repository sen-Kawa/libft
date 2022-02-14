/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:54:55 by kaheinz           #+#    #+#             */
/*   Updated: 2022/02/14 15:58:57 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (*(unsigned char*)(s1)) != (*(unsigned char*)(s2))
			return (s1 - s2);
		else
		{
			i++;
			n--;
		}
	}
	return (0);
}

int	main(void)
{
	char	s[] = "hello";
	char	s2[] = "hello";
	int	ret;

	ret = ft_memcmp(s, s2, 4);
	if (ret < 0)
		printf("s1 is less than s2");
	else if (ret > 0)
		printf("s2 is less than s1");
	else
		printf("strings compared are equal");
	return(0);
}
