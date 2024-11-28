#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	char			*s1;

	if (!s)
		return (0);
	s2_len = ft_strlen(s);
	if (start >= s2_len)
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(s + start) < len)
		s1_len = ft_strlen(s + start);
	else
		s1_len = len;
	s1 = ft_calloc(s1_len + 1, sizeof(char));
	if (!s1)
		return (0);
	ft_strlcpy(s1, s + start, s1_len + 1);
	return (s1);
}
