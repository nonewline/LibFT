#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *chr;

	if (len == 0)
		return (0);
	chr = (unsigned char *)b;
	while (len--)
	{
		*chr = (unsigned char)c;
		if (len)
			chr++;
	}
	return (b);
}
