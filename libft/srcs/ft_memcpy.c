#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char *str1c;
	char *str2c;
	size_t i;

	str1c = (char *)str1;
	str2c = (char *)str2;
	i = 0;
	while (i < n)
	{
		str1c[i] = str2c[i];
		i++;
	}
	return (str1c);
}
