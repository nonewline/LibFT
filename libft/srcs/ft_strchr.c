#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
