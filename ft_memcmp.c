#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*b;
	unsigned char	*c;
	size_t			i;

	i = 0;
	b = (unsigned char *)s1;
	c = (unsigned char *)s2;
	while (i < n)
	{
		if (b[i] != c[i])
			return ((int)b[i] - (int)c[i]);
		i++;
	}
	return (0);
}
