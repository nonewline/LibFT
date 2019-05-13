#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *srcc;
	char *dstc;
	size_t i;

	i = 0;
	srcc = (char *)src;
	dstc = (char *)dest;
	if (srcc < dstc)
		while (--n)
			*(dstc + n) = *(srcc + n);
	else
		while (i < n)
		{
			*(dstc + i) = *(srcc + i);
			i++;
		}
	return (dest);
}
