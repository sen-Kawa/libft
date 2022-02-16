#include <ctype.h>
//#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (*str)
	{
		//printf("%c\n", str[i]);
		if (isdigit(*str) == 0)
			return (-1);
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

int main (void)
{
	char stringy[] = "-3";

	printf("%d\n", ft_atoi(stringy));
	return(0);
}
