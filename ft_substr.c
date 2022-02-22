#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	substring = malloc(len + 1);
	if (!s || !substring)
		return (NULL);
	while (i < len)
	{
		*(substring + i) = *(s + start);
   		i++;
		start++;
	}	
	*(substring + i) = 0;
	return (substring);
}
