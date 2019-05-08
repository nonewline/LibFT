#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int dest_len;
	size_t i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0' && (i < n))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
