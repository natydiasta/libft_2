#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	unsigned int	src_l;
	unsigned int	dst_l;
	unsigned int	i;
	unsigned int	dsize_2;

	src_l = ft_strlen(src);
	dst_l = ft_strlen(dst);
	i = 0;
	while (i < dsize && dst[i])
		i++;
	dsize_2 = i;
	if (dsize < dst_l || dsize == 0)
		return (src_l + dsize);
	if (dst_l < dsize)
	{
		i = 0;
		while ((i < dsize - dst_l - 1) && src[i])
		{
			dst[dst_l + i] = src[i];
			i++;
		}
	}
	dst[dst_l + i] = '\0';
	return (src_l + dsize_2);
}
