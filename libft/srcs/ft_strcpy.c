#include "libft.h"

char	*ft_strcpy(char *dest, const char *srcs)
{
	int i;

	i = 0;
	while (srcs[i] != '\0')
	{
		dest[i] = srcs[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
