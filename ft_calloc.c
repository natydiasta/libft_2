#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*pnt;
	size_t	len;

	if (nelem != 0 && elsize > (-1 / nelem))
		return (0);
	len = nelem * elsize;
	pnt = malloc(len);
	if (!pnt)
		return (0);
	ft_memset(pnt, 0, len);
	return (pnt);
}
