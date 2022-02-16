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
		if (isdigit(str[i - '0']) == 0)
			return (-1);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int main (void)
{
	char stringy[] = "1";

	printf("%d", ft_atoi(stringy));
	return(0);
}
