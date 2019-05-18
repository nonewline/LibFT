#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
    char *s1;
    char *s2;
    size_t i;

    if (!*to_find)
	return ((char *)str);
    while (n && *str)
    {
	if (*str == *to_find)
	{
	    i = n;
	    s1 = (char *)str;
	    s2 = (char *)to_find;
	    while (i && *s1 && *s2 && *s1 == *s2)
	    {
		s1++;
		s2++;
		i--;
	    }
	    if (!*s2)
		return ((char *)str);
	}
	str++;
	n--;
    }
    return (NULL);
}
