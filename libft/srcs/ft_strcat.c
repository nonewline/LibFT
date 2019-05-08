#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int dest_len;
	int i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
