#include "libft.h"

static char	is_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		s1_len;
	char	*s2;

	i = 0;
	if (!s1)
		return (0);
	s1_len = ft_strlen(s1);
	while (is_set(s1[i], set))
		i++;
	if (i == s1_len)
		return (ft_strdup(""));
	j = s1_len - 1;
	while (is_set(s1[j], set))
		j--;
	s2 = ft_calloc(j - i + 2, sizeof(char));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s1 + i, j - i + 2);
	return (s2);
}
