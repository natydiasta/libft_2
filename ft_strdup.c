#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*pnt;
	size_t		i;

	pnt = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!pnt)
		return (0);
	i = 0;
	while (s[i])
	{
		pnt[i] = s[i];
		i++;
	}
	pnt[i] = '\0';
	return (pnt);
}
