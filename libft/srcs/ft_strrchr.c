#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    size_t i;
    
    i = ft_strlen((char *)s);
    if (c == 0)
	return ((char *)s + i);
    while (i)
    {
	i--;
	if (c == s[i])
	    return ((char *)s + i);
    }
    return (NULL);
}
