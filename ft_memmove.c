#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!((char *)dest) && !((char *)src))
		return (0);
	if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(((char *)dest), ((char *)src), n);
	return (((char *)dest));
}
