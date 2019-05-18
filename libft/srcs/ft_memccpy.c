#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	char *s1;
	char *s2;
	size_t i;

	s1 = (char *)str1;
	s2 = (char *)str2;
	i = 0;
	while (i < n)
	{
	    	s1[i] = s2[i];
		if (s1[i] == c)
			return (s1 + i + 1);
		i++;
	}
	return (NULL);
}
