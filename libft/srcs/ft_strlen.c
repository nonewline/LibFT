#include "libft.h"
#include <string.h>

size_t		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return ((size_t)i);
}
