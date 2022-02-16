#include <stdlib.h>
#include <ctype.h>
#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int  result;
	int	sign;

	result = 0;
	sign = 1;
	
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		sign = 1;
		str++;
	}
	
	while (*str && isdigit(*str) == 1 && (*str == ' ' || *str == '\n'
			                           || *str == '\f' || *str == '\r' 
									   || *str == '\t' || *str == '\v'))
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

int main (void)
{
	char stringy[] = "------47s";

	printf("%d\n", ft_atoi(stringy));
	printf("%d\n", atoi(stringy));
	return(0);
}
