#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3 = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!s3)
		return (0);
	ft_strlcpy(s3, s1, s1_len + 1);
	ft_strlcpy(s3 + s1_len, s2, s2_len + 1);
	return (s3);
}
