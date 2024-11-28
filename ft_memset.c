#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	l;

	l = 0;
	while (l < n)
	{
		((char *) s)[l] = c;
		l++;
	}
	return (s);
}
