#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*locatedat;

	ptr = (unsigned char *)s;
	locatedat = NULL;
	while ((s != NULL) && (n--))
	{
		if (*ptr != (unsigned char)c)
		{
			ptr++;
		}
		else
		{
			locatedat = ptr;
			break ;
		}
	}
	return (locatedat);
}
