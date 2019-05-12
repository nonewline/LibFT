#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dest_len;
	size_t j;

	dest_len = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (ft_strlen(src) + size);
}
