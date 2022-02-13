#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	if((dst != NULL) && (src != NULL))
	{
		while (n)
		{
			*(unsigned char*)(dst++) = *(unsigned char*)(src++);
			n--;
		}
	}
	return (dst);
}
