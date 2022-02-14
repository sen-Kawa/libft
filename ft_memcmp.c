#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (unsigned char*)(s1[i]) != (unsigned char*)(s2[i])
				return (s1[i] - s2[i]);
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
