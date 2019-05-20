#include "libft.h"

char        *ft_strncat(char *dest, const char *src, size_t n)
{
	int     len;
	size_t  i;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
